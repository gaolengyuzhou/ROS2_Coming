# 🚩🚩🚩配置cartographer构建地图
## 理解 Cartographer 的基本概念

1. Submap（子图）：
>Cartographer 将地图划分为多个子图来构建。子图是地图的局部表示，通过将激光雷达扫描数据等信息不断融合到子图中，最终拼接成完整的地图。例如，当机器人在一个房间内移动时，每个房间的角落或者一段走廊都可能被构建为一个子图。
2. Trajectory（轨迹）：
> 轨迹表示机器人在空间中的运动路径。在 Cartographer 中，轨迹是由一系列的机器人位姿（位置和姿态）组成的。每一次机器人移动并且有传感器数据更新时，都会更新轨迹信息。例如，机器人从一个房间移动到另一个房间，这整个过程就形成了一条轨迹。

   `<img src="https://github.com/gaolengyuzhou/ROS2_Coming/blob/ROSbag_lidar/01gazebo/%E8%B6%85%E5%A3%B0%E6%B3%A2%E7%9A%84%E4%BB%BF%E7%9C%9F.gif" alt="超声波仿真">`

# 🚩🚩🚩导航navigation
## 理解 Navigation 基本概念
1. 地图（Map）
> 地图是导航的基础，它可以是通过 SLAM（Simultaneous Localization and Mapping）算法生成的，也可以是预先提供的。在 ROS2 Navigation 中，地图通常是一个二维的占用栅格地图（Occupancy Grid Map），用不同的灰度值表示地图中的障碍物、自由空间和未知区域。例如，黑色表示障碍物，白色表示自由空间，灰色表示未知区域。
2. 定位（Localization）
> 机器人需要知道自己在地图中的位置才能进行导航。通过传感器数据（如激光雷达、里程计等）和定位算法（如 AMCL - Adaptive Monte Carlo Localization），机器人可以确定自己相对于地图坐标系的位置和姿态（位置和方向）。
3. 路径规划（Path Planning）
> 路径规划算法根据机器人的当前位置和目标位置，在地图中找到一条可行的路径。ROS2 Navigation 中有多种路径规划算法，如全局路径规划算法（如 A*、Dijkstra 等）和局部路径规划算法（如 DWA - Dynamic Window Approach）。全局路径规划生成从起点到终点的大致路径，局部路径规划则根据机器人周围的实时环境对全局路径进行调整，避开突然出现的障碍物。

![bag数据解析](https://github.com/gaolengyuzhou/ROS2_Coming/blob/ROSbag_lidar/02bag/%E6%A0%BC%E5%BC%8F%E8%BD%AC%E6%8D%A2%E6%B5%81%E7%A8%8B.png)
