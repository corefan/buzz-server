/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef storage_actor_login_TYPES_H
#define storage_actor_login_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>



namespace database { namespace protocol {

struct ActorField {
  enum type {
    NAME = 0,
    LEVEL = 1,
    VOCATION = 2,
    GENDER = 3,
    HEAD = 4,
    HAIR = 5,
    CURRENT_HP = 6,
    CURRENT_MP = 7,
    CURRENT_EXP = 8,
    NIMBUS = 9,
    GOLD = 10,
    FREEDOM_DOLLARS = 11,
    RESTRICT_DOLLARS = 12,
    HONOUR = 13,
    WAR_SOUL = 14,
    GEM_SHARD = 15,
    JUSTICE = 16,
    MIRACLE_INTEGRAL = 17,
    LEGEND_INTEGRAL = 18,
    ARENA_INTEGRAL = 19,
    MAP = 20,
    X = 21,
    Y = 22,
    PRE_MAP = 23,
    PRE_X = 24,
    PRE_Y = 25,
    BROWN_NAME = 26,
    PK_MODE = 27,
    FUNCTIONALITY_STATE = 28,
    PACKET_CAPACITY = 29,
    STORAGE_CAPACITY = 30,
    AXE_FIGHT_SCORE = 31,
    SHOOT_FIGHT_SCORE = 32,
    MAGIC_FIGHT_SCORE = 33,
    LAST_LOGOUT_TIME = 34,
    VIP_REMAINDER_TIME = 35,
    VIP_TYPE = 36,
    WORLD_JUMP_VIP_NUM = 37,
    FCM_TYPE = 38,
    FCM_ONLINE_TIME = 39,
    CREATE_TIME = 40,
    HP_TASLIMAN = 41,
    MP_TASLIMAN = 42,
    MAX = 43
  };
};

extern const std::map<int, const char*> _ActorField_VALUES_TO_NAMES;

struct ActorLoginResult {
  enum type {
    SUCCESS = 0,
    ERROR_INEXIST = 1,
    ERROR_UNKNOWN = 2,
    MAX = 3
  };
};

extern const std::map<int, const char*> _ActorLoginResult_VALUES_TO_NAMES;


class StorageActorField {
 public:

  static const char* ascii_fingerprint; // = "37A76DB2E1A9C961542701DF699423D4";
  static const uint8_t binary_fingerprint[16]; // = {0x37,0xA7,0x6D,0xB2,0xE1,0xA9,0xC9,0x61,0x54,0x27,0x01,0xDF,0x69,0x94,0x23,0xD4};

  StorageActorField() : name_(), level_(0), vocation_(0), gender_(0), head_(0), hair_(0), current_hp_(0), current_mp_(0), current_exp_(0), nimbus_(0), gold_(0), freedom_dollars_(0), restrict_dollars_(0), honour_(0), war_soul_(0), gem_shard_(0), justice_(0), miracle_integral_(0), legend_integral_(0), arena_integral_(0), map_(0), x_(0), y_(0), pre_map_(0), pre_x_(0), pre_y_(0), brown_name_(0), pk_mode_(0), functionality_state_(), packet_capacity_(0), storage_capacity_(0), axe_fight_score_(0), shoot_fight_score_(0), magic_fight_score_(0), last_logout_time_(0), vip_remainder_time_(0), vip_type_(0), world_jump_vip_num_(0), fcm_type_(0), fcm_online_time_(0), create_time_(0), hp_tasliman_(0), mp_tasliman_(0) {
  }

  virtual ~StorageActorField() throw() {}

