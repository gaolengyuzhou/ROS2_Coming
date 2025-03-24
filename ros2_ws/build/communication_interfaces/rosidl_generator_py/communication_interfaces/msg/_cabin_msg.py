# generated from rosidl_generator_py/resource/_idl.py.em
# with input from communication_interfaces:msg/CabinMsg.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CabinMsg(type):
    """Metaclass of message 'CabinMsg'."""

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
                'communication_interfaces.msg.CabinMsg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__cabin_msg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__cabin_msg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__cabin_msg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__cabin_msg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__cabin_msg

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CabinMsg(metaclass=Metaclass_CabinMsg):
    """Message class 'CabinMsg'."""

    __slots__ = [
        '_cabin_id',
        '_temperature',
        '_humidity',
        '_pressure',
        '_name',
    ]

    _fields_and_field_types = {
        'cabin_id': 'int32',
        'temperature': 'double',
        'humidity': 'double',
        'pressure': 'double',
        'name': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.cabin_id = kwargs.get('cabin_id', int())
        self.temperature = kwargs.get('temperature', float())
        self.humidity = kwargs.get('humidity', float())
        self.pressure = kwargs.get('pressure', float())
        self.name = kwargs.get('name', str())

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
        if self.cabin_id != other.cabin_id:
            return False
        if self.temperature != other.temperature:
            return False
        if self.humidity != other.humidity:
            return False
        if self.pressure != other.pressure:
            return False
        if self.name != other.name:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def cabin_id(self):
        """Message field 'cabin_id'."""
        return self._cabin_id

    @cabin_id.setter
    def cabin_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cabin_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'cabin_id' field must be an integer in [-2147483648, 2147483647]"
        self._cabin_id = value

    @property
    def temperature(self):
        """Message field 'temperature'."""
        return self._temperature

    @temperature.setter
    def temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temperature' field must be of type 'float'"
        self._temperature = value

    @property
    def humidity(self):
        """Message field 'humidity'."""
        return self._humidity

    @humidity.setter
    def humidity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'humidity' field must be of type 'float'"
        self._humidity = value

    @property
    def pressure(self):
        """Message field 'pressure'."""
        return self._pressure

    @pressure.setter
    def pressure(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pressure' field must be of type 'float'"
        self._pressure = value

    @property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value
