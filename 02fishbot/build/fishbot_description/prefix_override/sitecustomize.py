import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/gy/ROS2_Coming/05fishbot/install/fishbot_description'
