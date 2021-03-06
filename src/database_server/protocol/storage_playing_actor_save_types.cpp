/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "storage_playing_actor_save_types.h"

#include <algorithm>

namespace database { namespace protocol {

const char* StoragePlayingActorSaveRequest::ascii_fingerprint = "3263F68A3D2A7BE612300F8E1F9F37EA";
const uint8_t StoragePlayingActorSaveRequest::binary_fingerprint[16] = {0x32,0x63,0xF6,0x8A,0x3D,0x2A,0x7B,0xE6,0x12,0x30,0x0F,0x8E,0x1F,0x9F,0x37,0xEA};

uint32_t StoragePlayingActorSaveRequest::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_actor_id_ = false;
  bool isset_field_ = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->actor_id_);
          isset_actor_id_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->field_.read(iprot);
          isset_field_ = true;
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

  if (!isset_actor_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_field_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t StoragePlayingActorSaveRequest::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("StoragePlayingActorSaveRequest");

  xfer += oprot->writeFieldBegin("actor_id_", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->actor_id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("field_", ::apache::thrift::protocol::T_STRUCT, 2);
  xfer += this->field_.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(StoragePlayingActorSaveRequest &a, StoragePlayingActorSaveRequest &b) {
  using ::std::swap;
  swap(a.actor_id_, b.actor_id_);
  swap(a.field_, b.field_);
}

const char* StoragePlayingActorSaveResponse::ascii_fingerprint = "5892306F7B861249AE8E27C8ED619593";
const uint8_t StoragePlayingActorSaveResponse::binary_fingerprint[16] = {0x58,0x92,0x30,0x6F,0x7B,0x86,0x12,0x49,0xAE,0x8E,0x27,0xC8,0xED,0x61,0x95,0x93};

uint32_t StoragePlayingActorSaveResponse::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_result_ = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->result_);
          isset_result_ = true;
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

  if (!isset_result_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t StoragePlayingActorSaveResponse::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("StoragePlayingActorSaveResponse");

  xfer += oprot->writeFieldBegin("result_", ::apache::thrift::protocol::T_BOOL, 1);
  xfer += oprot->writeBool(this->result_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(StoragePlayingActorSaveResponse &a, StoragePlayingActorSaveResponse &b) {
  using ::std::swap;
  swap(a.result_, b.result_);
}

}} // namespace
