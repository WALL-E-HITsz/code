cmake_minimum_required(VERSION 2.8.3)
project(pub_wasd)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
)


include_directories(
  include ${catkin_INCLUDE_DIRS}
# include
  ${catkin_INCLUDE_DIRS}
)



add_executable(pub_pose
  src/pub_pose.cpp
)
add_dependencies(pub_pose ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(pub_pose
  ${catkin_LIBRARIES}
)

