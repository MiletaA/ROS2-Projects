cmake_minimum_required(VERSION 3.8)
project(service_camera_pkg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(OpenCV REQUIRED)
find_package(cv_bridge REQUIRED)

# generate interfaces BEFORE executables
rosidl_generate_interfaces(${PROJECT_NAME}
  "srv/TurnCamera.srv"
  DEPENDENCIES sensor_msgs
  ADD_LINTER_TESTS
)

# now you can add executables
add_executable(turn_camera_service_server src/turn_camera_service_server.cpp)
ament_target_dependencies(turn_camera_service_server rclcpp std_msgs OpenCV sensor_msgs cv_bridge)

# link against type support
target_link_libraries(turn_camera_service_server "${cpp_typesupport_target}")

install(TARGETS turn_camera_service_server DESTINATION lib/${PROJECT_NAME})

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
