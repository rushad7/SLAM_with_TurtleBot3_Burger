This project implements various SLAM algorithms in ROS. The algorithms implemented include:
1. G-Mapping
2. Karto
3. Frontier Exploration
4. Cartographer
5. Hector SLAM

First, run the gazebo_env_<asl/room/def>.sh script. It brings up the Gazebo world you selected. The gazebo_env_asl.sh 
brings up a  custom environment of the Autonomous Systems Lab, SRMIST.
Note that this is a custom made environment to suit our requirements.
If need be, other inbuilt Gazebo worlds can also be called by using the ather bash scripts.

(Run the bash script by typing bash <bash_script_name.sh> in the terminal)

Next, run the <gmapping/karto/frontier_exploration>_slam.sh script. 
This opens up Rviz. Once the SLAM process starts, the map will be generated here.
Note that the SLAM algorithm can be changed by using the required bash files.

Next, run the auto_nav.sh for the TurtleBot 3 Burger to Autonomously Navigate throughout and run the SLAM algorithm.
Tele operation can also be used to manually control the TurtleBot through the keyboard.

To run the algorithms live on a physical TurtleBot, the ROS_MASTER_URI and ROS_HOSTNAME need to be set 
via the terminal by editing the ~/.bashrc script.
