/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef storage_task_actor_save_TYPES_H
#define storage_task_actor_save_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include "storage_task_actor_login_types.h"


namespace database { namespace protocol {

struct TaskActorLoginResult {
  enum type {
    SUCCESS = 0,
    ERROR_UNKNOWN = 1
  };
};

extern const std::map<int, const char*> _TaskActorLoginResult_VALUES_TO_NAMES;


class StorageTaskActorSaveRequest {
 public:

  static const char* ascii_fingerprint; // = "59A1653E6A2862C037AD412E66A66FE9";
  static const uint8_t binary_fingerprint[16]; // = {0x59,0xA1,0x65,0x3E,0x6A,0x28,0x62,0xC0,0x37,0xAD,0x41,0x2E,0x66,0xA6,0x6F,0xE9};

  StorageTaskActorSaveRequest() : actor_id_(0) {
  }

  virtual ~StorageTaskActorSaveRequest() throw() {}

  int64_t actor_id_;
   ::database::protocol::StorageTaskActorField data_;

  void __set_actor_id_(const int64_t val) {
    actor_id_ = val;
  }

  void __set_data_(const  ::database::protocol::StorageTaskActorField& val) {
    data_ = val;
  }

  bool operator == (const StorageTaskActorSaveRequest & rhs) const
  {
    if (!(actor_id_ == rhs.actor_id_))
      return false;
    if (!(data_ == rhs.data_))
      return false;
    return true;
  }
  bool operator != (const StorageTaskActorSaveRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const StorageTaskActorSaveRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(StorageTaskActorSaveRequest &a, StorageTaskActorSaveRequest &b);


class StorageTaskActorSaveResponse {
 public:

  static const char* ascii_fingerprint; // = "8BBB3D0C3B370CB38F2D1340BB79F0AA";
  static const uint8_t binary_fingerprint[16]; // = {0x8B,0xBB,0x3D,0x0C,0x3B,0x37,0x0C,0xB3,0x8F,0x2D,0x13,0x40,0xBB,0x79,0xF0,0xAA};

  StorageTaskActorSaveResponse() : result_(( ::database::protocol::TaskActorResult::type)0) {
  }

  virtual ~StorageTaskActorSaveResponse() throw() {}

   ::database::protocol::TaskActorResult::type result_;

  void __set_result_(const  ::database::protocol::TaskActorResult::type val) {
    result_ = val;
  }

  bool operator == (const StorageTaskActorSaveResponse & rhs) const
  {
    if (!(result_ == rhs.result_))
      return false;
    return true;
  }
  bool operator != (const StorageTaskActorSaveResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const StorageTaskActorSaveResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(StorageTaskActorSaveResponse &a, StorageTaskActorSaveResponse &b);

}} // namespace

#endif