# 添加Micro_ROS
```
lib_deps = 
    https://gitee.com/ohhuo/micro_ros_platformio.git
```
# 打开端口
```
sudo chmod 777 /dev/ttyUSB0
```
# Docker
```
# Serial micro-ROS Agent
sudo docker run -it --rm -v /dev:/dev -v /dev/shm:/dev/shm --privileged --net=host microros/micro-ros-agent:$ROS_DISTRO serial --dev /dev/ttyUSB0 -v6
```


我没有安装*Unable to find image 'microros/micro-ros-agent:humble'*
```c
docker run -it --rm -v /dev:/dev -v /dev/shm:/dev/shm --privileged --net=host microros/micro-ros-agent:$ROS_DISTRO serial --dev /dev/ttyUSB0 -v6
Unable to find image 'microros/micro-ros-agent:humble' locally
docker: Error response from daemon: Get "https://registry-1.docker.io/v2/": context deadline exceeded (Client.Timeout exceeded while awaiting headers).
See 'docker run --help'.
```

```c
/*加载镜像*/
docker load -i micro-ros-agent.tar
```
# 观察现象
```c
ros2 node info /hello_microros
ros2 topic echo count_topic
ros2 node list
```
<video src="./MicroROS_USB.mp4" autoplay="true" controls="controls" >
</video>
