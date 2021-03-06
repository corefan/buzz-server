/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "transport_types.h"

#include <algorithm>

namespace entity {

const char* TransportSnapshotField::ascii_fingerprint = "727CAEA8265A5DE67DBC931F55CD8753";
const uint8_t TransportSnapshotField::binary_fingerprint[16] = {0x72,0x7C,0xAE,0xA8,0x26,0x5A,0x5D,0xE6,0x7D,0xBC,0x93,0x1F,0x55,0xCD,0x87,0x53};

uint32_t TransportSnapshotField::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_actor_id_ = false;
  bool isset_actor_name_ = false;

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
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->actor_name_);
          isset_actor_name_ = true;
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
  if (!isset_actor_name_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t TransportSnapshotField::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("TransportSnapshotField");

  xfer += oprot->writeFieldBegin("actor_id_", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->actor_id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("actor_name_", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->actor_name_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(TransportSnapshotField &a, TransportSnapshotField &b) {
  using ::std::swap;
  swap(a.actor_id_, b.actor_id_);
  swap(a.actor_name_, b.actor_name_);
}

} // namespace
