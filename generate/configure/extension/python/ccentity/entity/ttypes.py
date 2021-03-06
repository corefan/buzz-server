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


class EntityType:
  TYPE_ACTOR = 0
  TYPE_NPC = 1
  TYPE_SCENE_ITEM = 2
  TYPE_MAX = 3

  _VALUES_TO_NAMES = {
    0: "TYPE_ACTOR",
    1: "TYPE_NPC",
    2: "TYPE_SCENE_ITEM",
    3: "TYPE_MAX",
  }

  _NAMES_TO_VALUES = {
    "TYPE_ACTOR": 0,
    "TYPE_NPC": 1,
    "TYPE_SCENE_ITEM": 2,
    "TYPE_MAX": 3,
  }

class EntityClientFields:
  CLIENT_BEGIN = 0
  CLIENT_END = 1

  _VALUES_TO_NAMES = {
    0: "CLIENT_BEGIN",
    1: "CLIENT_END",
  }

  _NAMES_TO_VALUES = {
    "CLIENT_BEGIN": 0,
    "CLIENT_END": 1,
  }

class EntityServerFields:
  SERVER_BEGIN = 0
  SERVER_END = 1

  _VALUES_TO_NAMES = {
    0: "SERVER_BEGIN",
    1: "SERVER_END",
  }

  _NAMES_TO_VALUES = {
    "SERVER_BEGIN": 0,
    "SERVER_END": 1,
  }


class EntityClientField:
  """
  Attributes:
   - field_
   - value_
  """

  thrift_spec = (
    None, # 0
    (1, TType.I32, 'field_', None, None, ), # 1
    (2, TType.I32, 'value_', None, None, ), # 2
  )

  def __init__(self, field_=None, value_=None,):
    self.field_ = field_
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
          self.field_ = iprot.readI32();
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
    oprot.writeStructBegin('EntityClientField')
    if self.field_ is not None:
      oprot.writeFieldBegin('field_', TType.I32, 1)
      oprot.writeI32(self.field_)
      oprot.writeFieldEnd()
    if self.value_ is not None:
      oprot.writeFieldBegin('value_', TType.I32, 2)
      oprot.writeI32(self.value_)
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def validate(self):
    if self.field_ is None:
      raise TProtocol.TProtocolException(message='Required field field_ is unset!')
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
