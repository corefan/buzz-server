#
# Autogenerated by Thrift Compiler (0.9.0)
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#
#  options string: py
#

from thrift.Thrift import TType, TMessageType, TException, TApplicationException

from thrift.transport import TTransport
from thrift.protocol import TBinaryProtocol, TProtocol
try:
  from thrift.protocol import fastbinary
except:
  fastbinary = None


class SkillHitType:
  COMMON = 0
  CRIT = 1
  DODGE = 2
  IGNORE_DEF = 3
  MAX = 4

  _VALUES_TO_NAMES = {
    0: "COMMON",
    1: "CRIT",
    2: "DODGE",
    3: "IGNORE_DEF",
    4: "MAX",
  }

  _NAMES_TO_VALUES = {
    "COMMON": 0,
    "CRIT": 1,
    "DODGE": 2,
    "IGNORE_DEF": 3,
    "MAX": 4,
  }

class SkillHurtType:
  MIN = 0
  PHYSICS_ATTACK = 1
  MAGIC_ATTACK = 2
  REDUCE_HP = 3
  REDUCE_MP = 4
  PHYSICS_CURE = 5
  MAGIC_CURE = 6
  ADD_HP = 7
  ADD_MP = 8
  CLEAR_BUFF = 9
  CLEAR_BUFF_GROUP = 10
  MAX = 11

  _VALUES_TO_NAMES = {
    0: "MIN",
    1: "PHYSICS_ATTACK",
    2: "MAGIC_ATTACK",
    3: "REDUCE_HP",
    4: "REDUCE_MP",
    5: "PHYSICS_CURE",
    6: "MAGIC_CURE",
    7: "ADD_HP",
    8: "ADD_MP",
    9: "CLEAR_BUFF",
    10: "CLEAR_BUFF_GROUP",
    11: "MAX",
  }

  _NAMES_TO_VALUES = {
    "MIN": 0,
    "PHYSICS_ATTACK": 1,
    "MAGIC_ATTACK": 2,
    "REDUCE_HP": 3,
    "REDUCE_MP": 4,
    "PHYSICS_CURE": 5,
    "MAGIC_CURE": 6,
    "ADD_HP": 7,
    "ADD_MP": 8,
    "CLEAR_BUFF": 9,
    "CLEAR_BUFF_GROUP": 10,
    "MAX": 11,
  }

class BuffTargetType:
  SELF = 0
  OTHER = 1

  _VALUES_TO_NAMES = {
    0: "SELF",
    1: "OTHER",
  }

  _NAMES_TO_VALUES = {
    "SELF": 0,
    "OTHER": 1,
  }

class SkillFormType:
  MIN = 0
  COMMON = 1
  TEMP = 2
  MAX = 3

  _VALUES_TO_NAMES = {
    0: "MIN",
    1: "COMMON",
    2: "TEMP",
    3: "MAX",
  }

  _NAMES_TO_VALUES = {
    "MIN": 0,
    "COMMON": 1,
    "TEMP": 2,
    "MAX": 3,
  }

class SkillVarFields:
  SKILL_BEGIN = 0
  COOLING_ADD_VALUE = 0
  DISTANCE_ADD_VALUE = 1
  SING_TIME_ADD_VALUE = 2
  AOE_MAX_NUM_ADD_VALUE = 3
  AOE_RADIUS_ADD_VALUE = 4
  HP_SPEND_ADD_VALUE = 5
  HP_SPEND_ADD_PERCENT = 6
  MP_SPEND_ADD_VALUE = 7
  MP_SPEND_ADD_PERCENT = 8
  HURT_ADD_VALUE = 9
  HURT_ADD_PERCENT = 10
  SKILL_END = 11

  _VALUES_TO_NAMES = {
    0: "SKILL_BEGIN",
    0: "COOLING_ADD_VALUE",
    1: "DISTANCE_ADD_VALUE",
    2: "SING_TIME_ADD_VALUE",
    3: "AOE_MAX_NUM_ADD_VALUE",
    4: "AOE_RADIUS_ADD_VALUE",
    5: "HP_SPEND_ADD_VALUE",
    6: "HP_SPEND_ADD_PERCENT",
    7: "MP_SPEND_ADD_VALUE",
    8: "MP_SPEND_ADD_PERCENT",
    9: "HURT_ADD_VALUE",
    10: "HURT_ADD_PERCENT",
    11: "SKILL_END",
  }

  _NAMES_TO_VALUES = {
    "SKILL_BEGIN": 0,
    "COOLING_ADD_VALUE": 0,
    "DISTANCE_ADD_VALUE": 1,
    "SING_TIME_ADD_VALUE": 2,
    "AOE_MAX_NUM_ADD_VALUE": 3,
    "AOE_RADIUS_ADD_VALUE": 4,
    "HP_SPEND_ADD_VALUE": 5,
    "HP_SPEND_ADD_PERCENT": 6,
    "MP_SPEND_ADD_VALUE": 7,
    "MP_SPEND_ADD_PERCENT": 8,
    "HURT_ADD_VALUE": 9,
    "HURT_ADD_PERCENT": 10,
    "SKILL_END": 11,
  }


class SkillVarField:
  """
  Attributes:
   - type_
   - value_
  """

  thrift_spec = (
    None, # 0
    (1, TType.I32, 'type_', None, None, ), # 1
    (2, TType.I32, 'value_', None, None, ), # 2
  )

  def __init__(self, type_=None, value_=None,):
    self.type_ = type_
    self.value_ = value_

  def read(self, iprot):
    if iprot.__class__ == TBinaryProtocol.TBinaryProtocolAccelerated and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastbinary is not None:
      fastbinary.decode_binary(self, iprot.trans, (self.__class__, self.thrift_spec))
      return
    iprot.readStructBegin()
    while True:
      (fname, ftype, fid) = iprot.readFieldBegin()
      if ftype == TType.STOP:
        break
      if fid == 1:
        if ftype == TType.I32:
          self.type_ = iprot.readI32();
        else:
          iprot.skip(ftype)
      elif fid == 2:
        if ftype == TType.I32:
          self.value_ = iprot.readI32();
        else:
          iprot.skip(ftype)
      else:
        iprot.skip(ftype)
      iprot.readFieldEnd()
    iprot.readStructEnd()

  def write(self, oprot):
    if oprot.__class__ == TBinaryProtocol.TBinaryProtocolAccelerated and self.thrift_spec is not None and fastbinary is not None:
      oprot.trans.write(fastbinary.encode_binary(self, (self.__class__, self.thrift_spec)))
      return
    oprot.writeStructBegin('SkillVarField')
    if self.type_ is not None:
      oprot.writeFieldBegin('type_', TType.I32, 1)
      oprot.writeI32(self.type_)
      oprot.writeFieldEnd()
    if self.value_ is not None:
      oprot.writeFieldBegin('value_', TType.I32, 2)
      oprot.writeI32(self.value_)
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def validate(self):
    if self.type_ is None:
      raise TProtocol.TProtocolException(message='Required field type_ is unset!')
    if self.value_ is None:
      raise TProtocol.TProtocolException(message='Required field value_ is unset!')
    return


  def __repr__(self):
    L = ['%s=%r' % (key, value)
      for key, value in self.__dict__.iteritems()]
    return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

  def __eq__(self, other):
    return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

  def __ne__(self, other):
    return not (self == other)
