/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef game_playing_protocol_TYPES_H
#define game_playing_protocol_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include "playing_types.h"
#include "session_game_protocol_types.h"


namespace session { namespace protocol {


class MessagePlayingCreateRequest {
 public:

  static const char* ascii_fingerprint; // = "AFAFBCDB9822F9D1AA4E44188E720B47";
  static const uint8_t binary_fingerprint[16]; // = {0xAF,0xAF,0xBC,0xDB,0x98,0x22,0xF9,0xD1,0xAA,0x4E,0x44,0x18,0x8E,0x72,0x0B,0x47};

  MessagePlayingCreateRequest() : actor_(0), template_(0) {
  }

  virtual ~MessagePlayingCreateRequest() throw() {}

  int64_t actor_;
  int32_t template_;

  void __set_actor_(const int64_t val) {
    actor_ = val;
  }

  void __set_template_(const int32_t val) {
    template_ = val;
  }

  bool operator == (const MessagePlayingCreateRequest & rhs) const
  {
    if (!(actor_ == rhs.actor_))
      return false;
    if (!(template_ == rhs.template_))
      return false;
    return true;
  }
  bool operator != (const MessagePlayingCreateRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessagePlayingCreateRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessagePlayingCreateRequest &a, MessagePlayingCreateRequest &b);


class MessagePlayingCreateResponse {
 public:

  static const char* ascii_fingerprint; // = "0B4A65E8D69EA2FF9B061184622B3585";
  static const uint8_t binary_fingerprint[16]; // = {0x0B,0x4A,0x65,0xE8,0xD6,0x9E,0xA2,0xFF,0x9B,0x06,0x11,0x84,0x62,0x2B,0x35,0x85};

  MessagePlayingCreateResponse() : actor_(0), template_(0), playing_(0), result_(0) {
  }

  virtual ~MessagePlayingCreateResponse() throw() {}

  int64_t actor_;
  int32_t template_;
  int64_t playing_;
  bool result_;

  void __set_actor_(const int64_t val) {
    actor_ = val;
  }

  void __set_template_(const int32_t val) {
    template_ = val;
  }

  void __set_playing_(const int64_t val) {
    playing_ = val;
  }

  void __set_result_(const bool val) {
    result_ = val;
  }

  bool operator == (const MessagePlayingCreateResponse & rhs) const
  {
    if (!(actor_ == rhs.actor_))
      return false;
    if (!(template_ == rhs.template_))
      return false;
    if (!(playing_ == rhs.playing_))
      return false;
    if (!(result_ == rhs.result_))
      return false;
    return true;
  }
  bool operator != (const MessagePlayingCreateResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessagePlayingCreateResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessagePlayingCreateResponse &a, MessagePlayingCreateResponse &b);


class MessagePlayingCreateSynchronize {
 public:

  static const char* ascii_fingerprint; // = "AFAFBCDB9822F9D1AA4E44188E720B47";
  static const uint8_t binary_fingerprint[16]; // = {0xAF,0xAF,0xBC,0xDB,0x98,0x22,0xF9,0xD1,0xAA,0x4E,0x44,0x18,0x8E,0x72,0x0B,0x47};

  MessagePlayingCreateSynchronize() : playing_(0), template_(0) {
  }

  virtual ~MessagePlayingCreateSynchronize() throw() {}

  int64_t playing_;
  int32_t template_;

  void __set_playing_(const int64_t val) {
    playing_ = val;
  }

  void __set_template_(const int32_t val) {
    template_ = val;
  }

  bool operator == (const MessagePlayingCreateSynchronize & rhs) const
  {
    if (!(playing_ == rhs.playing_))
      return false;
    if (!(template_ == rhs.template_))
      return false;
    return true;
  }
  bool operator != (const MessagePlayingCreateSynchronize &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessagePlayingCreateSynchronize & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessagePlayingCreateSynchronize &a, MessagePlayingCreateSynchronize &b);

typedef struct _MessagePlayingCreateFinishRequest__isset {
  _MessagePlayingCreateFinishRequest__isset() : failure_(false) {}
  bool failure_;
} _MessagePlayingCreateFinishRequest__isset;

class MessagePlayingCreateFinishRequest {
 public:

  static const char* ascii_fingerprint; // = "E4C1161F1C2BCF8F04ACD20816D7FBCC";
  static const uint8_t binary_fingerprint[16]; // = {0xE4,0xC1,0x16,0x1F,0x1C,0x2B,0xCF,0x8F,0x04,0xAC,0xD2,0x08,0x16,0xD7,0xFB,0xCC};

  MessagePlayingCreateFinishRequest() : playing_(0), scene_(0), failure_(0) {
  }

  virtual ~MessagePlayingCreateFinishRequest() throw() {}

