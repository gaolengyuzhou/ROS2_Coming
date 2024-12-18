## 创建文件夹

> B-ROS2_chapter1

## 创建并进入工作空间

```
cd B-ROS2_chapter1
mkdir -p colcon_ws/src
cd colcon_ws/src/ # 进入工作空间
```

## 功能包(C++)

```
ros2 pkg create read_pcd --build-type ament_cmake --dependencies pcl_conversions pcl_ros rclcpp sensor_msgs
```

## 在VS Code中编辑
> https://blog.csdn.net/qq_27865227/article/details/125002311
* read_pcd.cpp
```c
#include<ros/ros.h>
#include<pcl/point_cloud.h>
#include<pcl_conversions/pcl_conversions.h>
#include<sensor_msgs/PointCloud2.h>
#include<pcl/io/pcd_io.h>
 
int main(int argc,char argv){
    ros::init(argc,argv,"pcd_pub");
    ros::NodeHandle nh;
    ros::Publisher pcl_pub=nh.advertise<sensor_msgs::PointCloud2> ("pcl_output",1);
    pcl::PointCloud<pcl::PointXYZ> cloud;
    sensor_msgs::PointCloud2 output;
    std::string file_path;
    nh.param<std::string>("file_path", file_path, "/home/gy/ROS2_Coming/00ROS2/B-ROS2-lidar/milk.pcd");
    pcl::io::loadPCDFile(file_path,cloud);//通过launch文件修改路径即可
 
    pcl::toROSMsg(cloud,output);
    output.header.frame_id="map";
 
    ros::Rate loop_rate(1);
    while (ros::ok())
    {
        pcl_pub.publish(output);
        ros::spinOnce();
        loop_rate.sleep();
    }
    return 0;
}

```
* 修改CMake文件

```c
add_executable(read_pcd src/read_pcd.cpp)
ament_target_dependencies(read_pcd rclcpp std_msgs pcl_conversions pcl_ros)

install(TARGETS
  read_pcd
  DESTINATION lib/${PROJECT_NAME}
)
```

## 编译

```
colcon build --packages-select read_pcd
```

* 安装pcl-ros

```c
gy@gy-u22:~/ROS2_Coming/00ROS2/B-ROS2-lidar/colcon_ws$ colcon build --packages-select read_pcd
Starting >>> read_pcd
--- stderr: read_pcd                       
CMake Error at CMakeLists.txt:11 (find_package):
  By not providing "Findpcl_ros.cmake" in CMAKE_MODULE_PATH this project has
  asked CMake to find a package configuration file provided by "pcl_ros", but
  CMake did not find one.

  Could not find a package configuration file provided by "pcl_ros" with any
  of the following names:

    pcl_rosConfig.cmake
    pcl_ros-config.cmake

  Add the installation prefix of "pcl_ros" to CMAKE_PREFIX_PATH or set
  "pcl_ros_DIR" to a directory containing one of the above files.  If
  "pcl_ros" provides a separate development package or SDK, be sure it has
  been installed.


---
Failed   <<< read_pcd [3.10s, exited with code 1]
                              
Summary: 0 packages finished [3.45s]
  1 package failed: read_pcd
  1 package had stderr output: read_pcd
gy@gy-u22:~/ROS2_Coming/00ROS2/B-ROS2-lidar/colcon_ws$ printenv ROS_DISTRO
humble
```

1. ROS2版本查看
2. sudo apt install ros-你的ROS版本代号-pcl*

```c
sudo apt install ros-humble-pcl*
```

## 加载ros2环境

```
source install/setup.bash
```

## 运行
