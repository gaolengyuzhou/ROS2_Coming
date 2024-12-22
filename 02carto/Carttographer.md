# Carttographer安装
```
sudo apt install ros-humble-cartographer
sudo apt install ros-humble-cartographer-ros
```
## 源码安装
```
git clone https://ghproxy.com/https://github.com/ros2/cartographer.git -b ros2
git clone https://ghproxy.com/https://github.com/ros2/cartographer_ros.git -b ros2

wget http://fishros.com/install -O fishros && . fishros

rosdepc install -r --from-paths src --ignore-src --rosdistro $ROS_DISTRO -y

colcon build --packages-up-to cartographer_ros
```
## 安装完成
```
ros2 pkg list | grep cartographer
```
cartographer_ros
cartographer_ros_msgs

# Cartographer参数配置
Cartographer参数是使用`lua`文件来描述的。
> 小鱼提示：lua中的注释采用 -- 开头

## 前端参数
## 后端参数
## Carotgrapher_ROS参数配置

# 🚩🚩🚩配置cartographer进行建图

## 创建文件夹

> gy@gy-u22:~/ROS2_Coming/02carto$ mkdir -p colcon_ws/src

## 创建并进入工作空间 & 功能包(C++)

```
gy@gy-u22:~/ROS2_Coming/02carto$ cd colcon_ws/src/
gy@gy-u22:~/ROS2_Coming/02carto/colcon_ws/src$ ros2 pkg create fishbot_cartographer
```

## 创建配置文件夹、launch文件夹和rviz配置文件夹
```
cd fishbot_cartographer
mkdir config
mkdir launch
mkdir rviz
```

### 在fishbot_cartographer/config目录下创建fishbot_2d.lua文件
### 在路径src/fishbot_cartographer/launch/下新建cartographer.launch.py文件
```
colcon build --packages-select fishbot_cartographer 
```

1. 先启动gazebo仿真环境
```
source install/setup.bash
ros2 launch fishbot_description diaplay_Hr.launch.py
```
2. 启动建图
```
ros2 launch fishbot_cartographer cartographer.launch.py 

ros2 run teleop_twist_keyboard teleop_twist_keyboard 
```
3. 保存地图
```
sudo apt install ros-humble-nav2-map-server

ros2 run nav2_map_server map_saver_cli -t map -f fishbot_map
```