  int64_t playing_;
  int64_t scene_;
  int8_t failure_;

  _MessagePlayingCreateFinishRequest__isset __isset;

  void __set_playing_(const int64_t val) {
    playing_ = val;
  }

  void __set_scene_(const int64_t val) {
    scene_ = val;
  }

  void __set_failure_(const int8_t val) {
    failure_ = val;
    __isset.failure_ = true;
  }

  bool operator == (const MessagePlayingCreateFinishRequest & rhs) const
  {
    if (!(playing_ == rhs.playing_))
      return false;
    if (!(scene_ == rhs.scene_))
      return false;
    if (__isset.failure_ != rhs.__isset.failure_)
      return false;
    else if (__isset.failure_ && !(failure_ == rhs.failure_))
      return false;
    return true;
  }
  bool operator != (const MessagePlayingCreateFinishRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessagePlayingCreateFinishRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessagePlayingCreateFinishRequest &a, MessagePlayingCreateFinishRequest &b);


class MessagePlayingCreateFinishResponse {
 public:

  static const char* ascii_fingerprint; // = "25038F937443AC9A2A06CEE5209E41BF";
  static const uint8_t binary_fingerprint[16]; // = {0x25,0x03,0x8F,0x93,0x74,0x43,0xAC,0x9A,0x2A,0x06,0xCE,0xE5,0x20,0x9E,0x41,0xBF};

  MessagePlayingCreateFinishResponse() : playing_(0), result_(0) {
  }

  virtual ~MessagePlayingCreateFinishResponse() throw() {}

  int64_t playing_;
  bool result_;

  void __set_playing_(const int64_t val) {
    playing_ = val;
  }

  void __set_result_(const bool val) {
    result_ = val;
  }

  bool operator == (const MessagePlayingCreateFinishResponse & rhs) const
  {
    if (!(playing_ == rhs.playing_))
      return false;
    if (!(result_ == rhs.result_))
      return false;
    return true;
  }
  bool operator != (const MessagePlayingCreateFinishResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessagePlayingCreateFinishResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessagePlayingCreateFinishResponse &a, MessagePlayingCreateFinishResponse &b);


class MessagePlayingEnterSynchronize {
 public:

  static const char* ascii_fingerprint; // = "EA2D65F1E0BB78760205682082304B41";
  static const uint8_t binary_fingerprint[16]; // = {0xEA,0x2D,0x65,0xF1,0xE0,0xBB,0x78,0x76,0x02,0x05,0x68,0x20,0x82,0x30,0x4B,0x41};

  MessagePlayingEnterSynchronize() : actor_(0), playing_(0), scene_(0) {
  }

  virtual ~MessagePlayingEnterSynchronize() throw() {}

  int64_t actor_;
  int64_t playing_;
  int64_t scene_;

  void __set_actor_(const int64_t val) {
    actor_ = val;
  }

  void __set_playing_(const int64_t val) {
    playing_ = val;
  }

  void __set_scene_(const int64_t val) {
    scene_ = val;
  }

  bool operator == (const MessagePlayingEnterSynchronize & rhs) const
  {
    if (!(actor_ == rhs.actor_))
      return false;
    if (!(playing_ == rhs.playing_))
      return false;
    if (!(scene_ == rhs.scene_))
      return false;
    return true;
  }
  bool operator != (const MessagePlayingEnterSynchronize &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessagePlayingEnterSynchronize & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessagePlayingEnterSynchronize &a, MessagePlayingEnterSynchronize &b);


class MessagePlayingDestoryRequest {
 public:

  static const char* ascii_fingerprint; // = "56A59CE7FFAF82BCA8A19FAACDE4FB75";
  static const uint8_t binary_fingerprint[16]; // = {0x56,0xA5,0x9C,0xE7,0xFF,0xAF,0x82,0xBC,0xA8,0xA1,0x9F,0xAA,0xCD,0xE4,0xFB,0x75};

  MessagePlayingDestoryRequest() : playing_(0) {
  }

  virtual ~MessagePlayingDestoryRequest() throw() {}

  int64_t playing_;

  void __set_playing_(const int64_t val) {
    playing_ = val;
  }

  bool operator == (const MessagePlayingDestoryRequest & rhs) const
  {
    if (!(playing_ == rhs.playing_))
      return false;
    return true;
  }
  bool operator != (const MessagePlayingDestoryRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessagePlayingDestoryRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessagePlayingDestoryRequest &a, MessagePlayingDestoryRequest &b);


class MessagePlayingDestoryResponse {
 public:

  static const char* ascii_fingerprint; // = "25038F937443AC9A2A06CEE5209E41BF";
  static const uint8_t binary_fingerprint[16]; // = {0x25,0x03,0x8F,0x93,0x74,0x43,0xAC,0x9A,0x2A,0x06,0xCE,0xE5,0x20,0x9E,0x41,0xBF};

