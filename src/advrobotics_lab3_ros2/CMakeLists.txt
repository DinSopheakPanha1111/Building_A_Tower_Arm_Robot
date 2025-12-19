cmake_minimum_required(VERSION 3.8)
project(advrobotics_lab3_ros2)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)
find_package(rclcpp REQUIRED)
find_package(advrobotics_lab3_interfaces REQUIRED)


include_directories(
  include
  include/toolkit-dynamixel
)  
  
add_executable(ik_server src/ik_server.cpp src/Kinematics.cpp)
ament_target_dependencies(ik_server rclcpp advrobotics_lab3_interfaces)

add_executable(ik_client src/ik_client.cpp src/Kinematics.cpp)
ament_target_dependencies(ik_client rclcpp advrobotics_lab3_interfaces)

add_executable(build_tower src/build_tower.cpp src/Kinematics.cpp)
ament_target_dependencies(build_tower rclcpp advrobotics_lab3_interfaces)

add_executable(poppy_core src/PoppyDriver.cpp src/toolkit-dynamixel/DynamixelHandler.cpp)
ament_target_dependencies(poppy_core rclcpp advrobotics_lab3_interfaces)
target_link_libraries(poppy_core dxl_x64_cpp rt)

install(TARGETS
  ik_server
  ik_client
  build_tower
  poppy_core
  DESTINATION lib/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
