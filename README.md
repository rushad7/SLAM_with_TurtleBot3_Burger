This project implements various SLAM algorithms in ROS. The algorithms implemented include:
1. G-Mapping
2. Karto
3. Frontier Exploration
4. Cartographer
5. Hector SLAM

First, run the gazebo_env.sh script. It brings up the Gazebo world of the Autonomous Systems Lab, SRMIST that we are using
to implement the SLAM algorithms. Note that this is a custom made environment to suit our requirements.
If need be, other inbuilt Gazebo worlds can also be called and used by editing and running the bash script.

(Run the bash script by typing bash <bash_script_name.sh> in the terminal)

Next, run the gmapping_slam.sh script. This opens up Rviz. Once the SLAM process starts, the map will be generated here.
Note that the SLAM algorithm can be changed by editing the last word of the slam.sh file to whichever algorithm is needed.
By default it is G-Mapping.

Next, run the auto_nav.sh for the TurtleBot 3 Burger to Autonomously Navigate throughout and run the SLAM algorithm.
Tele operation can also be used to manually control the TurtleBot through the keyboard.

To run the algorithms live on a physical TurtleBot, the ROS_MASTER_URI and ROS_HOSTNAME need to be set 
via the terminal by editing the ~/.bashrc script.
