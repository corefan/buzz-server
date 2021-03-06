/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "game_cooling_request_types.h"

#include <algorithm>

namespace game { namespace server { namespace request {

const char* RequestCheckInCooling::ascii_fingerprint = "729E45C97A0E730BDEEBC207E4F729D3";
const uint8_t RequestCheckInCooling::binary_fingerprint[16] = {0x72,0x9E,0x45,0xC9,0x7A,0x0E,0x73,0x0B,0xDE,0xEB,0xC2,0x07,0xE4,0xF7,0x29,0xD3};

uint32_t RequestCheckInCooling::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_type_ = false;
  bool isset_id_ = false;
  bool isset_cooling_id_ = false;
  bool isset_in_cooling_ = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast0;
          xfer += iprot->readI32(ecast0);
          this->type_ = ( ::entity::EntityType::type)ecast0;
          isset_type_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->id_);
          isset_id_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->cooling_id_);
          isset_cooling_id_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->in_cooling_);
          isset_in_cooling_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_type_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_cooling_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_in_cooling_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t RequestCheckInCooling::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("RequestCheckInCooling");

  xfer += oprot->writeFieldBegin("type_", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32((int32_t)this->type_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("id_", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("cooling_id_", ::apache::thrift::protocol::T_I32, 3);
  xfer += oprot->writeI32(this->cooling_id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("in_cooling_", ::apache::thrift::protocol::T_BOOL, 4);
  xfer += oprot->writeBool(this->in_cooling_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(RequestCheckInCooling &a, RequestCheckInCooling &b) {
  using ::std::swap;
  swap(a.type_, b.type_);
  swap(a.id_, b.id_);
  swap(a.cooling_id_, b.cooling_id_);
  swap(a.in_cooling_, b.in_cooling_);
}

const char* RequestStartCooling::ascii_fingerprint = "BC41DB2C57B606FFE1BA4098945A7E95";
const uint8_t RequestStartCooling::binary_fingerprint[16] = {0xBC,0x41,0xDB,0x2C,0x57,0xB6,0x06,0xFF,0xE1,0xBA,0x40,0x98,0x94,0x5A,0x7E,0x95};

uint32_t RequestStartCooling::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_type_ = false;
  bool isset_id_ = false;
  bool isset_cooling_id_ = false;
  bool isset_cooling_add_value_ = false;
  bool isset_cooling_add_percent_ = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast1;
          xfer += iprot->readI32(ecast1);
          this->type_ = ( ::entity::EntityType::type)ecast1;
          isset_type_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->id_);
          isset_id_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->cooling_id_);
          isset_cooling_id_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->cooling_add_value_);
          isset_cooling_add_value_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->cooling_add_percent_);
          isset_cooling_add_percent_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_type_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_cooling_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_cooling_add_value_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_cooling_add_percent_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t RequestStartCooling::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("RequestStartCooling");

  xfer += oprot->writeFieldBegin("type_", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32((int32_t)this->type_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("id_", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("cooling_id_", ::apache::thrift::protocol::T_I32, 3);
  xfer += oprot->writeI32(this->cooling_id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("cooling_add_value_", ::apache::thrift::protocol::T_I64, 4);
  xfer += oprot->writeI64(this->cooling_add_value_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("cooling_add_percent_", ::apache::thrift::protocol::T_I32, 5);
  xfer += oprot->writeI32(this->cooling_add_percent_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(RequestStartCooling &a, RequestStartCooling &b) {
  using ::std::swap;
  swap(a.type_, b.type_);
  swap(a.id_, b.id_);
  swap(a.cooling_id_, b.cooling_id_);
  swap(a.cooling_add_value_, b.cooling_add_value_);
  swap(a.cooling_add_percent_, b.cooling_add_percent_);
}

}}} // namespace
