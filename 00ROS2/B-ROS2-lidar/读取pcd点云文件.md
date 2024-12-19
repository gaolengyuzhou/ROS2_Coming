## 创建文件夹

> B-ROS2-lidar

## 创建并进入工作空间

```
cd B-ROS2-lidar
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

```
* 修改CMake文件

```c
# 生成可执行文件
add_executable (read_pcd src/read_pcd.cpp)

# 配置可执行文件的依赖项
ament_target_dependencies(read_pcd 
  rclcpp 
  pcl_ros 
  pcl_conversions 
  sensor_msgs)  

# 将可执行文件写入路径
install(TARGETS
  read_pcd
  DESTINATION lib/${PROJECT_NAME})  
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
```c
ros2 run rviz2 rviz2  # 打开rviz

ros2 run read_pcd read_pcd /home/gy/ROS2_Coming/00ROS2/B-ROS2-lidar/milk.pcd # 运行节点

gy@gy-u22:~$ ros2 topic list
/clicked_point
/goal_pose
/initialpose
/parameter_events
/point_cloud_topic
/rosout
/tf
/tf_static
gy@gy-u22:~$ ros2 topic info /point_cloud_topic 
Type: sensor_msgs/msg/PointCloud2
Publisher count: 1
Subscription count: 1
gy@gy-u22:~$ ros2 topic echo /point_cloud_topic
```
gazebo独立于ROS2，就像插件一样，需要安装。

1.安装

sudo apt install gazebo

sudo apt install ros-humble-gazebo-*

2.运行测试demo

gazebo /opt/ros/humble/share/gazebo_plugins/worlds/gazebo_ros_diff_drive_demo.world