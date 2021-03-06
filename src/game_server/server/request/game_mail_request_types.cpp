/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "game_mail_request_types.h"

#include <algorithm>

namespace game { namespace server { namespace request {

const char* RequestMailSend::ascii_fingerprint = "BDD6359A93867DA942883CC19D6336D9";
const uint8_t RequestMailSend::binary_fingerprint[16] = {0xBD,0xD6,0x35,0x9A,0x93,0x86,0x7D,0xA9,0x42,0x88,0x3C,0xC1,0x9D,0x63,0x36,0xD9};

uint32_t RequestMailSend::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_id_ = false;
  bool isset_child_type_ = false;
  bool isset_params_ = false;

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
          xfer += iprot->readI64(this->id_);
          isset_id_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast0;
          xfer += iprot->readI32(ecast0);
          this->type_ = ( ::entity::MailType::type)ecast0;
          this->__isset.type_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast1;
          xfer += iprot->readI32(ecast1);
          this->child_type_ = ( ::entity::SystemMailChildType::type)ecast1;
          isset_child_type_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->params_.clear();
            uint32_t _size2;
            ::apache::thrift::protocol::TType _etype5;
            xfer += iprot->readListBegin(_etype5, _size2);
            this->params_.resize(_size2);
            uint32_t _i6;
            for (_i6 = 0; _i6 < _size2; ++_i6)
            {
              xfer += iprot->readString(this->params_[_i6]);
            }
            xfer += iprot->readListEnd();
          }
          isset_params_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->affix_.read(iprot);
          this->__isset.affix_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->context_);
          this->__isset.context_ = true;
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

  if (!isset_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_child_type_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_params_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t RequestMailSend::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("RequestMailSend");

  xfer += oprot->writeFieldBegin("id_", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->id_);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.type_) {
    xfer += oprot->writeFieldBegin("type_", ::apache::thrift::protocol::T_I32, 2);
    xfer += oprot->writeI32((int32_t)this->type_);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldBegin("child_type_", ::apache::thrift::protocol::T_I32, 3);
  xfer += oprot->writeI32((int32_t)this->child_type_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("params_", ::apache::thrift::protocol::T_LIST, 4);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRING, static_cast<uint32_t>(this->params_.size()));
    std::vector<std::string> ::const_iterator _iter7;
    for (_iter7 = this->params_.begin(); _iter7 != this->params_.end(); ++_iter7)
    {
      xfer += oprot->writeString((*_iter7));
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  if (this->__isset.affix_) {
    xfer += oprot->writeFieldBegin("affix_", ::apache::thrift::protocol::T_STRUCT, 5);
    xfer += this->affix_.write(oprot);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.context_) {
    xfer += oprot->writeFieldBegin("context_", ::apache::thrift::protocol::T_STRING, 6);
    xfer += oprot->writeString(this->context_);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(RequestMailSend &a, RequestMailSend &b) {
  using ::std::swap;
  swap(a.id_, b.id_);
  swap(a.type_, b.type_);
  swap(a.child_type_, b.child_type_);
  swap(a.params_, b.params_);
  swap(a.affix_, b.affix_);
  swap(a.context_, b.context_);
  swap(a.__isset, b.__isset);
}

}}} // namespace
