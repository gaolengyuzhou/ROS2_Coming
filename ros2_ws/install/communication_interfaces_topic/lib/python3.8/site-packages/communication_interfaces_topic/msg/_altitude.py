# generated from rosidl_generator_py/resource/_idl.py.em
# with input from communication_interfaces_topic:msg/Altitude.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'tau'
# Member 'f_thr'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Altitude(type):
    """Metaclass of message 'Altitude'."""

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
                'communication_interfaces_topic.msg.Altitude')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__altitude
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__altitude
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__altitude
            cls._TYPE_SUPPORT = module.type_support_msg__msg__altitude
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__altitude

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Altitude(metaclass=Metaclass_Altitude):
    """Message class 'Altitude'."""

    __slots__ = [
        '_p_row',
        '_p_pitch',
        '_p_yaw',
        '_p_x',
        '_p_y',
        '_p_z',
        '_p_row_set',
        '_p_pitch_set',
        '_p_yaw_set',
        '_p_x_set',
        '_p_y_set',
        '_p_z_set',
        '_p_row_e',
        '_p_pitch_e',
        '_p_yaw_e',
        '_p_x_e',
        '_p_y_e',
        '_p_z_e',
        '_tau',
        '_f_thr',
        '_p1',
        '_p2',
    ]

    _fields_and_field_types = {
        'p_row': 'float',
        'p_pitch': 'float',
        'p_yaw': 'float',
        'p_x': 'float',
        'p_y': 'float',
        'p_z': 'float',
        'p_row_set': 'float',
        'p_pitch_set': 'float',
        'p_yaw_set': 'float',
        'p_x_set': 'float',
        'p_y_set': 'float',
        'p_z_set': 'float',
        'p_row_e': 'float',
        'p_pitch_e': 'float',
        'p_yaw_e': 'float',
        'p_x_e': 'float',
        'p_y_e': 'float',
        'p_z_e': 'float',
        'tau': 'sequence<float>',
        'f_thr': 'sequence<float>',
        'p1': 'float',
        'p2': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.p_row = kwargs.get('p_row', float())
        self.p_pitch = kwargs.get('p_pitch', float())
        self.p_yaw = kwargs.get('p_yaw', float())
        self.p_x = kwargs.get('p_x', float())
        self.p_y = kwargs.get('p_y', float())
        self.p_z = kwargs.get('p_z', float())
        self.p_row_set = kwargs.get('p_row_set', float())
        self.p_pitch_set = kwargs.get('p_pitch_set', float())
        self.p_yaw_set = kwargs.get('p_yaw_set', float())
        self.p_x_set = kwargs.get('p_x_set', float())
        self.p_y_set = kwargs.get('p_y_set', float())
        self.p_z_set = kwargs.get('p_z_set', float())
        self.p_row_e = kwargs.get('p_row_e', float())
        self.p_pitch_e = kwargs.get('p_pitch_e', float())
        self.p_yaw_e = kwargs.get('p_yaw_e', float())
        self.p_x_e = kwargs.get('p_x_e', float())
        self.p_y_e = kwargs.get('p_y_e', float())
        self.p_z_e = kwargs.get('p_z_e', float())
        self.tau = array.array('f', kwargs.get('tau', []))
        self.f_thr = array.array('f', kwargs.get('f_thr', []))
        self.p1 = kwargs.get('p1', float())
        self.p2 = kwargs.get('p2', float())

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
        if self.p_row != other.p_row:
            return False
        if self.p_pitch != other.p_pitch:
            return False
        if self.p_yaw != other.p_yaw:
            return False
        if self.p_x != other.p_x:
            return False
        if self.p_y != other.p_y:
            return False
        if self.p_z != other.p_z:
            return False
        if self.p_row_set != other.p_row_set:
            return False
        if self.p_pitch_set != other.p_pitch_set:
            return False
        if self.p_yaw_set != other.p_yaw_set:
            return False
        if self.p_x_set != other.p_x_set:
            return False
        if self.p_y_set != other.p_y_set:
            return False
        if self.p_z_set != other.p_z_set:
            return False
        if self.p_row_e != other.p_row_e:
            return False
        if self.p_pitch_e != other.p_pitch_e:
            return False
        if self.p_yaw_e != other.p_yaw_e:
            return False
        if self.p_x_e != other.p_x_e:
            return False
        if self.p_y_e != other.p_y_e:
            return False
        if self.p_z_e != other.p_z_e:
            return False
        if self.tau != other.tau:
            return False
        if self.f_thr != other.f_thr:
            return False
        if self.p1 != other.p1:
            return False
        if self.p2 != other.p2:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def p_row(self):
        """Message field 'p_row'."""
        return self._p_row

    @p_row.setter
    def p_row(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p_row' field must be of type 'float'"
        self._p_row = value

    @property
    def p_pitch(self):
        """Message field 'p_pitch'."""
        return self._p_pitch

    @p_pitch.setter
    def p_pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p_pitch' field must be of type 'float'"
        self._p_pitch = value

    @property
    def p_yaw(self):
        """Message field 'p_yaw'."""
        return self._p_yaw

    @p_yaw.setter
    def p_yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p_yaw' field must be of type 'float'"
        self._p_yaw = value

    @property
    def p_x(self):
        """Message field 'p_x'."""
        return self._p_x

    @p_x.setter
    def p_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p_x' field must be of type 'float'"
        self._p_x = value

    @property
    def p_y(self):
        """Message field 'p_y'."""
        return self._p_y

    @p_y.setter
    def p_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p_y' field must be of type 'float'"
        self._p_y = value

    @property
    def p_z(self):
        """Message field 'p_z'."""
        return self._p_z

    @p_z.setter
    def p_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p_z' field must be of type 'float'"
        self._p_z = value

    @property
    def p_row_set(self):
        """Message field 'p_row_set'."""
        return self._p_row_set

    @p_row_set.setter
    def p_row_set(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p_row_set' field must be of type 'float'"
        self._p_row_set = value

    @property
    def p_pitch_set(self):
        """Message field 'p_pitch_set'."""
        return self._p_pitch_set

    @p_pitch_set.setter
    def p_pitch_set(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p_pitch_set' field must be of type 'float'"
        self._p_pitch_set = value

    @property
    def p_yaw_set(self):
        """Message field 'p_yaw_set'."""
        return self._p_yaw_set

    @p_yaw_set.setter
    def p_yaw_set(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p_yaw_set' field must be of type 'float'"
        self._p_yaw_set = value

    @property
    def p_x_set(self):
        """Message field 'p_x_set'."""
        return self._p_x_set

    @p_x_set.setter
    def p_x_set(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p_x_set' field must be of type 'float'"
        self._p_x_set = value

    @property
    def p_y_set(self):
        """Message field 'p_y_set'."""
        return self._p_y_set

    @p_y_set.setter
    def p_y_set(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p_y_set' field must be of type 'float'"
        self._p_y_set = value

    @property
    def p_z_set(self):
        """Message field 'p_z_set'."""
        return self._p_z_set

    @p_z_set.setter
    def p_z_set(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p_z_set' field must be of type 'float'"
        self._p_z_set = value

    @property
    def p_row_e(self):
        """Message field 'p_row_e'."""
        return self._p_row_e

    @p_row_e.setter
    def p_row_e(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p_row_e' field must be of type 'float'"
        self._p_row_e = value

    @property
    def p_pitch_e(self):
        """Message field 'p_pitch_e'."""
        return self._p_pitch_e

    @p_pitch_e.setter
    def p_pitch_e(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p_pitch_e' field must be of type 'float'"
        self._p_pitch_e = value

    @property
    def p_yaw_e(self):
        """Message field 'p_yaw_e'."""
        return self._p_yaw_e

    @p_yaw_e.setter
    def p_yaw_e(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p_yaw_e' field must be of type 'float'"
        self._p_yaw_e = value

    @property
    def p_x_e(self):
        """Message field 'p_x_e'."""
        return self._p_x_e

    @p_x_e.setter
    def p_x_e(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p_x_e' field must be of type 'float'"
        self._p_x_e = value

    @property
    def p_y_e(self):
        """Message field 'p_y_e'."""
        return self._p_y_e

    @p_y_e.setter
    def p_y_e(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p_y_e' field must be of type 'float'"
        self._p_y_e = value

    @property
    def p_z_e(self):
        """Message field 'p_z_e'."""
        return self._p_z_e

    @p_z_e.setter
    def p_z_e(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p_z_e' field must be of type 'float'"
        self._p_z_e = value

    @property
    def tau(self):
        """Message field 'tau'."""
        return self._tau

    @tau.setter
    def tau(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'tau' array.array() must have the type code of 'f'"
            self._tau = value
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
                "The 'tau' field must be a set or sequence and each value of type 'float'"
        self._tau = array.array('f', value)

    @property
    def f_thr(self):
        """Message field 'f_thr'."""
        return self._f_thr

    @f_thr.setter
    def f_thr(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'f_thr' array.array() must have the type code of 'f'"
            self._f_thr = value
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
                "The 'f_thr' field must be a set or sequence and each value of type 'float'"
        self._f_thr = array.array('f', value)

    @property
    def p1(self):
        """Message field 'p1'."""
        return self._p1

    @p1.setter
    def p1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p1' field must be of type 'float'"
        self._p1 = value

    @property
    def p2(self):
        """Message field 'p2'."""
        return self._p2

    @p2.setter
    def p2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p2' field must be of type 'float'"
        self._p2 = value
