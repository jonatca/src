#!/usr/bin/env python
import sys

sys.path.append("/home/kandidatarbete/450/src/calculations")
import rospy
import tf.transformations
import signal
import json
from geometry_msgs.msg import Twist, PoseStamped
from sensor_msgs.msg import NavSatFix
# from gps_common.msg import NavSatFix
import numpy as np
from calc_velocities import CalcVelocities
from paint import get_paint_order
from plot_data2 import plot_data
from change_goal import change_goal
from coord_sys_trans import *
from imu import *
import datetime
class Drive_to:
    def __init__(self, reset_angle=True):
        self.update_freq = 10.0  # Hz but doesn't work? stuck at 10 Hz
        self.store_data = True
        self.data = {
            "x": [],
            "y": [],
            "x_goal": [],
            "y_goal": [],
            "x_mid": [],
            "y_mid": [],
            "radius": [],
            "x_gps": [],
            "y_gps": [],
            "lat": [],
            "lon": [],
            "lat_start": [],
            "lon_start": [],
            "angle_north": [],
            "angle_north_init": [],
            "covariance": [],
            "angle": [],
        }
        self.x = None 
        self.y = None
        self.x_start = None
        self.y_start = None
        self.init_angle = None
        self.radius = None
        self.drive_in_circle = False
        self.reset_angle = reset_angle
        self.twist = Twist()
        self.lat_start = None
        self.lon_start = None
        self.covariance = None

        self.calc_velocities = None  
        self.reached_goal = False
        rospy.init_node("move_forward")
        self.pub = rospy.Publisher("/cmd_vel", Twist, queue_size=10)
        sub = rospy.Subscriber("/pose", PoseStamped, self.pose_callback)
        self.gps_sub = rospy.Subscriber("/GPSfix", NavSatFix, self.gps_callback)
        self.rate = rospy.Rate(self.update_freq) 
        self.order = get_paint_order()
        self.angle_north = 0#np.pi 
        self.phi = 0
        self.min_data_points = 10
        self.max_data_points = 20
    
    def gps_callback(self, fix):
        if self.lat_start is None and self.lon_start is None:
            self.lat_start = fix.latitude
            self.lon_start = fix.longitude
            if self.lat_start <= 10:
                self.lat_start = 57.68727
                self.lon_start = 11.97958
            self.data["lat_start"].append(self.lat_start)
            self.data["lon_start"].append(self.lon_start)
            self.data["angle_north_init"].append(0)
            self.data["lat"].append(self.lat_start)
            self.data["lon"].append(self.lon_start)
        lat = fix.latitude
        lon = fix.longitude
        # x_gps, y_gps = self.convert_to_xy(fix.latitude, fix.longitude, self.lat_start, self.lon_start)
        x_gps, y_gps = convert_lat_lon_to_utm(lat, lon)
        if len(self.data["x_gps"]) == self.min_data_points:
            k1,m1 = best_fit_line(self.data["x_gps"], self.data["y_gps"])
            k2, m2 = best_fit_line(self.data["x"], self.data["y"])
            self.phi = angle_between_lines(k1, m1, k2, m2)
            print("phi", self.phi)
            self.data["k1"] = k1
            self.data["k2"] = k2
            self.data["m1"] = m1
            self.data["m2"] = m2


        x_gps, y_gps = rotate_point(x_gps, y_gps, self.x_start, self.y_start, -self.phi) 
        # x_gps, y_gps = rotate_point(x_gps, y_gps, self.x_start, self.y_start, np.pi/2)
        self.data["x_gps"].append(x_gps)
        self.data["y_gps"].append(y_gps)
        self.data["lat"].append(lat)
        self.data["lon"].append(lon)
        self.data["angle_north"].append(self.angle_north)
        #TODO update angle_north
        self.data["covariance"].append(fix.position_covariance)
        #TODO update kalman gps


    def drive(self):
        signal.signal(
            signal.SIGINT, self.ctrlc_shutdown
        )  # shuts down when ctrl+c is pressed
        while not rospy.is_shutdown() and not self.reached_goal:
            self.pub.publish(self.twist)
            self.rate.sleep()
        self.stop()

    def stop(self):
        self.twist.linear.x = 0.0
        self.twist.angular.z = 0.0
        self.pub.publish(self.twist)
        timestamp = datetime.datetime.now().strftime("%Y%m%d-%H%M%S")
        timestamp = int(timestamp.replace("-", ""))
        #make filename variable with python 2.7
        filename = "../data/{}.json".format(timestamp) #check if this works
        print("phi", self.phi)
        # filename = f"../data/{timestamp}.json"
        if self.store_data:  
            with open(filename, "w") as json_file:
                json.dump(self.data, json_file)
            plot_data(GPS = True, filename = filename)
        rospy.loginfo(
            "Automower has moved to position x=%s, y=%s",
            round(self.x, 2),
            round(self.y, 2),
        )

    def pose_callback(self, pose):
        if len(self.data["lat"]) > 0:
            z_dir = pose.pose.orientation.z
            w_dir = pose.pose.orientation.w
            # print(self.angle_north)
            current_ang = tf.transformations.euler_from_quaternion([0, 0, z_dir, w_dir])[2]
            # self.angle_north = current_ang
            # if len(self.data["x"]) >= 10:
            #     self.angle_north = get_angle_north(self.x_start, self.y_start, self.x, self.y)
            if (
                self.reset_angle
                and self.init_angle is None
                and self.x_start is None
                and self.y_start is None
            ):
                self.init_angle = current_ang
                self.x_start_automower= pose.pose.position.x
                self.y_start_automower = pose.pose.position.y
                print("init lat" , self.data["lat"][0], "init lon", self.data["lon"][0])
                self.x_start, self.y_start = convert_lat_lon_to_utm(self.data["lat"][0], self.data["lon"][0])
                self.calc_velocities = CalcVelocities(self.update_freq)
                change_goal(self)  # sets initial goal/

            x_automower = pose.pose.position.x
            y_automower = pose.pose.position.y
            self.x, self.y = convert_automower_to_utm(self, x_automower, y_automower)
            # self.angle_north = get_angle_north(self.x_start, self.y_start, self.x, self.y)
            # print("angle_north", self.angle_north)
            lin_vel, ang_vel = self.calc_velocities.calc_vel(current_ang, self.x, self.y)
            self.twist.linear.x = lin_vel
            self.twist.angular.z = ang_vel
            if self.store_data:
                self.data["x"].append(self.x)
                self.data["y"].append(self.y)
                self.data["angle"].append(current_ang)
            # if close to goal, cahnge goal
            if lin_vel == 0.0 and ang_vel == 0.0:
                change_goal(self)

    def ctrlc_shutdown(self, sig, frame):
        self.stop()
        rospy.signal_shutdown("User interrupted by ctrl+c")


if __name__ == "__main__":
    drive_to = Drive_to()
    drive_to.drive()
