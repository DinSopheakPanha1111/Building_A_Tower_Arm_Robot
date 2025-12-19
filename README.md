# Building_A_Tower_Arm_Robot
build_tower.cpp and README.md was created by Din Sopheak Panha only

# Requirements

- ROS2 humble
- Dynamixel SDK

# Setup

1. Clone the project 

```

git clone https://github.com/DinSopheakPanha1111/Building_A_Tower_Arm_Robot.git

```

**Make Sure Dynamixel SDK is installed, otherwise it won't work**

2. Build the project and source

```

colcon build
source install/setup.bash

```

# Launch

1. Launch the poppy core node

```
ros2 run advrobotics_lab3_ros2 poppy_core 


```

2. Launch the ik_server node

```

ros2 run advrobotics_lab3_ros2 ik_server 

```

3. Launch the build_tower node 

```

ros2 run advrobotics_lab3_ros2 build_tower

```
