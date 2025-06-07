【Cartographer建图与Navigation导航】 https://www.bilibili.com/video/BV1j7dkYoE86/?share_source=copy_web&vd_source=a4872f495d99c67e3948a1c2bbe88706

# 01lidar-快速上手雷达
'''
/01lidar/fishbot_ws/src/wifilidar_ros2$ python3 wifilidar_test.py
sudo docker run -it --rm -v /dev:/dev -v /dev/shm:/dev/shm --privileged --net=host microros/micro-ros-agent:$ROS_DISTRO udp4 --port 8888 -v6
ros2 launch ydlidar ydlidar_launch.py
'''
# 02fishbot-硬件与ros环境建立联系
'''
ros2 launch fishbot_bringup fishbot_bringup.launch.py
ros2 run teleop_twist_keyboard teleop_twist_keyboard
'''
# 03carto

仿真实验见：https://github.com/gaolengyuzhou/ROS2_Coming/tree/ROS_Carto

## 1、fishbot_cartographer建图
'''
1. 启动建图
```
ros2 launch fishbot_cartographer cartographer.launch.py 

ros2 run teleop_twist_keyboard teleop_twist_keyboard 
```
2. 保存地图
```
sudo apt install ros-humble-nav2-map-server

ros2 run nav2_map_server map_saver_cli -t map -f fishbot_map
'''
## 2、fishbot_navigation2导航