  MessagePlayingDestoryResponse() : playing_(0), result_(0) {
  }

  virtual ~MessagePlayingDestoryResponse() throw() {}

  int64_t playing_;
  bool result_;

  void __set_playing_(const int64_t val) {
    playing_ = val;
  }

  void __set_result_(const bool val) {
    result_ = val;
  }

  bool operator == (const MessagePlayingDestoryResponse & rhs) const
  {
    if (!(playing_ == rhs.playing_))
      return false;
    if (!(result_ == rhs.result_))
      return false;
    return true;
  }
  bool operator != (const MessagePlayingDestoryResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessagePlayingDestoryResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessagePlayingDestoryResponse &a, MessagePlayingDestoryResponse &b);


class MessagePlayingEndRequest {
 public:

  static const char* ascii_fingerprint; // = "56A59CE7FFAF82BCA8A19FAACDE4FB75";
  static const uint8_t binary_fingerprint[16]; // = {0x56,0xA5,0x9C,0xE7,0xFF,0xAF,0x82,0xBC,0xA8,0xA1,0x9F,0xAA,0xCD,0xE4,0xFB,0x75};

  MessagePlayingEndRequest() : playing_(0) {
  }

  virtual ~MessagePlayingEndRequest() throw() {}

  int64_t playing_;

  void __set_playing_(const int64_t val) {
    playing_ = val;
  }

  bool operator == (const MessagePlayingEndRequest & rhs) const
  {
    if (!(playing_ == rhs.playing_))
      return false;
    return true;
  }
  bool operator != (const MessagePlayingEndRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessagePlayingEndRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessagePlayingEndRequest &a, MessagePlayingEndRequest &b);


class MessagePlayingEndResponse {
 public:

  static const char* ascii_fingerprint; // = "25038F937443AC9A2A06CEE5209E41BF";
  static const uint8_t binary_fingerprint[16]; // = {0x25,0x03,0x8F,0x93,0x74,0x43,0xAC,0x9A,0x2A,0x06,0xCE,0xE5,0x20,0x9E,0x41,0xBF};

  MessagePlayingEndResponse() : playing_(0), result_(0) {
  }

  virtual ~MessagePlayingEndResponse() throw() {}

  int64_t playing_;
  bool result_;

  void __set_playing_(const int64_t val) {
    playing_ = val;
  }

  void __set_result_(const bool val) {
    result_ = val;
  }

  bool operator == (const MessagePlayingEndResponse & rhs) const
  {
    if (!(playing_ == rhs.playing_))
      return false;
    if (!(result_ == rhs.result_))
      return false;
    return true;
  }
  bool operator != (const MessagePlayingEndResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessagePlayingEndResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessagePlayingEndResponse &a, MessagePlayingEndResponse &b);


class PlayingPageField {
 public:

  static const char* ascii_fingerprint; // = "8174D44AE91049FBB40F3E5E324445B8";
  static const uint8_t binary_fingerprint[16]; // = {0x81,0x74,0xD4,0x4A,0xE9,0x10,0x49,0xFB,0xB4,0x0F,0x3E,0x5E,0x32,0x44,0x45,0xB8};

  PlayingPageField() : template_(0) {
  }

  virtual ~PlayingPageField() throw() {}

  int32_t template_;
   ::entity::PlayingRecordField record_;
   ::entity::PlayingResultField result_;

  void __set_template_(const int32_t val) {
    template_ = val;
  }

  void __set_record_(const  ::entity::PlayingRecordField& val) {
    record_ = val;
  }

  void __set_result_(const  ::entity::PlayingResultField& val) {
    result_ = val;
  }

