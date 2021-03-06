/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "storage_mail_read_types.h"

#include <algorithm>

namespace database { namespace protocol {

int _kMailReadFieldValues[] = {
  MailReadField::CONTEXT,
  MailReadField::ITEM1,
  MailReadField::ITEM1_NUM,
  MailReadField::ITEM2,
  MailReadField::ITEM2_NUM,
  MailReadField::ITEM3,
  MailReadField::ITEM3_NUM,
  MailReadField::ITEM4,
  MailReadField::ITEM4_NUM,
  MailReadField::ITEM5,
  MailReadField::ITEM5_NUM,
  MailReadField::GOLD,
  MailReadField::FREEDOM_DOLLARS,
  MailReadField::MAX
};
const char* _kMailReadFieldNames[] = {
  "CONTEXT",
  "ITEM1",
  "ITEM1_NUM",
  "ITEM2",
  "ITEM2_NUM",
  "ITEM3",
  "ITEM3_NUM",
  "ITEM4",
  "ITEM4_NUM",
  "ITEM5",
  "ITEM5_NUM",
  "GOLD",
  "FREEDOM_DOLLARS",
  "MAX"
};
const std::map<int, const char*> _MailReadField_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(14, _kMailReadFieldValues, _kMailReadFieldNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

const char* StorageReadMailRequest::ascii_fingerprint = "9C2A05F173B50306037BDE9AE30E1B99";
const uint8_t StorageReadMailRequest::binary_fingerprint[16] = {0x9C,0x2A,0x05,0xF1,0x73,0xB5,0x03,0x06,0x03,0x7B,0xDE,0x9A,0xE3,0x0E,0x1B,0x99};

uint32_t StorageReadMailRequest::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_mail_id_ = false;
  bool isset_id_ = false;

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
          xfer += iprot->readI32(this->mail_id_);
          isset_mail_id_ = true;
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
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_mail_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t StorageReadMailRequest::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("StorageReadMailRequest");

  xfer += oprot->writeFieldBegin("mail_id_", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->mail_id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("id_", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(StorageReadMailRequest &a, StorageReadMailRequest &b) {
  using ::std::swap;
  swap(a.mail_id_, b.mail_id_);
  swap(a.id_, b.id_);
}

const char* StorageReadMailResponse::ascii_fingerprint = "6FDCE32D599F88A07698BD7083300048";
const uint8_t StorageReadMailResponse::binary_fingerprint[16] = {0x6F,0xDC,0xE3,0x2D,0x59,0x9F,0x88,0xA0,0x76,0x98,0xBD,0x70,0x83,0x30,0x00,0x48};

uint32_t StorageReadMailResponse::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_affix_ = false;
  bool isset_context_ = false;
  bool isset_id_ = false;
  bool isset_mail_id_ = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->affix_.read(iprot);
          isset_affix_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->context_);
          isset_context_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->id_);
          isset_id_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->mail_id_);
          isset_mail_id_ = true;
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

  if (!isset_affix_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_context_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_mail_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t StorageReadMailResponse::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("StorageReadMailResponse");

  xfer += oprot->writeFieldBegin("affix_", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += this->affix_.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("context_", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->context_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("id_", ::apache::thrift::protocol::T_I64, 3);
  xfer += oprot->writeI64(this->id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("mail_id_", ::apache::thrift::protocol::T_I32, 4);
  xfer += oprot->writeI32(this->mail_id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(StorageReadMailResponse &a, StorageReadMailResponse &b) {
  using ::std::swap;
  swap(a.affix_, b.affix_);
  swap(a.context_, b.context_);
  swap(a.id_, b.id_);
  swap(a.mail_id_, b.mail_id_);
}

}} // namespace
