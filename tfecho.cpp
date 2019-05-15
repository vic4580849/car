#include "ros/ros.h"
#include "std_msgs/String.h"
#include "../include/base_realsense_node.h"
#include <ros/ros.h>
#include <tf/transform_broadcaster.h>
#include <nav_msgs/Odometry.h>
/**
 * This tutorial demonstrates simple receipt of messages over the ROS system.
 */
// %Tag(CALLBACK)%
void chatterCallback(const std_msgs/Header header  )
{
  cout <<  endl;

}



// %EndTag(CALLBACK)%

int main(int argc, char **argv)
{

  ros::init(argc, argv, "listener");


  ros::NodeHandle n;
  ROS_INFO("OK,up");
 cout << 333 << endl;
  //ros::Subscriber sub = n.subscribe("/rtabmap/odom", 1000, chatterCallback);
  ros::Subscriber robot = n.subscribe<std_msgs/Header header>("/rtabmap/odom", 1000 , chatterCallback);
  //cout << sub <<endl;
  ros::spin();


  return 0;
}
// %EndTag(FULLTEXT)%