  std::string name_;
  int32_t level_;
  int32_t vocation_;
  int8_t gender_;
  int8_t head_;
  int8_t hair_;
  int32_t current_hp_;
  int32_t current_mp_;
  int32_t current_exp_;
  int32_t nimbus_;
  int32_t gold_;
  int32_t freedom_dollars_;
  int32_t restrict_dollars_;
  int32_t honour_;
  int32_t war_soul_;
  int32_t gem_shard_;
  int32_t justice_;
  int32_t miracle_integral_;
  int32_t legend_integral_;
  int32_t arena_integral_;
  int16_t map_;
  int32_t x_;
  int32_t y_;
  int16_t pre_map_;
  int32_t pre_x_;
  int32_t pre_y_;
  int32_t brown_name_;
  int32_t pk_mode_;
  std::string functionality_state_;
  int32_t packet_capacity_;
  int32_t storage_capacity_;
  int32_t axe_fight_score_;
  int32_t shoot_fight_score_;
  int32_t magic_fight_score_;
  int64_t last_logout_time_;
  int32_t vip_remainder_time_;
  int8_t vip_type_;
  int32_t world_jump_vip_num_;
  int32_t fcm_type_;
  int32_t fcm_online_time_;
  int64_t create_time_;
  int32_t hp_tasliman_;
  int32_t mp_tasliman_;

  void __set_name_(const std::string& val) {
    name_ = val;
  }

  void __set_level_(const int32_t val) {
    level_ = val;
  }

  void __set_vocation_(const int32_t val) {
    vocation_ = val;
  }

  void __set_gender_(const int8_t val) {
    gender_ = val;
  }

  void __set_head_(const int8_t val) {
    head_ = val;
  }

  void __set_hair_(const int8_t val) {
    hair_ = val;
  }

  void __set_current_hp_(const int32_t val) {
    current_hp_ = val;
  }

  void __set_current_mp_(const int32_t val) {
    current_mp_ = val;
  }

  void __set_current_exp_(const int32_t val) {
    current_exp_ = val;
  }

  void __set_nimbus_(const int32_t val) {
    nimbus_ = val;
  }

  void __set_gold_(const int32_t val) {
    gold_ = val;
  }

  void __set_freedom_dollars_(const int32_t val) {
    freedom_dollars_ = val;
  }

  void __set_restrict_dollars_(const int32_t val) {
    restrict_dollars_ = val;
  }

  void __set_honour_(const int32_t val) {
    honour_ = val;
  }

  void __set_war_soul_(const int32_t val) {
    war_soul_ = val;
  }

  void __set_gem_shard_(const int32_t val) {
    gem_shard_ = val;
  }

  void __set_justice_(const int32_t val) {
    justice_ = val;
  }

  void __set_miracle_integral_(const int32_t val) {
    miracle_integral_ = val;
  }

  void __set_legend_integral_(const int32_t val) {
    legend_integral_ = val;
  }

  void __set_arena_integral_(const int32_t val) {
    arena_integral_ = val;
  }

  void __set_map_(const int16_t val) {
    map_ = val;
  }

  void __set_x_(const int32_t val) {
    x_ = val;
  }

  void __set_y_(const int32_t val) {
    y_ = val;
  }

  void __set_pre_map_(const int16_t val) {
    pre_map_ = val;
  }

  void __set_pre_x_(const int32_t val) {
    pre_x_ = val;
  }

  void __set_pre_y_(const int32_t val) {
    pre_y_ = val;
  }

  void __set_brown_name_(const int32_t val) {
    brown_name_ = val;
  }

  void __set_pk_mode_(const int32_t val) {
    pk_mode_ = val;
  }

  void __set_functionality_state_(const std::string& val) {
    functionality_state_ = val;
  }

  void __set_packet_capacity_(const int32_t val) {
    packet_capacity_ = val;
  }

  void __set_storage_capacity_(const int32_t val) {
    storage_capacity_ = val;
  }

  void __set_axe_fight_score_(const int32_t val) {
    axe_fight_score_ = val;
  }

  void __set_shoot_fight_score_(const int32_t val) {
    shoot_fight_score_ = val;
  }

  void __set_magic_fight_score_(const int32_t val) {
    magic_fight_score_ = val;
  }

  void __set_last_logout_time_(const int64_t val) {
    last_logout_time_ = val;
  }

  void __set_vip_remainder_time_(const int32_t val) {
    vip_remainder_time_ = val;
  }

