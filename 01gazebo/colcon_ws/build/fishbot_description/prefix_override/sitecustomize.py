import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/gy/ROS2_Coming/01gazebo/colcon_ws/install/fishbot_description'
