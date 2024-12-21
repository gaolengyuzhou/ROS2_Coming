# 仿真环境gazebo
1. 许多机器人模型都有自己的 URDF（Unified Robot Description Format）或 SDF（Simulation Description Format）文件，这些文件定义了机器人的结构、关节、链接等信息。
2. Gazebo 有多种插件，包括传感器插件（如激光雷达插件、摄像头插件）、物理引擎插件等。传感器插件可以模拟真实机器人的传感器数据采集，例如激光雷达插件可以生成周围环境的点云数据。
<img src="https://github.com/gaolengyuzhou/ROS2_Coming/blob/ROSbag_lidar/01gazebo/%E8%B6%85%E5%A3%B0%E6%B3%A2%E7%9A%84%E4%BB%BF%E7%9C%9F.gif" alt="超声波仿真">

# bag录制
1. 查看录制信息
```
ros2 bag info your_bag_file.db3
```
2. 录制
```
ros2 bag record /scan
```
3. 使用bag-pcd包
> https://github.com/xmfcx/rosbag2_to_pcd
<img src="[https://example.com/pet.jpg](https://github.com/gaolengyuzhou/ROS2_Coming/blob/ROSbag_lidar/02bag/%E6%A0%BC%E5%BC%8F%E8%BD%AC%E6%8D%A2%E6%B5%81%E7%A8%8B.png)" alt="bag数据解析">
