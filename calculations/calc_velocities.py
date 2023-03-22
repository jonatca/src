import numpy as np


class CalcVelocities:
    def __init__(self, Kp_circle=366.94510324142476, Kp90_circle=85.967317866): 
        self.tol_lin = 0.1  # tolerance in meter
        self.tol_ang = 7 * np.pi / 180
        self.min_tol_ang = 0.1 * np.pi / 180  # to avoid calculations error
        self.max_vel_lin = 0.3
        self.max_vel_ang = 0.8
        self.Kp_l = 0.9
        self.Kp_a = 1.0
        self.Kp90_circle = Kp90_circle 
        self.Kp_circle = Kp_circle 
        # self.Ki_circle = Ki_circle 
        # self.Kd_circle = Kd_circle 
        self.error_radius = 0
        self.error_radius_sum = 0
        self.error_radius_prev = 0
        self.x_goal = None  # global coordinates
        self.y_goal = None
        update_freq = 10
        self.dt = 1.0 / update_freq
        self.current_ang = None
        self.error_lin = None
        self.vel_lin = None
        self.x = None
        self.y = None
        self.paint_circle = False
        self.x_mid = None
        self.y_mid = None
        self.radius = None
        self.square_error_radius = 0
        self.times_above_tol_ang = 0
        self.has_moved = False

    def set_circle_params(self, radius, x_mid, y_mid):
        self.radius = radius
        self.x_mid = x_mid
        self.y_mid = y_mid
        self.theoretical_vel_ang = self._circle_vel_ang()
        self.paint_circle = True
        self.max_vel_lin = 0.2
        # self.tol_ang = 7 * np.pi/180

    def calc_vel(self, current_ang, x, y):
        self.current_ang = self._normalize_angle(current_ang)
        self.x = x
        self.y = y
        self.error_lin = np.sqrt(
            (self.x_goal - self.x) ** 2 + (self.y_goal - self.y) ** 2
        )
        if self.paint_circle:
            current_radius = np.sqrt(
                (self.x - self.x_mid) ** 2 + (self.y - self.y_mid) ** 2
            )
            self.error_radius = self.radius - current_radius
            self.error_radius_sum += self.error_radius * self.dt
            self.square_error_radius += self.error_radius**2
            self.error_radius_deriv = (
                self.error_radius - self.error_radius_prev
            ) / self.dt
            self.error_radius_prev = self.error_radius
            self.goal_ang = self._goal_angle_circle(
                self.x_mid, self.y_mid, self.x, self.y
            )
            self.error_ang = self.current_ang - self.goal_ang
            self.error_ang = self._normalize_angle(self.error_ang)

            # Update the linear and angular velocities using the PID controller
            self.vel_lin = self.max_vel_lin
            if np.abs(self.error_ang) < self.tol_ang:
                self.vel_ang = -(
                    self.Kp_circle * self.error_radius * self.dt
                    # + self.Ki_circle * self.error_radius_sum
                    # + self.Kd_circle * self.error_radius_deriv
                ) / self.radius #normalize to radius
            else:
                self.vel_ang = -self.Kp90_circle * self.error_ang * self.dt/self.radius
        else:
            self.goal_ang = self._goal_angle_line()
            self.error_ang = self.goal_ang - self.current_ang
            self.error_ang = (self.error_ang + np.pi) % (2 * np.pi) - np.pi
            if np.abs(self.error_ang) < self.min_tol_ang:  # to avoid calculatins error
                self.error_ang = 0
            self.vel_lin = self.Kp_l * self.error_lin  # slow down when close to goal
            self.vel_ang = self.Kp_a * self.error_ang

        self.vel_lin = np.clip(self.vel_lin, -self.max_vel_lin, self.max_vel_lin)
        self.vel_ang = np.clip(self.vel_ang, -self.max_vel_ang, self.max_vel_ang)
        if self._has_reached_goal():
            self.vel_lin = 0
            self.vel_ang = 0
        # self._log_message()
        if np.abs(self.error_ang) > self.tol_ang:  # dont move if not facing goal
            self.vel_lin = 0
            if self.has_moved:
                self.times_above_tol_ang += 1
        else:
            self.has_moved = True
        return self.vel_lin, self.vel_ang

    def get_sqaure_error_radius(self):
        return self.square_error_radius

    def _circle_vel_ang(self):
        # Calculate the theoretical angular velocity based on the desired linear velocity and radius
        return self.max_vel_lin / self.radius  # TODO check if this is correct

    def _goal_angle_line(self):
        return np.arctan2(self.y_goal - self.y, self.x_goal - self.x)

    def _goal_angle_circle(self, x_mid, y_mid, x, y):
        # Calculate the vector from the center of the circle to the robot's position
        V_x = x - x_mid
        V_y = y - y_mid
        # Normalize the vector
        V_mag = np.sqrt(V_x**2 + V_y**2)
        V_x_norm = V_x / V_mag
        V_y_norm = V_y / V_mag
        # Calculate the tangent vector
        T_x = -V_y_norm
        T_y = V_x_norm
        return np.arctan2(T_y, T_x)

    def _normalize_angle(self, angle):
        while angle > np.pi:
            angle -= 2 * np.pi
        while angle < -np.pi:
            angle += 2 * np.pi
        return angle

    def _has_reached_goal(self):
        return self.error_lin < self.tol_lin

    def _log_message(self):
        print(
            "error_lin: ",
            round(self.error_lin, 2),
            "vel_lin: ",
            round(self.vel_lin, 2),
        )
        print(
            "current_ang",
            round(self.current_ang, 2),
            "goal_ang",
            round(self.goal_ang, 2),
            "error_ang: ",
            round(self.error_ang, 2),
            "vel_ang: ",
            round(self.vel_ang, 2),
        )
        print(
            "x",
            round(self.x, 2),
            "y",
            round(self.y, 2),
            "x_goal",
            round(self.x_goal, 2),
            "y_goal",
            round(self.y_goal, 2),
            "lin_vel",
            round(self.vel_lin, 2),
            "ang_vel",
            round(self.vel_ang, 2),
        )

    def set_goal_coords(self, x_goal, y_goal):
        self.x_goal = x_goal
        self.y_goal = y_goal
