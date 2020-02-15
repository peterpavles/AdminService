// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: msg_client.proto

#ifndef PROTOBUF_msg_5fclient_2eproto__INCLUDED
#define PROTOBUF_msg_5fclient_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_msg_5fclient_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[3];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsMsgSvrImpl();
void InitDefaultsMsgSvr();
void InitDefaultsMsgSvrListImpl();
void InitDefaultsMsgSvrList();
void InitDefaultsMsgExecCommandImpl();
void InitDefaultsMsgExecCommand();
inline void InitDefaults() {
  InitDefaultsMsgSvr();
  InitDefaultsMsgSvrList();
  InitDefaultsMsgExecCommand();
}
}  // namespace protobuf_msg_5fclient_2eproto
namespace PB {
class MsgExecCommand;
class MsgExecCommandDefaultTypeInternal;
extern MsgExecCommandDefaultTypeInternal _MsgExecCommand_default_instance_;
class MsgSvr;
class MsgSvrDefaultTypeInternal;
extern MsgSvrDefaultTypeInternal _MsgSvr_default_instance_;
class MsgSvrList;
class MsgSvrListDefaultTypeInternal;
extern MsgSvrListDefaultTypeInternal _MsgSvrList_default_instance_;
}  // namespace PB
namespace PB {

// ===================================================================

class MsgSvr : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:PB.MsgSvr) */ {
 public:
  MsgSvr();
  virtual ~MsgSvr();

  MsgSvr(const MsgSvr& from);

