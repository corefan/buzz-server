/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef server_type_TYPES_H
#define server_type_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>



namespace global { namespace protocol {

struct ServerType {
  enum type {
    DATABASE_SERVER = 0,
    GAME_SERVER = 1,
    GATEWAY_SERVER = 2,
    SCHEDULE_SERVER = 3,
    SESSION_SERVER = 4,
    MAX = 5
  };
};

extern const std::map<int, const char*> _ServerType_VALUES_TO_NAMES;


class ServerSignature {
 public:

  static const char* ascii_fingerprint; // = "990D2908C4D11DEF66B1A0269299ED14";
  static const uint8_t binary_fingerprint[16]; // = {0x99,0x0D,0x29,0x08,0xC4,0xD1,0x1D,0xEF,0x66,0xB1,0xA0,0x26,0x92,0x99,0xED,0x14};

  ServerSignature() : type_((ServerType::type)0), id_(0), host_(), port_(0) {
  }

  virtual ~ServerSignature() throw() {}

  ServerType::type type_;
  int32_t id_;
  std::string host_;
  int16_t port_;

  void __set_type_(const ServerType::type val) {
    type_ = val;
  }

  void __set_id_(const int32_t val) {
    id_ = val;
  }

  void __set_host_(const std::string& val) {
    host_ = val;
  }

  void __set_port_(const int16_t val) {
    port_ = val;
  }

  bool operator == (const ServerSignature & rhs) const
  {
    if (!(type_ == rhs.type_))
      return false;
    if (!(id_ == rhs.id_))
      return false;
    if (!(host_ == rhs.host_))
      return false;
    if (!(port_ == rhs.port_))
      return false;
    return true;
  }
  bool operator != (const ServerSignature &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ServerSignature & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(ServerSignature &a, ServerSignature &b);

}} // namespace

#endif