/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef storage_item_save_TYPES_H
#define storage_item_save_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include "storage_item_login_types.h"


namespace database { namespace protocol {

typedef struct _StorageItemSaveRequest__isset {
  _StorageItemSaveRequest__isset() : fields_(false) {}
  bool fields_;
} _StorageItemSaveRequest__isset;

class StorageItemSaveRequest {
 public:

  static const char* ascii_fingerprint; // = "CAD263B8827FBDDBFF5168BA19505A84";
  static const uint8_t binary_fingerprint[16]; // = {0xCA,0xD2,0x63,0xB8,0x82,0x7F,0xBD,0xDB,0xFF,0x51,0x68,0xBA,0x19,0x50,0x5A,0x84};

  StorageItemSaveRequest() : id_(0), contain_type_(0) {
  }

  virtual ~StorageItemSaveRequest() throw() {}

  int64_t id_;
  int8_t contain_type_;
  std::vector< ::database::protocol::StorageItemField>  fields_;

  _StorageItemSaveRequest__isset __isset;

  void __set_id_(const int64_t val) {
    id_ = val;
  }

  void __set_contain_type_(const int8_t val) {
    contain_type_ = val;
  }

  void __set_fields_(const std::vector< ::database::protocol::StorageItemField> & val) {
    fields_ = val;
    __isset.fields_ = true;
  }

  bool operator == (const StorageItemSaveRequest & rhs) const
  {
    if (!(id_ == rhs.id_))
      return false;
    if (!(contain_type_ == rhs.contain_type_))
      return false;
    if (__isset.fields_ != rhs.__isset.fields_)
      return false;
    else if (__isset.fields_ && !(fields_ == rhs.fields_))
      return false;
    return true;
  }
  bool operator != (const StorageItemSaveRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const StorageItemSaveRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(StorageItemSaveRequest &a, StorageItemSaveRequest &b);


class StorageItemSaveResponse {
 public:

  static const char* ascii_fingerprint; // = "5892306F7B861249AE8E27C8ED619593";
  static const uint8_t binary_fingerprint[16]; // = {0x58,0x92,0x30,0x6F,0x7B,0x86,0x12,0x49,0xAE,0x8E,0x27,0xC8,0xED,0x61,0x95,0x93};

  StorageItemSaveResponse() : result_(0) {
  }

  virtual ~StorageItemSaveResponse() throw() {}

  bool result_;

  void __set_result_(const bool val) {
    result_ = val;
  }

  bool operator == (const StorageItemSaveResponse & rhs) const
  {
    if (!(result_ == rhs.result_))
      return false;
    return true;
  }
  bool operator != (const StorageItemSaveResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const StorageItemSaveResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(StorageItemSaveResponse &a, StorageItemSaveResponse &b);

}} // namespace

#endif