  inline MsgSvr& operator=(const MsgSvr& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  MsgSvr(MsgSvr&& from) noexcept
    : MsgSvr() {
    *this = ::std::move(from);
  }

  inline MsgSvr& operator=(MsgSvr&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const MsgSvr& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MsgSvr* internal_default_instance() {
    return reinterpret_cast<const MsgSvr*>(
               &_MsgSvr_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(MsgSvr* other);
  friend void swap(MsgSvr& a, MsgSvr& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline MsgSvr* New() const PROTOBUF_FINAL { return New(NULL); }

  MsgSvr* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const MsgSvr& from);
  void MergeFrom(const MsgSvr& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(MsgSvr* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string shard = 1;
  void clear_shard();
  static const int kShardFieldNumber = 1;
  const ::std::string& shard() const;
  void set_shard(const ::std::string& value);
  #if LANG_CXX11
  void set_shard(::std::string&& value);
  #endif
  void set_shard(const char* value);
  void set_shard(const char* value, size_t size);
  ::std::string* mutable_shard();
  ::std::string* release_shard();
  void set_allocated_shard(::std::string* shard);

  // string name = 2;
  void clear_name();
  static const int kNameFieldNumber = 2;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // string ip = 4;
  void clear_ip();
  static const int kIpFieldNumber = 4;
  const ::std::string& ip() const;
  void set_ip(const ::std::string& value);
  #if LANG_CXX11
  void set_ip(::std::string&& value);
  #endif
  void set_ip(const char* value);
  void set_ip(const char* value, size_t size);
  ::std::string* mutable_ip();
  ::std::string* release_ip();
  void set_allocated_ip(::std::string* ip);

  // int32 sid = 3;
  void clear_sid();
  static const int kSidFieldNumber = 3;
  ::google::protobuf::int32 sid() const;
  void set_sid(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:PB.MsgSvr)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr shard_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr ip_;
  ::google::protobuf::int32 sid_;
  mutable int _cached_size_;
  friend struct ::protobuf_msg_5fclient_2eproto::TableStruct;
  friend void ::protobuf_msg_5fclient_2eproto::InitDefaultsMsgSvrImpl();
};
// -------------------------------------------------------------------

class MsgSvrList : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:PB.MsgSvrList) */ {
 public:
  MsgSvrList();
  virtual ~MsgSvrList();

  MsgSvrList(const MsgSvrList& from);

  inline MsgSvrList& operator=(const MsgSvrList& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  MsgSvrList(MsgSvrList&& from) noexcept
    : MsgSvrList() {
    *this = ::std::move(from);
  }

  inline MsgSvrList& operator=(MsgSvrList&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const MsgSvrList& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MsgSvrList* internal_default_instance() {
    return reinterpret_cast<const MsgSvrList*>(
               &_MsgSvrList_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(MsgSvrList* other);
  friend void swap(MsgSvrList& a, MsgSvrList& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline MsgSvrList* New() const PROTOBUF_FINAL { return New(NULL); }

  MsgSvrList* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const MsgSvrList& from);
  void MergeFrom(const MsgSvrList& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(MsgSvrList* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .PB.MsgSvr svrlist = 1;
  int svrlist_size() const;
  void clear_svrlist();
  static const int kSvrlistFieldNumber = 1;
  const ::PB::MsgSvr& svrlist(int index) const;
  ::PB::MsgSvr* mutable_svrlist(int index);
  ::PB::MsgSvr* add_svrlist();
  ::google::protobuf::RepeatedPtrField< ::PB::MsgSvr >*
      mutable_svrlist();
  const ::google::protobuf::RepeatedPtrField< ::PB::MsgSvr >&
      svrlist() const;

  // @@protoc_insertion_point(class_scope:PB.MsgSvrList)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::PB::MsgSvr > svrlist_;
  mutable int _cached_size_;
  friend struct ::protobuf_msg_5fclient_2eproto::TableStruct;
  friend void ::protobuf_msg_5fclient_2eproto::InitDefaultsMsgSvrListImpl();
};
// -------------------------------------------------------------------

class MsgExecCommand : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:PB.MsgExecCommand) */ {
 public:
  MsgExecCommand();
  virtual ~MsgExecCommand();

  MsgExecCommand(const MsgExecCommand& from);

  inline MsgExecCommand& operator=(const MsgExecCommand& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  MsgExecCommand(MsgExecCommand&& from) noexcept
    : MsgExecCommand() {
    *this = ::std::move(from);
  }

  inline MsgExecCommand& operator=(MsgExecCommand&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const MsgExecCommand& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MsgExecCommand* internal_default_instance() {
    return reinterpret_cast<const MsgExecCommand*>(
               &_MsgExecCommand_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(MsgExecCommand* other);
  friend void swap(MsgExecCommand& a, MsgExecCommand& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline MsgExecCommand* New() const PROTOBUF_FINAL { return New(NULL); }

  MsgExecCommand* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const MsgExecCommand& from);
  void MergeFrom(const MsgExecCommand& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(MsgExecCommand* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .PB.MsgSvr svrlist = 1;
  int svrlist_size() const;
  void clear_svrlist();
  static const int kSvrlistFieldNumber = 1;
  const ::PB::MsgSvr& svrlist(int index) const;
  ::PB::MsgSvr* mutable_svrlist(int index);
  ::PB::MsgSvr* add_svrlist();
  ::google::protobuf::RepeatedPtrField< ::PB::MsgSvr >*
      mutable_svrlist();
  const ::google::protobuf::RepeatedPtrField< ::PB::MsgSvr >&
      svrlist() const;

  // string command = 2;
  void clear_command();
  static const int kCommandFieldNumber = 2;
  const ::std::string& command() const;
  void set_command(const ::std::string& value);
  #if LANG_CXX11
  void set_command(::std::string&& value);
  #endif
  void set_command(const char* value);
  void set_command(const char* value, size_t size);
  ::std::string* mutable_command();
  ::std::string* release_command();
  void set_allocated_command(::std::string* command);

  // string result = 3;
  void clear_result();
  static const int kResultFieldNumber = 3;
  const ::std::string& result() const;
  void set_result(const ::std::string& value);
  #if LANG_CXX11
  void set_result(::std::string&& value);
  #endif
  void set_result(const char* value);
  void set_result(const char* value, size_t size);
  ::std::string* mutable_result();
  ::std::string* release_result();
  void set_allocated_result(::std::string* result);

  // string from = 5;
  void clear_from();
  static const int kFromFieldNumber = 5;
  const ::std::string& from() const;
  void set_from(const ::std::string& value);
  #if LANG_CXX11
  void set_from(::std::string&& value);
  #endif
  void set_from(const char* value);
  void set_from(const char* value, size_t size);
  ::std::string* mutable_from();
  ::std::string* release_from();
  void set_allocated_from(::std::string* from);

  // int32 runms = 4;
  void clear_runms();
  static const int kRunmsFieldNumber = 4;
  ::google::protobuf::int32 runms() const;
  void set_runms(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:PB.MsgExecCommand)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::PB::MsgSvr > svrlist_;
  ::google::protobuf::internal::ArenaStringPtr command_;
  ::google::protobuf::internal::ArenaStringPtr result_;
  ::google::protobuf::internal::ArenaStringPtr from_;
  ::google::protobuf::int32 runms_;
  mutable int _cached_size_;
  friend struct ::protobuf_msg_5fclient_2eproto::TableStruct;
  friend void ::protobuf_msg_5fclient_2eproto::InitDefaultsMsgExecCommandImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MsgSvr

// string shard = 1;
inline void MsgSvr::clear_shard() {
  shard_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MsgSvr::shard() const {
  // @@protoc_insertion_point(field_get:PB.MsgSvr.shard)
  return shard_.GetNoArena();
}
inline void MsgSvr::set_shard(const ::std::string& value) {
  
  shard_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:PB.MsgSvr.shard)
}
#if LANG_CXX11
inline void MsgSvr::set_shard(::std::string&& value) {
  
  shard_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:PB.MsgSvr.shard)
}
#endif
inline void MsgSvr::set_shard(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  shard_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:PB.MsgSvr.shard)
}
inline void MsgSvr::set_shard(const char* value, size_t size) {
  
  shard_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:PB.MsgSvr.shard)
}
inline ::std::string* MsgSvr::mutable_shard() {
  
  // @@protoc_insertion_point(field_mutable:PB.MsgSvr.shard)
  return shard_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MsgSvr::release_shard() {
  // @@protoc_insertion_point(field_release:PB.MsgSvr.shard)
  
  return shard_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MsgSvr::set_allocated_shard(::std::string* shard) {
  if (shard != NULL) {
    
  } else {
    
  }
  shard_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), shard);
  // @@protoc_insertion_point(field_set_allocated:PB.MsgSvr.shard)
}

// string name = 2;
inline void MsgSvr::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MsgSvr::name() const {
  // @@protoc_insertion_point(field_get:PB.MsgSvr.name)
  return name_.GetNoArena();
}
inline void MsgSvr::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:PB.MsgSvr.name)
}
#if LANG_CXX11
inline void MsgSvr::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:PB.MsgSvr.name)
}
#endif
inline void MsgSvr::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:PB.MsgSvr.name)
}
inline void MsgSvr::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:PB.MsgSvr.name)
}
inline ::std::string* MsgSvr::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:PB.MsgSvr.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MsgSvr::release_name() {
  // @@protoc_insertion_point(field_release:PB.MsgSvr.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MsgSvr::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:PB.MsgSvr.name)
}

// int32 sid = 3;
inline void MsgSvr::clear_sid() {
  sid_ = 0;
}
inline ::google::protobuf::int32 MsgSvr::sid() const {
  // @@protoc_insertion_point(field_get:PB.MsgSvr.sid)
  return sid_;
}
inline void MsgSvr::set_sid(::google::protobuf::int32 value) {
  
  sid_ = value;
  // @@protoc_insertion_point(field_set:PB.MsgSvr.sid)
}

// string ip = 4;
inline void MsgSvr::clear_ip() {
  ip_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MsgSvr::ip() const {
  // @@protoc_insertion_point(field_get:PB.MsgSvr.ip)
  return ip_.GetNoArena();
}
inline void MsgSvr::set_ip(const ::std::string& value) {
  
  ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:PB.MsgSvr.ip)
}
#if LANG_CXX11
inline void MsgSvr::set_ip(::std::string&& value) {
  
  ip_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:PB.MsgSvr.ip)
}
#endif
inline void MsgSvr::set_ip(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:PB.MsgSvr.ip)
}
inline void MsgSvr::set_ip(const char* value, size_t size) {
  
  ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:PB.MsgSvr.ip)
}
inline ::std::string* MsgSvr::mutable_ip() {
  
  // @@protoc_insertion_point(field_mutable:PB.MsgSvr.ip)
  return ip_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MsgSvr::release_ip() {
  // @@protoc_insertion_point(field_release:PB.MsgSvr.ip)
  
  return ip_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MsgSvr::set_allocated_ip(::std::string* ip) {
  if (ip != NULL) {
    
  } else {
    
  }
  ip_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ip);
  // @@protoc_insertion_point(field_set_allocated:PB.MsgSvr.ip)
}

// -------------------------------------------------------------------

// MsgSvrList

// repeated .PB.MsgSvr svrlist = 1;
inline int MsgSvrList::svrlist_size() const {
  return svrlist_.size();
}
inline void MsgSvrList::clear_svrlist() {
  svrlist_.Clear();
}
inline const ::PB::MsgSvr& MsgSvrList::svrlist(int index) const {
  // @@protoc_insertion_point(field_get:PB.MsgSvrList.svrlist)
  return svrlist_.Get(index);
}
inline ::PB::MsgSvr* MsgSvrList::mutable_svrlist(int index) {
  // @@protoc_insertion_point(field_mutable:PB.MsgSvrList.svrlist)
  return svrlist_.Mutable(index);
}
inline ::PB::MsgSvr* MsgSvrList::add_svrlist() {
  // @@protoc_insertion_point(field_add:PB.MsgSvrList.svrlist)
  return svrlist_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::PB::MsgSvr >*
MsgSvrList::mutable_svrlist() {
  // @@protoc_insertion_point(field_mutable_list:PB.MsgSvrList.svrlist)
  return &svrlist_;
}
inline const ::google::protobuf::RepeatedPtrField< ::PB::MsgSvr >&
MsgSvrList::svrlist() const {
  // @@protoc_insertion_point(field_list:PB.MsgSvrList.svrlist)
  return svrlist_;
}

// -------------------------------------------------------------------

// MsgExecCommand

// repeated .PB.MsgSvr svrlist = 1;
inline int MsgExecCommand::svrlist_size() const {
  return svrlist_.size();
}
inline void MsgExecCommand::clear_svrlist() {
  svrlist_.Clear();
}
inline const ::PB::MsgSvr& MsgExecCommand::svrlist(int index) const {
  // @@protoc_insertion_point(field_get:PB.MsgExecCommand.svrlist)
  return svrlist_.Get(index);
}
inline ::PB::MsgSvr* MsgExecCommand::mutable_svrlist(int index) {
  // @@protoc_insertion_point(field_mutable:PB.MsgExecCommand.svrlist)
  return svrlist_.Mutable(index);
}
inline ::PB::MsgSvr* MsgExecCommand::add_svrlist() {
  // @@protoc_insertion_point(field_add:PB.MsgExecCommand.svrlist)
  return svrlist_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::PB::MsgSvr >*
MsgExecCommand::mutable_svrlist() {
  // @@protoc_insertion_point(field_mutable_list:PB.MsgExecCommand.svrlist)
  return &svrlist_;
}
inline const ::google::protobuf::RepeatedPtrField< ::PB::MsgSvr >&
MsgExecCommand::svrlist() const {
  // @@protoc_insertion_point(field_list:PB.MsgExecCommand.svrlist)
  return svrlist_;
}

// string command = 2;
inline void MsgExecCommand::clear_command() {
  command_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MsgExecCommand::command() const {
  // @@protoc_insertion_point(field_get:PB.MsgExecCommand.command)
  return command_.GetNoArena();
}
inline void MsgExecCommand::set_command(const ::std::string& value) {
  
  command_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:PB.MsgExecCommand.command)
}
#if LANG_CXX11
inline void MsgExecCommand::set_command(::std::string&& value) {
  
  command_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:PB.MsgExecCommand.command)
}
#endif
inline void MsgExecCommand::set_command(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  command_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:PB.MsgExecCommand.command)
}
inline void MsgExecCommand::set_command(const char* value, size_t size) {
  
  command_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:PB.MsgExecCommand.command)
}
inline ::std::string* MsgExecCommand::mutable_command() {
  
  // @@protoc_insertion_point(field_mutable:PB.MsgExecCommand.command)
  return command_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MsgExecCommand::release_command() {
  // @@protoc_insertion_point(field_release:PB.MsgExecCommand.command)
  
  return command_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MsgExecCommand::set_allocated_command(::std::string* command) {
  if (command != NULL) {
    
  } else {
    
  }
  command_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), command);
  // @@protoc_insertion_point(field_set_allocated:PB.MsgExecCommand.command)
}

// string result = 3;
inline void MsgExecCommand::clear_result() {
  result_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MsgExecCommand::result() const {
  // @@protoc_insertion_point(field_get:PB.MsgExecCommand.result)
  return result_.GetNoArena();
}
inline void MsgExecCommand::set_result(const ::std::string& value) {
  
  result_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:PB.MsgExecCommand.result)
}
#if LANG_CXX11
inline void MsgExecCommand::set_result(::std::string&& value) {
  
  result_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:PB.MsgExecCommand.result)
}
#endif
inline void MsgExecCommand::set_result(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  result_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:PB.MsgExecCommand.result)
}
inline void MsgExecCommand::set_result(const char* value, size_t size) {
  
  result_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:PB.MsgExecCommand.result)
}
inline ::std::string* MsgExecCommand::mutable_result() {
  
  // @@protoc_insertion_point(field_mutable:PB.MsgExecCommand.result)
  return result_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MsgExecCommand::release_result() {
  // @@protoc_insertion_point(field_release:PB.MsgExecCommand.result)
  
  return result_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MsgExecCommand::set_allocated_result(::std::string* result) {
  if (result != NULL) {
    
  } else {
    
  }
  result_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), result);
  // @@protoc_insertion_point(field_set_allocated:PB.MsgExecCommand.result)
}