  bool operator == (const PlayingPageField & rhs) const
  {
    if (!(template_ == rhs.template_))
      return false;
    if (!(record_ == rhs.record_))
      return false;
    if (!(result_ == rhs.result_))
      return false;
    return true;
  }
  bool operator != (const PlayingPageField &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const PlayingPageField & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(PlayingPageField &a, PlayingPageField &b);


class MessagePlayingActorPageSynchronize {
 public:

  static const char* ascii_fingerprint; // = "498C3579A14F7C9F81822876106192F1";
  static const uint8_t binary_fingerprint[16]; // = {0x49,0x8C,0x35,0x79,0xA1,0x4F,0x7C,0x9F,0x81,0x82,0x28,0x76,0x10,0x61,0x92,0xF1};

  MessagePlayingActorPageSynchronize() : actor_(0) {
  }

  virtual ~MessagePlayingActorPageSynchronize() throw() {}

  int64_t actor_;
  std::vector<PlayingPageField>  pages_;

  void __set_actor_(const int64_t val) {
    actor_ = val;
  }

  void __set_pages_(const std::vector<PlayingPageField> & val) {
    pages_ = val;
  }

  bool operator == (const MessagePlayingActorPageSynchronize & rhs) const
  {
    if (!(actor_ == rhs.actor_))
      return false;
    if (!(pages_ == rhs.pages_))
      return false;
    return true;
  }
  bool operator != (const MessagePlayingActorPageSynchronize &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessagePlayingActorPageSynchronize & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessagePlayingActorPageSynchronize &a, MessagePlayingActorPageSynchronize &b);


class MessagePlayingTeamSynchronize {
 public:

  static const char* ascii_fingerprint; // = "F33135321253DAEB67B0E79E416CA831";
  static const uint8_t binary_fingerprint[16]; // = {0xF3,0x31,0x35,0x32,0x12,0x53,0xDA,0xEB,0x67,0xB0,0xE7,0x9E,0x41,0x6C,0xA8,0x31};

  MessagePlayingTeamSynchronize() : actor_(0), playing_team_(0) {
  }

  virtual ~MessagePlayingTeamSynchronize() throw() {}

  int64_t actor_;
  int64_t playing_team_;

  void __set_actor_(const int64_t val) {
    actor_ = val;
  }

  void __set_playing_team_(const int64_t val) {
    playing_team_ = val;
  }

  bool operator == (const MessagePlayingTeamSynchronize & rhs) const
  {
    if (!(actor_ == rhs.actor_))
      return false;
    if (!(playing_team_ == rhs.playing_team_))
      return false;
    return true;
  }
  bool operator != (const MessagePlayingTeamSynchronize &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessagePlayingTeamSynchronize & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessagePlayingTeamSynchronize &a, MessagePlayingTeamSynchronize &b);


class MazeMapData {
 public:

  static const char* ascii_fingerprint; // = "A803C54EAD95E24D90C5E66FB98EA72B";
  static const uint8_t binary_fingerprint[16]; // = {0xA8,0x03,0xC5,0x4E,0xAD,0x95,0xE2,0x4D,0x90,0xC5,0xE6,0x6F,0xB9,0x8E,0xA7,0x2B};

  MazeMapData() {
  }

  virtual ~MazeMapData() throw() {}

  std::vector<int32_t>  grids_;

  void __set_grids_(const std::vector<int32_t> & val) {
    grids_ = val;
  }

  bool operator == (const MazeMapData & rhs) const
  {
    if (!(grids_ == rhs.grids_))
      return false;
    return true;
  }
  bool operator != (const MazeMapData &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MazeMapData & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MazeMapData &a, MazeMapData &b);


class MessageMazeMapInfoRequest {
 public:

  static const char* ascii_fingerprint; // = "99914B932BD37A50B983C5E7C90AE93B";
  static const uint8_t binary_fingerprint[16]; // = {0x99,0x91,0x4B,0x93,0x2B,0xD3,0x7A,0x50,0xB9,0x83,0xC5,0xE7,0xC9,0x0A,0xE9,0x3B};

  MessageMazeMapInfoRequest() {
  }

  virtual ~MessageMazeMapInfoRequest() throw() {}


  bool operator == (const MessageMazeMapInfoRequest & /* rhs */) const
  {
    return true;
  }
  bool operator != (const MessageMazeMapInfoRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageMazeMapInfoRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageMazeMapInfoRequest &a, MessageMazeMapInfoRequest &b);


class MessageMazeMapInfoSynchronize {
 public:

  static const char* ascii_fingerprint; // = "59DBF6C7D218FE2BCF75E0E81EAF703E";
  static const uint8_t binary_fingerprint[16]; // = {0x59,0xDB,0xF6,0xC7,0xD2,0x18,0xFE,0x2B,0xCF,0x75,0xE0,0xE8,0x1E,0xAF,0x70,0x3E};

  MessageMazeMapInfoSynchronize() : last_update_time_(0) {
  }

  virtual ~MessageMazeMapInfoSynchronize() throw() {}

  std::vector<MazeMapData>  maps_;
  int64_t last_update_time_;

  void __set_maps_(const std::vector<MazeMapData> & val) {
    maps_ = val;
  }

  void __set_last_update_time_(const int64_t val) {
    last_update_time_ = val;
  }

  bool operator == (const MessageMazeMapInfoSynchronize & rhs) const
  {
    if (!(maps_ == rhs.maps_))
      return false;
    if (!(last_update_time_ == rhs.last_update_time_))
      return false;
    return true;
  }
  bool operator != (const MessageMazeMapInfoSynchronize &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageMazeMapInfoSynchronize & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageMazeMapInfoSynchronize &a, MessageMazeMapInfoSynchronize &b);

}} // namespace

#endif
