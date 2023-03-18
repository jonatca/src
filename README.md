# painting_automower

To change lengths of lines:

1. Start local host by running the server.py.
2. Go to <http://localhost:8000/userInput/>
3. Input the dimensions of your soccer field
4. Click submit

To start control mower:

1. run this anywhere in terminal: source ~/450/devel/setup.bash
2. run this anywhere in terminal: sudo chmod 666 /dev/ttyACM0 (if error, check if automower is on)
3. Enter password: "kandidatarbete"
4. run this anywhere in terminal: roslaunch am_driver_safe automower_hrp.launch
5. cd to ~/450/src/calculations
6. Open a secound terminal and run this anywhere in terminal: source ~/450/devel/setup.bash
7. run this anywhere in terminal: rosrun am_driver main.py (If error, run this in 450/src/hrp/am_driver/scripts: chmod 777 hrp_teleop.py)

To run simulation:
1. change paint_order in paint.py to desierd trip
2. run simulate.py
3. check you simulated result in calculations/plots/plot-latest.png


To get position run this in terminal at 450/src/hrp/am_driver_scripts: rostopic echo /pose
To get GPS run this in terminal at 450/src/hrp/am_driver_scripts: rostopic echo /figGPS
