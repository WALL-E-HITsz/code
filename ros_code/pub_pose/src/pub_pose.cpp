#include "ros/ros.h"
#include "std_msgs/String.h"
#include "iostream"
#include <sstream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{

  ros::init(argc, argv, "pose_pber");

  ros::NodeHandle n;

  ros::Publisher chatter_pub = n.advertise<std_msgs::String>("pose_pber", 1000);

  ros::Rate loop_rate(10);
  char now;
  char flag;
  int count = 0;
  while (ros::ok()) 
  {
    string A,V;
    cout<<"Please input V and A:";
    cin.clear();
    //cin.ignore();
    cin>>A>>V;
    string send = A+V;
    if(send.length()!=7)
    {
      cout<<"Input erro!"<<endl;
      continue;
    }
    /*{
        case 'W': flag ='w';break;
        case 'w': flag ='w';break;
        case 'A': flag ='a';break;
        case 'a': flag ='a';break;
        case 'S': flag ='s';break;
        case 's': flag ='s';break;
        case 'D': flag ='d';break;
        case 'd': flag ='d';break;
        default : flag = 1;
    }*/

    std_msgs::String msg;
    std::stringstream ss;
    char mybegin = 11,myend = 12;

            ss << mybegin<<send<<myend;
            msg.data = ss.str();
            ROS_INFO("I've send :%s", msg.data.c_str());
 /*
    else 
    {
        ss<<"Input erro!"<<endl;
        msg.data = ss.str();
        ROS_INFO("%s", msg.data.c_str());
        continue;
    }
    msg.data = ss.str();
    ROS_INFO("%s", msg.data.c_str());
*/

    chatter_pub.publish(msg);

    ros::spinOnce();

    loop_rate.sleep();
    ++count;
  }

  return 0;
}
