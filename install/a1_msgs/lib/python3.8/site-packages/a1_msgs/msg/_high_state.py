# generated from rosidl_generator_py/resource/_idl.py.em
# with input from a1_msgs:msg/HighState.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'footforce'
# Member 'footforceest'
# Member 'wirelessremote'
# Member 'jointp'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HighState(type):
    """Metaclass of message 'HighState'."""

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
            module = import_type_support('a1_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'a1_msgs.msg.HighState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__high_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__high_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__high_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__high_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__high_state

            from a1_msgs.msg import Cartesian
            if Cartesian.__class__._TYPE_SUPPORT is None:
                Cartesian.__class__.__import_type_support__()

            from a1_msgs.msg import IMU
            if IMU.__class__._TYPE_SUPPORT is None:
                IMU.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class HighState(metaclass=Metaclass_HighState):
    """Message class 'HighState'."""

    __slots__ = [
        '_levelflag',
        '_commversion',
        '_robotid',
        '_sn',
        '_bandwidth',
        '_mode',
        '_imu',
        '_forwardspeed',
        '_sidespeed',
        '_rotatespeed',
        '_bodyheight',
        '_updownspeed',
        '_forwardposition',
        '_sideposition',
        '_footposition2body',
        '_footspeed2body',
        '_footforce',
        '_footforceest',
        '_tick',
        '_wirelessremote',
        '_reserve',
        '_crc',
        '_eeforce',
        '_jointp',
    ]

    _fields_and_field_types = {
        'levelflag': 'uint8',
        'commversion': 'uint16',
        'robotid': 'uint16',
        'sn': 'uint32',
        'bandwidth': 'uint8',
        'mode': 'uint8',
        'imu': 'a1_msgs/IMU',
        'forwardspeed': 'float',
        'sidespeed': 'float',
        'rotatespeed': 'float',
        'bodyheight': 'float',
        'updownspeed': 'float',
        'forwardposition': 'float',
        'sideposition': 'float',
        'footposition2body': 'a1_msgs/Cartesian[4]',
        'footspeed2body': 'a1_msgs/Cartesian[4]',
        'footforce': 'int16[4]',
        'footforceest': 'int16[4]',
        'tick': 'uint32',
        'wirelessremote': 'uint8[40]',
        'reserve': 'uint32',
        'crc': 'uint32',
        'eeforce': 'a1_msgs/Cartesian[4]',
        'jointp': 'float[12]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['a1_msgs', 'msg'], 'IMU'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['a1_msgs', 'msg'], 'Cartesian'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['a1_msgs', 'msg'], 'Cartesian'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int16'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int16'), 4),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 40),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['a1_msgs', 'msg'], 'Cartesian'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 12),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.levelflag = kwargs.get('levelflag', int())
        self.commversion = kwargs.get('commversion', int())
        self.robotid = kwargs.get('robotid', int())
        self.sn = kwargs.get('sn', int())
        self.bandwidth = kwargs.get('bandwidth', int())
        self.mode = kwargs.get('mode', int())
        from a1_msgs.msg import IMU
        self.imu = kwargs.get('imu', IMU())
        self.forwardspeed = kwargs.get('forwardspeed', float())
        self.sidespeed = kwargs.get('sidespeed', float())
        self.rotatespeed = kwargs.get('rotatespeed', float())
        self.bodyheight = kwargs.get('bodyheight', float())
        self.updownspeed = kwargs.get('updownspeed', float())
        self.forwardposition = kwargs.get('forwardposition', float())
        self.sideposition = kwargs.get('sideposition', float())
        from a1_msgs.msg import Cartesian
        self.footposition2body = kwargs.get(
            'footposition2body',
            [Cartesian() for x in range(4)]
        )
        from a1_msgs.msg import Cartesian
        self.footspeed2body = kwargs.get(
            'footspeed2body',
            [Cartesian() for x in range(4)]
        )
        if 'footforce' not in kwargs:
            self.footforce = numpy.zeros(4, dtype=numpy.int16)
        else:
            self.footforce = numpy.array(kwargs.get('footforce'), dtype=numpy.int16)
            assert self.footforce.shape == (4, )
        if 'footforceest' not in kwargs:
            self.footforceest = numpy.zeros(4, dtype=numpy.int16)
        else:
            self.footforceest = numpy.array(kwargs.get('footforceest'), dtype=numpy.int16)
            assert self.footforceest.shape == (4, )
        self.tick = kwargs.get('tick', int())
        if 'wirelessremote' not in kwargs:
            self.wirelessremote = numpy.zeros(40, dtype=numpy.uint8)
        else:
            self.wirelessremote = numpy.array(kwargs.get('wirelessremote'), dtype=numpy.uint8)
            assert self.wirelessremote.shape == (40, )
        self.reserve = kwargs.get('reserve', int())
        self.crc = kwargs.get('crc', int())
        from a1_msgs.msg import Cartesian
        self.eeforce = kwargs.get(
            'eeforce',
            [Cartesian() for x in range(4)]
        )
        if 'jointp' not in kwargs:
            self.jointp = numpy.zeros(12, dtype=numpy.float32)
        else:
            self.jointp = numpy.array(kwargs.get('jointp'), dtype=numpy.float32)
            assert self.jointp.shape == (12, )

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
        if self.levelflag != other.levelflag:
            return False
        if self.commversion != other.commversion:
            return False
        if self.robotid != other.robotid:
            return False
        if self.sn != other.sn:
            return False
        if self.bandwidth != other.bandwidth:
            return False
        if self.mode != other.mode:
            return False
        if self.imu != other.imu:
            return False
        if self.forwardspeed != other.forwardspeed:
            return False
        if self.sidespeed != other.sidespeed:
            return False
        if self.rotatespeed != other.rotatespeed:
            return False
        if self.bodyheight != other.bodyheight:
            return False
        if self.updownspeed != other.updownspeed:
            return False
        if self.forwardposition != other.forwardposition:
            return False
        if self.sideposition != other.sideposition:
            return False
        if self.footposition2body != other.footposition2body:
            return False
        if self.footspeed2body != other.footspeed2body:
            return False
        if all(self.footforce != other.footforce):
            return False
        if all(self.footforceest != other.footforceest):
            return False
        if self.tick != other.tick:
            return False
        if all(self.wirelessremote != other.wirelessremote):
            return False
        if self.reserve != other.reserve:
            return False
        if self.crc != other.crc:
            return False
        if self.eeforce != other.eeforce:
            return False
        if all(self.jointp != other.jointp):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def levelflag(self):
        """Message field 'levelflag'."""
        return self._levelflag

    @levelflag.setter
    def levelflag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'levelflag' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'levelflag' field must be an unsigned integer in [0, 255]"
        self._levelflag = value

    @property
    def commversion(self):
        """Message field 'commversion'."""
        return self._commversion

    @commversion.setter
    def commversion(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'commversion' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'commversion' field must be an unsigned integer in [0, 65535]"
        self._commversion = value

    @property
    def robotid(self):
        """Message field 'robotid'."""
        return self._robotid

    @robotid.setter
    def robotid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'robotid' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'robotid' field must be an unsigned integer in [0, 65535]"
        self._robotid = value

    @property
    def sn(self):
        """Message field 'sn'."""
        return self._sn

    @sn.setter
    def sn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sn' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'sn' field must be an unsigned integer in [0, 4294967295]"
        self._sn = value

    @property
    def bandwidth(self):
        """Message field 'bandwidth'."""
        return self._bandwidth

    @bandwidth.setter
    def bandwidth(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bandwidth' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'bandwidth' field must be an unsigned integer in [0, 255]"
        self._bandwidth = value

    @property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mode' field must be an unsigned integer in [0, 255]"
        self._mode = value

    @property
    def imu(self):
        """Message field 'imu'."""
        return self._imu

    @imu.setter
    def imu(self, value):
        if __debug__:
            from a1_msgs.msg import IMU
            assert \
                isinstance(value, IMU), \
                "The 'imu' field must be a sub message of type 'IMU'"
        self._imu = value

    @property
    def forwardspeed(self):
        """Message field 'forwardspeed'."""
        return self._forwardspeed

    @forwardspeed.setter
    def forwardspeed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'forwardspeed' field must be of type 'float'"
        self._forwardspeed = value

    @property
    def sidespeed(self):
        """Message field 'sidespeed'."""
        return self._sidespeed

    @sidespeed.setter
    def sidespeed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sidespeed' field must be of type 'float'"
        self._sidespeed = value

    @property
    def rotatespeed(self):
        """Message field 'rotatespeed'."""
        return self._rotatespeed

    @rotatespeed.setter
    def rotatespeed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rotatespeed' field must be of type 'float'"
        self._rotatespeed = value

    @property
    def bodyheight(self):
        """Message field 'bodyheight'."""
        return self._bodyheight

    @bodyheight.setter
    def bodyheight(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'bodyheight' field must be of type 'float'"
        self._bodyheight = value

    @property
    def updownspeed(self):
        """Message field 'updownspeed'."""
        return self._updownspeed

    @updownspeed.setter
    def updownspeed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'updownspeed' field must be of type 'float'"
        self._updownspeed = value

    @property
    def forwardposition(self):
        """Message field 'forwardposition'."""
        return self._forwardposition

    @forwardposition.setter
    def forwardposition(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'forwardposition' field must be of type 'float'"
        self._forwardposition = value

    @property
    def sideposition(self):
        """Message field 'sideposition'."""
        return self._sideposition

    @sideposition.setter
    def sideposition(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sideposition' field must be of type 'float'"
        self._sideposition = value

    @property
    def footposition2body(self):
        """Message field 'footposition2body'."""
        return self._footposition2body

    @footposition2body.setter
    def footposition2body(self, value):
        if __debug__:
            from a1_msgs.msg import Cartesian
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
                 len(value) == 4 and
                 all(isinstance(v, Cartesian) for v in value) and
                 True), \
                "The 'footposition2body' field must be a set or sequence with length 4 and each value of type 'Cartesian'"
        self._footposition2body = value

    @property
    def footspeed2body(self):
        """Message field 'footspeed2body'."""
        return self._footspeed2body

    @footspeed2body.setter
    def footspeed2body(self, value):
        if __debug__:
            from a1_msgs.msg import Cartesian
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
                 len(value) == 4 and
                 all(isinstance(v, Cartesian) for v in value) and
                 True), \
                "The 'footspeed2body' field must be a set or sequence with length 4 and each value of type 'Cartesian'"
        self._footspeed2body = value

    @property
    def footforce(self):
        """Message field 'footforce'."""
        return self._footforce

    @footforce.setter
    def footforce(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int16, \
                "The 'footforce' numpy.ndarray() must have the dtype of 'numpy.int16'"
            assert value.size == 4, \
                "The 'footforce' numpy.ndarray() must have a size of 4"
            self._footforce = value
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
                 len(value) == 4 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'footforce' field must be a set or sequence with length 4 and each value of type 'int' and each integer in [-32768, 32767]"
        self._footforce = numpy.array(value, dtype=numpy.int16)

    @property
    def footforceest(self):
        """Message field 'footforceest'."""
        return self._footforceest

    @footforceest.setter
    def footforceest(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int16, \
                "The 'footforceest' numpy.ndarray() must have the dtype of 'numpy.int16'"
            assert value.size == 4, \
                "The 'footforceest' numpy.ndarray() must have a size of 4"
            self._footforceest = value
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
                 len(value) == 4 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'footforceest' field must be a set or sequence with length 4 and each value of type 'int' and each integer in [-32768, 32767]"
        self._footforceest = numpy.array(value, dtype=numpy.int16)

    @property
    def tick(self):
        """Message field 'tick'."""
        return self._tick

    @tick.setter
    def tick(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tick' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'tick' field must be an unsigned integer in [0, 4294967295]"
        self._tick = value

    @property
    def wirelessremote(self):
        """Message field 'wirelessremote'."""
        return self._wirelessremote

    @wirelessremote.setter
    def wirelessremote(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'wirelessremote' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 40, \
                "The 'wirelessremote' numpy.ndarray() must have a size of 40"
            self._wirelessremote = value
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
                 len(value) == 40 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'wirelessremote' field must be a set or sequence with length 40 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._wirelessremote = numpy.array(value, dtype=numpy.uint8)

    @property
    def reserve(self):
        """Message field 'reserve'."""
        return self._reserve

    @reserve.setter
    def reserve(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reserve' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'reserve' field must be an unsigned integer in [0, 4294967295]"
        self._reserve = value

    @property
    def crc(self):
        """Message field 'crc'."""
        return self._crc

    @crc.setter
    def crc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'crc' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'crc' field must be an unsigned integer in [0, 4294967295]"
        self._crc = value

    @property
    def eeforce(self):
        """Message field 'eeforce'."""
        return self._eeforce

    @eeforce.setter
    def eeforce(self, value):
        if __debug__:
            from a1_msgs.msg import Cartesian
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
                 len(value) == 4 and
                 all(isinstance(v, Cartesian) for v in value) and
                 True), \
                "The 'eeforce' field must be a set or sequence with length 4 and each value of type 'Cartesian'"
        self._eeforce = value

    @property
    def jointp(self):
        """Message field 'jointp'."""
        return self._jointp

    @jointp.setter
    def jointp(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'jointp' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 12, \
                "The 'jointp' numpy.ndarray() must have a size of 12"
            self._jointp = value
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
                 len(value) == 12 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'jointp' field must be a set or sequence with length 12 and each value of type 'float'"
        self._jointp = numpy.array(value, dtype=numpy.float32)
