# generated from rosidl_generator_py/resource/_idl.py.em
# with input from communication_interfaces:msg/ThrusterMsg.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ThrusterMsg(type):
    """Metaclass of message 'ThrusterMsg'."""

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
            module = import_type_support('communication_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'communication_interfaces.msg.ThrusterMsg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__thruster_msg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__thruster_msg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__thruster_msg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__thruster_msg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__thruster_msg

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ThrusterMsg(metaclass=Metaclass_ThrusterMsg):
    """Message class 'ThrusterMsg'."""

    __slots__ = [
        '_controller_id',
        '_controller_set',
    ]

    _fields_and_field_types = {
        'controller_id': 'int32',
        'controller_set': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.controller_id = kwargs.get('controller_id', int())
        self.controller_set = kwargs.get('controller_set', float())

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
        if self.controller_id != other.controller_id:
            return False
        if self.controller_set != other.controller_set:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def controller_id(self):
        """Message field 'controller_id'."""
        return self._controller_id

    @controller_id.setter
    def controller_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'controller_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'controller_id' field must be an integer in [-2147483648, 2147483647]"
        self._controller_id = value

    @property
    def controller_set(self):
        """Message field 'controller_set'."""
        return self._controller_set

    @controller_set.setter
    def controller_set(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'controller_set' field must be of type 'float'"
        self._controller_set = value