// int32 runms = 4;
inline void MsgExecCommand::clear_runms() {
  runms_ = 0;
}
inline ::google::protobuf::int32 MsgExecCommand::runms() const {
  // @@protoc_insertion_point(field_get:PB.MsgExecCommand.runms)
  return runms_;
}
inline void MsgExecCommand::set_runms(::google::protobuf::int32 value) {
  
  runms_ = value;
  // @@protoc_insertion_point(field_set:PB.MsgExecCommand.runms)
}

// string from = 5;
inline void MsgExecCommand::clear_from() {
  from_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MsgExecCommand::from() const {
  // @@protoc_insertion_point(field_get:PB.MsgExecCommand.from)
  return from_.GetNoArena();
}
inline void MsgExecCommand::set_from(const ::std::string& value) {
  
  from_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:PB.MsgExecCommand.from)
}
#if LANG_CXX11
inline void MsgExecCommand::set_from(::std::string&& value) {
  
  from_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:PB.MsgExecCommand.from)
}
#endif
inline void MsgExecCommand::set_from(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  from_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:PB.MsgExecCommand.from)
}
inline void MsgExecCommand::set_from(const char* value, size_t size) {
  
  from_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:PB.MsgExecCommand.from)
}
inline ::std::string* MsgExecCommand::mutable_from() {
  
  // @@protoc_insertion_point(field_mutable:PB.MsgExecCommand.from)
  return from_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MsgExecCommand::release_from() {
  // @@protoc_insertion_point(field_release:PB.MsgExecCommand.from)
  
  return from_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MsgExecCommand::set_allocated_from(::std::string* from) {
  if (from != NULL) {
    
  } else {
    
  }
  from_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from);
  // @@protoc_insertion_point(field_set_allocated:PB.MsgExecCommand.from)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace PB

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_msg_5fclient_2eproto__INCLUDED