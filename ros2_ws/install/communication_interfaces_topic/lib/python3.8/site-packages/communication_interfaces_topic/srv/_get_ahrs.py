# generated from rosidl_generator_py/resource/_idl.py.em
# with input from communication_interfaces_topic:srv/GetAHRS.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetAHRS_Request(type):
    """Metaclass of message 'GetAHRS_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('communication_interfaces_topic')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'communication_interfaces_topic.srv.GetAHRS_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_ahrs__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_ahrs__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_ahrs__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_ahrs__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_ahrs__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetAHRS_Request(metaclass=Metaclass_GetAHRS_Request):
    """Message class 'GetAHRS_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

# Member 'ahrs_data'
import array  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_GetAHRS_Response(type):
    """Metaclass of message 'GetAHRS_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('communication_interfaces_topic')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'communication_interfaces_topic.srv.GetAHRS_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_ahrs__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_ahrs__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_ahrs__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_ahrs__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_ahrs__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetAHRS_Response(metaclass=Metaclass_GetAHRS_Response):
    """Message class 'GetAHRS_Response'."""

    __slots__ = [
        '_stamp',
        '_ahrs_data',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'ahrs_data': 'sequence<float>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.ahrs_data = array.array('f', kwargs.get('ahrs_data', []))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.stamp != other.stamp:
            return False
        if self.ahrs_data != other.ahrs_data:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value

    @property
    def ahrs_data(self):
        """Message field 'ahrs_data'."""
        return self._ahrs_data

    @ahrs_data.setter
    def ahrs_data(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'ahrs_data' array.array() must have the type code of 'f'"
            self._ahrs_data = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'ahrs_data' field must be a set or sequence and each value of type 'float'"
        self._ahrs_data = array.array('f', value)


class Metaclass_GetAHRS(type):
    """Metaclass of service 'GetAHRS'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('communication_interfaces_topic')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'communication_interfaces_topic.srv.GetAHRS')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_ahrs

            from communication_interfaces_topic.srv import _get_ahrs
            if _get_ahrs.Metaclass_GetAHRS_Request._TYPE_SUPPORT is None:
                _get_ahrs.Metaclass_GetAHRS_Request.__import_type_support__()
            if _get_ahrs.Metaclass_GetAHRS_Response._TYPE_SUPPORT is None:
                _get_ahrs.Metaclass_GetAHRS_Response.__import_type_support__()


class GetAHRS(metaclass=Metaclass_GetAHRS):
    from communication_interfaces_topic.srv._get_ahrs import GetAHRS_Request as Request
    from communication_interfaces_topic.srv._get_ahrs import GetAHRS_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