  void __set_vip_type_(const int8_t val) {
    vip_type_ = val;
  }

  void __set_world_jump_vip_num_(const int32_t val) {
    world_jump_vip_num_ = val;
  }

  void __set_fcm_type_(const int32_t val) {
    fcm_type_ = val;
  }

  void __set_fcm_online_time_(const int32_t val) {
    fcm_online_time_ = val;
  }

  void __set_create_time_(const int64_t val) {
    create_time_ = val;
  }

  void __set_hp_tasliman_(const int32_t val) {
    hp_tasliman_ = val;
  }

  void __set_mp_tasliman_(const int32_t val) {
    mp_tasliman_ = val;
  }

  bool operator == (const StorageActorField & rhs) const
  {
    if (!(name_ == rhs.name_))
      return false;
    if (!(level_ == rhs.level_))
      return false;
    if (!(vocation_ == rhs.vocation_))
      return false;
    if (!(gender_ == rhs.gender_))
      return false;
    if (!(head_ == rhs.head_))
      return false;
    if (!(hair_ == rhs.hair_))
      return false;
    if (!(current_hp_ == rhs.current_hp_))
      return false;
    if (!(current_mp_ == rhs.current_mp_))
      return false;
    if (!(current_exp_ == rhs.current_exp_))
      return false;
    if (!(nimbus_ == rhs.nimbus_))
      return false;
    if (!(gold_ == rhs.gold_))
      return false;
    if (!(freedom_dollars_ == rhs.freedom_dollars_))
      return false;
    if (!(restrict_dollars_ == rhs.restrict_dollars_))
      return false;
    if (!(honour_ == rhs.honour_))
      return false;
    if (!(war_soul_ == rhs.war_soul_))
      return false;
    if (!(gem_shard_ == rhs.gem_shard_))
      return false;
    if (!(justice_ == rhs.justice_))
      return false;
    if (!(miracle_integral_ == rhs.miracle_integral_))
      return false;
    if (!(legend_integral_ == rhs.legend_integral_))
      return false;
    if (!(arena_integral_ == rhs.arena_integral_))
      return false;
    if (!(map_ == rhs.map_))
      return false;
    if (!(x_ == rhs.x_))
      return false;
    if (!(y_ == rhs.y_))
      return false;
    if (!(pre_map_ == rhs.pre_map_))
      return false;
    if (!(pre_x_ == rhs.pre_x_))
      return false;
    if (!(pre_y_ == rhs.pre_y_))
      return false;
    if (!(brown_name_ == rhs.brown_name_))
      return false;
    if (!(pk_mode_ == rhs.pk_mode_))
      return false;
    if (!(functionality_state_ == rhs.functionality_state_))
      return false;
    if (!(packet_capacity_ == rhs.packet_capacity_))
      return false;
    if (!(storage_capacity_ == rhs.storage_capacity_))
      return false;
    if (!(axe_fight_score_ == rhs.axe_fight_score_))
      return false;
    if (!(shoot_fight_score_ == rhs.shoot_fight_score_))
      return false;
    if (!(magic_fight_score_ == rhs.magic_fight_score_))
      return false;
    if (!(last_logout_time_ == rhs.last_logout_time_))
      return false;
    if (!(vip_remainder_time_ == rhs.vip_remainder_time_))
      return false;
    if (!(vip_type_ == rhs.vip_type_))
      return false;
    if (!(world_jump_vip_num_ == rhs.world_jump_vip_num_))
      return false;
    if (!(fcm_type_ == rhs.fcm_type_))
      return false;
    if (!(fcm_online_time_ == rhs.fcm_online_time_))
      return false;
    if (!(create_time_ == rhs.create_time_))
      return false;
    if (!(hp_tasliman_ == rhs.hp_tasliman_))
      return false;
    if (!(mp_tasliman_ == rhs.mp_tasliman_))
      return false;
    return true;
  }
  bool operator != (const StorageActorField &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const StorageActorField & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(StorageActorField &a, StorageActorField &b);

typedef struct _StorageActorLoginRequest__isset {
  _StorageActorLoginRequest__isset() : jump_scene_(false), jump_x_(false), jump_y_(false) {}
  bool jump_scene_;
  bool jump_x_;
  bool jump_y_;
} _StorageActorLoginRequest__isset;

class StorageActorLoginRequest {
 public:

  static const char* ascii_fingerprint; // = "68D0AF07A6229A0625DC8B8182879318";
  static const uint8_t binary_fingerprint[16]; // = {0x68,0xD0,0xAF,0x07,0xA6,0x22,0x9A,0x06,0x25,0xDC,0x8B,0x81,0x82,0x87,0x93,0x18};

  StorageActorLoginRequest() : id_(0), gateway_(0), jump_scene_(0), jump_x_(0), jump_y_(0) {
  }

  virtual ~StorageActorLoginRequest() throw() {}

  int64_t id_;
  int32_t gateway_;
  int64_t jump_scene_;
  int32_t jump_x_;
  int32_t jump_y_;

  _StorageActorLoginRequest__isset __isset;

  void __set_id_(const int64_t val) {
    id_ = val;
  }

  void __set_gateway_(const int32_t val) {
    gateway_ = val;
  }

  void __set_jump_scene_(const int64_t val) {
    jump_scene_ = val;
    __isset.jump_scene_ = true;
  }

  void __set_jump_x_(const int32_t val) {
    jump_x_ = val;
    __isset.jump_x_ = true;
  }

  void __set_jump_y_(const int32_t val) {
    jump_y_ = val;
    __isset.jump_y_ = true;
  }

  bool operator == (const StorageActorLoginRequest & rhs) const
  {
    if (!(id_ == rhs.id_))
      return false;
    if (!(gateway_ == rhs.gateway_))
      return false;
    if (__isset.jump_scene_ != rhs.__isset.jump_scene_)
      return false;
    else if (__isset.jump_scene_ && !(jump_scene_ == rhs.jump_scene_))
      return false;
    if (__isset.jump_x_ != rhs.__isset.jump_x_)
      return false;
    else if (__isset.jump_x_ && !(jump_x_ == rhs.jump_x_))
      return false;
    if (__isset.jump_y_ != rhs.__isset.jump_y_)
      return false;
    else if (__isset.jump_y_ && !(jump_y_ == rhs.jump_y_))
      return false;
    return true;
  }
  bool operator != (const StorageActorLoginRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const StorageActorLoginRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(StorageActorLoginRequest &a, StorageActorLoginRequest &b);

typedef struct _StorageActorLoginResponse__isset {
  _StorageActorLoginResponse__isset() : field_(false) {}
  bool field_;
} _StorageActorLoginResponse__isset;

class StorageActorLoginResponse {
 public:

  static const char* ascii_fingerprint; // = "5EC544D8660A98BBDDF68ECBA4A04C3A";
  static const uint8_t binary_fingerprint[16]; // = {0x5E,0xC5,0x44,0xD8,0x66,0x0A,0x98,0xBB,0xDD,0xF6,0x8E,0xCB,0xA4,0xA0,0x4C,0x3A};

  StorageActorLoginResponse() : result_((ActorLoginResult::type)0) {
  }

  virtual ~StorageActorLoginResponse() throw() {}

  ActorLoginResult::type result_;
  StorageActorField field_;

  _StorageActorLoginResponse__isset __isset;

  void __set_result_(const ActorLoginResult::type val) {
    result_ = val;
  }

  void __set_field_(const StorageActorField& val) {
    field_ = val;
    __isset.field_ = true;
  }

  bool operator == (const StorageActorLoginResponse & rhs) const
  {
    if (!(result_ == rhs.result_))
      return false;
    if (__isset.field_ != rhs.__isset.field_)
      return false;
    else if (__isset.field_ && !(field_ == rhs.field_))
      return false;
    return true;
  }
  bool operator != (const StorageActorLoginResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const StorageActorLoginResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(StorageActorLoginResponse &a, StorageActorLoginResponse &b);

}} // namespace

#endif
