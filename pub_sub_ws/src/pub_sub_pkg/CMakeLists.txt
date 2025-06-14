cmake_minimum_required(VERSION 3.8)
project(pub_sub_pkg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)


# create executables 
add_executable(rpm_pub src/rpm_pub.cpp)
ament_target_dependencies(rpm_pub rclcpp std_msgs)

add_executable(speed_calc src/speed_calc.cpp)
ament_target_dependencies(speed_calc rclcpp std_msgs)


# config for ROS2 cli tools  
install(TARGETS
  rpm_pub
  speed_calc
  DESTINATION lib/${PROJECT_NAME})


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
