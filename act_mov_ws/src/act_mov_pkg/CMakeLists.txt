cmake_minimum_required(VERSION 3.8)
project(act_mov_pkg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
# Import our custom interfaces package
find_package(act_mov_interfaces REQUIRED)

# Create action server and client executables
add_executable(action_server src/action_server.cpp)
add_executable(action_client src/action_client.cpp)

ament_target_dependencies(action_server
  rclcpp
  rclcpp_action
  std_msgs
  geometry_msgs
  act_mov_interfaces
)

ament_target_dependencies(action_client
  rclcpp
  rclcpp_action
  std_msgs
  geometry_msgs
  act_mov_interfaces
)

# Install the executable
install(TARGETS
  action_server action_client
  DESTINATION lib/${PROJECT_NAME})

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
