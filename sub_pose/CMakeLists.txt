cmake_minimum_required(VERSION 2.8.3)
project(sub_pose)

find_package(catkin REQUIRED)

include_directories(
  include ${catkin_INCLUDE_DIRS}

add_executable(sub_pose
  src/sub_pose.cpp
)
add_dependencies(sub_pose ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(sub_pose
  ${catkin_LIBRARIES}
)
