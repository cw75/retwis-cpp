// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: message.proto

#ifndef PROTOBUF_message_2eproto__INCLUDED
#define PROTOBUF_message_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace communication {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_message_2eproto();
void protobuf_AssignDesc_message_2eproto();
void protobuf_ShutdownFile_message_2eproto();

class Request;
class Response;
class Response_Tweet;

// ===================================================================

class Request : public ::google::protobuf::Message {
 public:
  Request();
  virtual ~Request();

  Request(const Request& from);

  inline Request& operator=(const Request& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Request& default_instance();

  void Swap(Request* other);

  // implements Message ----------------------------------------------

  inline Request* New() const { return New(NULL); }

  Request* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Request& from);
  void MergeFrom(const Request& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Request* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string type = 1;
  bool has_type() const;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  const ::std::string& type() const;
  void set_type(const ::std::string& value);
  void set_type(const char* value);
  void set_type(const char* value, size_t size);
  ::std::string* mutable_type();
  ::std::string* release_type();
  void set_allocated_type(::std::string* type);

  // optional string username = 2;
  bool has_username() const;
  void clear_username();
  static const int kUsernameFieldNumber = 2;
  const ::std::string& username() const;
  void set_username(const ::std::string& value);
  void set_username(const char* value);
  void set_username(const char* value, size_t size);
  ::std::string* mutable_username();
  ::std::string* release_username();
  void set_allocated_username(::std::string* username);

  // optional string password = 3;
  bool has_password() const;
  void clear_password();
  static const int kPasswordFieldNumber = 3;
  const ::std::string& password() const;
  void set_password(const ::std::string& value);
  void set_password(const char* value);
  void set_password(const char* value, size_t size);
  ::std::string* mutable_password();
  ::std::string* release_password();
  void set_allocated_password(::std::string* password);

  // optional int64 cookie = 4;
  bool has_cookie() const;
  void clear_cookie();
  static const int kCookieFieldNumber = 4;
  ::google::protobuf::int64 cookie() const;
  void set_cookie(::google::protobuf::int64 value);

  // optional string post = 5;
  bool has_post() const;
  void clear_post();
  static const int kPostFieldNumber = 5;
  const ::std::string& post() const;
  void set_post(const ::std::string& value);
  void set_post(const char* value);
  void set_post(const char* value, size_t size);
  ::std::string* mutable_post();
  ::std::string* release_post();
  void set_allocated_post(::std::string* post);

  // optional string to_follow = 6;
  bool has_to_follow() const;
  void clear_to_follow();
  static const int kToFollowFieldNumber = 6;
  const ::std::string& to_follow() const;
  void set_to_follow(const ::std::string& value);
  void set_to_follow(const char* value);
  void set_to_follow(const char* value, size_t size);
  ::std::string* mutable_to_follow();
  ::std::string* release_to_follow();
  void set_allocated_to_follow(::std::string* to_follow);

  // @@protoc_insertion_point(class_scope:communication.Request)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_username();
  inline void clear_has_username();
  inline void set_has_password();
  inline void clear_has_password();
  inline void set_has_cookie();
  inline void clear_has_cookie();
  inline void set_has_post();
  inline void clear_has_post();
  inline void set_has_to_follow();
  inline void clear_has_to_follow();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr type_;
  ::google::protobuf::internal::ArenaStringPtr username_;
  ::google::protobuf::internal::ArenaStringPtr password_;
  ::google::protobuf::int64 cookie_;
  ::google::protobuf::internal::ArenaStringPtr post_;
  ::google::protobuf::internal::ArenaStringPtr to_follow_;
  friend void  protobuf_AddDesc_message_2eproto();
  friend void protobuf_AssignDesc_message_2eproto();
  friend void protobuf_ShutdownFile_message_2eproto();

  void InitAsDefaultInstance();
  static Request* default_instance_;
};
// -------------------------------------------------------------------

class Response_Tweet : public ::google::protobuf::Message {
 public:
  Response_Tweet();
  virtual ~Response_Tweet();

  Response_Tweet(const Response_Tweet& from);

  inline Response_Tweet& operator=(const Response_Tweet& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Response_Tweet& default_instance();

  void Swap(Response_Tweet* other);

  // implements Message ----------------------------------------------

  inline Response_Tweet* New() const { return New(NULL); }

  Response_Tweet* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Response_Tweet& from);
  void MergeFrom(const Response_Tweet& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Response_Tweet* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int64 time = 1;
  bool has_time() const;
  void clear_time();
  static const int kTimeFieldNumber = 1;
  ::google::protobuf::int64 time() const;
  void set_time(::google::protobuf::int64 value);

  // required string content = 2;
  bool has_content() const;
  void clear_content();
  static const int kContentFieldNumber = 2;
  const ::std::string& content() const;
  void set_content(const ::std::string& value);
  void set_content(const char* value);
  void set_content(const char* value, size_t size);
  ::std::string* mutable_content();
  ::std::string* release_content();
  void set_allocated_content(::std::string* content);

  // @@protoc_insertion_point(class_scope:communication.Response.Tweet)
 private:
  inline void set_has_time();
  inline void clear_has_time();
  inline void set_has_content();
  inline void clear_has_content();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int64 time_;
  ::google::protobuf::internal::ArenaStringPtr content_;
  friend void  protobuf_AddDesc_message_2eproto();
  friend void protobuf_AssignDesc_message_2eproto();
  friend void protobuf_ShutdownFile_message_2eproto();

  void InitAsDefaultInstance();
  static Response_Tweet* default_instance_;
};
// -------------------------------------------------------------------

class Response : public ::google::protobuf::Message {
 public:
  Response();
  virtual ~Response();

  Response(const Response& from);

  inline Response& operator=(const Response& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Response& default_instance();

  void Swap(Response* other);

  // implements Message ----------------------------------------------

  inline Response* New() const { return New(NULL); }

  Response* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Response& from);
  void MergeFrom(const Response& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Response* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef Response_Tweet Tweet;

  // accessors -------------------------------------------------------

  // required string status = 1;
  bool has_status() const;
  void clear_status();
  static const int kStatusFieldNumber = 1;
  const ::std::string& status() const;
  void set_status(const ::std::string& value);
  void set_status(const char* value);
  void set_status(const char* value, size_t size);
  ::std::string* mutable_status();
  ::std::string* release_status();
  void set_allocated_status(::std::string* status);

  // optional int64 cookie = 2;
  bool has_cookie() const;
  void clear_cookie();
  static const int kCookieFieldNumber = 2;
  ::google::protobuf::int64 cookie() const;
  void set_cookie(::google::protobuf::int64 value);

  // repeated .communication.Response.Tweet tweets = 3;
  int tweets_size() const;
  void clear_tweets();
  static const int kTweetsFieldNumber = 3;
  const ::communication::Response_Tweet& tweets(int index) const;
  ::communication::Response_Tweet* mutable_tweets(int index);
  ::communication::Response_Tweet* add_tweets();
  ::google::protobuf::RepeatedPtrField< ::communication::Response_Tweet >*
      mutable_tweets();
  const ::google::protobuf::RepeatedPtrField< ::communication::Response_Tweet >&
      tweets() const;

  // @@protoc_insertion_point(class_scope:communication.Response)
 private:
  inline void set_has_status();
  inline void clear_has_status();
  inline void set_has_cookie();
  inline void clear_has_cookie();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr status_;
  ::google::protobuf::int64 cookie_;
  ::google::protobuf::RepeatedPtrField< ::communication::Response_Tweet > tweets_;
  friend void  protobuf_AddDesc_message_2eproto();
  friend void protobuf_AssignDesc_message_2eproto();
  friend void protobuf_ShutdownFile_message_2eproto();

  void InitAsDefaultInstance();
  static Response* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Request

// required string type = 1;
inline bool Request::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Request::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Request::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Request::clear_type() {
  type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_type();
}
inline const ::std::string& Request::type() const {
  // @@protoc_insertion_point(field_get:communication.Request.type)
  return type_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Request::set_type(const ::std::string& value) {
  set_has_type();
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:communication.Request.type)
}
inline void Request::set_type(const char* value) {
  set_has_type();
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:communication.Request.type)
}
inline void Request::set_type(const char* value, size_t size) {
  set_has_type();
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:communication.Request.type)
}
inline ::std::string* Request::mutable_type() {
  set_has_type();
  // @@protoc_insertion_point(field_mutable:communication.Request.type)
  return type_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Request::release_type() {
  // @@protoc_insertion_point(field_release:communication.Request.type)
  clear_has_type();
  return type_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Request::set_allocated_type(::std::string* type) {
  if (type != NULL) {
    set_has_type();
  } else {
    clear_has_type();
  }
  type_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), type);
  // @@protoc_insertion_point(field_set_allocated:communication.Request.type)
}

// optional string username = 2;
inline bool Request::has_username() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Request::set_has_username() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Request::clear_has_username() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Request::clear_username() {
  username_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_username();
}
inline const ::std::string& Request::username() const {
  // @@protoc_insertion_point(field_get:communication.Request.username)
  return username_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Request::set_username(const ::std::string& value) {
  set_has_username();
  username_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:communication.Request.username)
}
inline void Request::set_username(const char* value) {
  set_has_username();
  username_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:communication.Request.username)
}
inline void Request::set_username(const char* value, size_t size) {
  set_has_username();
  username_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:communication.Request.username)
}
inline ::std::string* Request::mutable_username() {
  set_has_username();
  // @@protoc_insertion_point(field_mutable:communication.Request.username)
  return username_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Request::release_username() {
  // @@protoc_insertion_point(field_release:communication.Request.username)
  clear_has_username();
  return username_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Request::set_allocated_username(::std::string* username) {
  if (username != NULL) {
    set_has_username();
  } else {
    clear_has_username();
  }
  username_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), username);
  // @@protoc_insertion_point(field_set_allocated:communication.Request.username)
}

// optional string password = 3;
inline bool Request::has_password() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Request::set_has_password() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Request::clear_has_password() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Request::clear_password() {
  password_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_password();
}
inline const ::std::string& Request::password() const {
  // @@protoc_insertion_point(field_get:communication.Request.password)
  return password_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Request::set_password(const ::std::string& value) {
  set_has_password();
  password_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:communication.Request.password)
}
inline void Request::set_password(const char* value) {
  set_has_password();
  password_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:communication.Request.password)
}
inline void Request::set_password(const char* value, size_t size) {
  set_has_password();
  password_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:communication.Request.password)
}
inline ::std::string* Request::mutable_password() {
  set_has_password();
  // @@protoc_insertion_point(field_mutable:communication.Request.password)
  return password_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Request::release_password() {
  // @@protoc_insertion_point(field_release:communication.Request.password)
  clear_has_password();
  return password_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Request::set_allocated_password(::std::string* password) {
  if (password != NULL) {
    set_has_password();
  } else {
    clear_has_password();
  }
  password_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), password);
  // @@protoc_insertion_point(field_set_allocated:communication.Request.password)
}

// optional int64 cookie = 4;
inline bool Request::has_cookie() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Request::set_has_cookie() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Request::clear_has_cookie() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Request::clear_cookie() {
  cookie_ = GOOGLE_LONGLONG(0);
  clear_has_cookie();
}
inline ::google::protobuf::int64 Request::cookie() const {
  // @@protoc_insertion_point(field_get:communication.Request.cookie)
  return cookie_;
}
inline void Request::set_cookie(::google::protobuf::int64 value) {
  set_has_cookie();
  cookie_ = value;
  // @@protoc_insertion_point(field_set:communication.Request.cookie)
}

// optional string post = 5;
inline bool Request::has_post() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Request::set_has_post() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Request::clear_has_post() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Request::clear_post() {
  post_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_post();
}
inline const ::std::string& Request::post() const {
  // @@protoc_insertion_point(field_get:communication.Request.post)
  return post_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Request::set_post(const ::std::string& value) {
  set_has_post();
  post_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:communication.Request.post)
}
inline void Request::set_post(const char* value) {
  set_has_post();
  post_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:communication.Request.post)
}
inline void Request::set_post(const char* value, size_t size) {
  set_has_post();
  post_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:communication.Request.post)
}
inline ::std::string* Request::mutable_post() {
  set_has_post();
  // @@protoc_insertion_point(field_mutable:communication.Request.post)
  return post_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Request::release_post() {
  // @@protoc_insertion_point(field_release:communication.Request.post)
  clear_has_post();
  return post_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Request::set_allocated_post(::std::string* post) {
  if (post != NULL) {
    set_has_post();
  } else {
    clear_has_post();
  }
  post_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), post);
  // @@protoc_insertion_point(field_set_allocated:communication.Request.post)
}

// optional string to_follow = 6;
inline bool Request::has_to_follow() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Request::set_has_to_follow() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Request::clear_has_to_follow() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Request::clear_to_follow() {
  to_follow_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_to_follow();
}
inline const ::std::string& Request::to_follow() const {
  // @@protoc_insertion_point(field_get:communication.Request.to_follow)
  return to_follow_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Request::set_to_follow(const ::std::string& value) {
  set_has_to_follow();
  to_follow_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:communication.Request.to_follow)
}
inline void Request::set_to_follow(const char* value) {
  set_has_to_follow();
  to_follow_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:communication.Request.to_follow)
}
inline void Request::set_to_follow(const char* value, size_t size) {
  set_has_to_follow();
  to_follow_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:communication.Request.to_follow)
}
inline ::std::string* Request::mutable_to_follow() {
  set_has_to_follow();
  // @@protoc_insertion_point(field_mutable:communication.Request.to_follow)
  return to_follow_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Request::release_to_follow() {
  // @@protoc_insertion_point(field_release:communication.Request.to_follow)
  clear_has_to_follow();
  return to_follow_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Request::set_allocated_to_follow(::std::string* to_follow) {
  if (to_follow != NULL) {
    set_has_to_follow();
  } else {
    clear_has_to_follow();
  }
  to_follow_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), to_follow);
  // @@protoc_insertion_point(field_set_allocated:communication.Request.to_follow)
}

// -------------------------------------------------------------------

// Response_Tweet

// required int64 time = 1;
inline bool Response_Tweet::has_time() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Response_Tweet::set_has_time() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Response_Tweet::clear_has_time() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Response_Tweet::clear_time() {
  time_ = GOOGLE_LONGLONG(0);
  clear_has_time();
}
inline ::google::protobuf::int64 Response_Tweet::time() const {
  // @@protoc_insertion_point(field_get:communication.Response.Tweet.time)
  return time_;
}
inline void Response_Tweet::set_time(::google::protobuf::int64 value) {
  set_has_time();
  time_ = value;
  // @@protoc_insertion_point(field_set:communication.Response.Tweet.time)
}

// required string content = 2;
inline bool Response_Tweet::has_content() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Response_Tweet::set_has_content() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Response_Tweet::clear_has_content() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Response_Tweet::clear_content() {
  content_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_content();
}
inline const ::std::string& Response_Tweet::content() const {
  // @@protoc_insertion_point(field_get:communication.Response.Tweet.content)
  return content_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Response_Tweet::set_content(const ::std::string& value) {
  set_has_content();
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:communication.Response.Tweet.content)
}
inline void Response_Tweet::set_content(const char* value) {
  set_has_content();
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:communication.Response.Tweet.content)
}
inline void Response_Tweet::set_content(const char* value, size_t size) {
  set_has_content();
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:communication.Response.Tweet.content)
}
inline ::std::string* Response_Tweet::mutable_content() {
  set_has_content();
  // @@protoc_insertion_point(field_mutable:communication.Response.Tweet.content)
  return content_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Response_Tweet::release_content() {
  // @@protoc_insertion_point(field_release:communication.Response.Tweet.content)
  clear_has_content();
  return content_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Response_Tweet::set_allocated_content(::std::string* content) {
  if (content != NULL) {
    set_has_content();
  } else {
    clear_has_content();
  }
  content_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), content);
  // @@protoc_insertion_point(field_set_allocated:communication.Response.Tweet.content)
}

// -------------------------------------------------------------------

// Response

// required string status = 1;
inline bool Response::has_status() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Response::set_has_status() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Response::clear_has_status() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Response::clear_status() {
  status_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_status();
}
inline const ::std::string& Response::status() const {
  // @@protoc_insertion_point(field_get:communication.Response.status)
  return status_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Response::set_status(const ::std::string& value) {
  set_has_status();
  status_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:communication.Response.status)
}
inline void Response::set_status(const char* value) {
  set_has_status();
  status_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:communication.Response.status)
}
inline void Response::set_status(const char* value, size_t size) {
  set_has_status();
  status_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:communication.Response.status)
}
inline ::std::string* Response::mutable_status() {
  set_has_status();
  // @@protoc_insertion_point(field_mutable:communication.Response.status)
  return status_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Response::release_status() {
  // @@protoc_insertion_point(field_release:communication.Response.status)
  clear_has_status();
  return status_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Response::set_allocated_status(::std::string* status) {
  if (status != NULL) {
    set_has_status();
  } else {
    clear_has_status();
  }
  status_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), status);
  // @@protoc_insertion_point(field_set_allocated:communication.Response.status)
}

// optional int64 cookie = 2;
inline bool Response::has_cookie() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Response::set_has_cookie() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Response::clear_has_cookie() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Response::clear_cookie() {
  cookie_ = GOOGLE_LONGLONG(0);
  clear_has_cookie();
}
inline ::google::protobuf::int64 Response::cookie() const {
  // @@protoc_insertion_point(field_get:communication.Response.cookie)
  return cookie_;
}
inline void Response::set_cookie(::google::protobuf::int64 value) {
  set_has_cookie();
  cookie_ = value;
  // @@protoc_insertion_point(field_set:communication.Response.cookie)
}

// repeated .communication.Response.Tweet tweets = 3;
inline int Response::tweets_size() const {
  return tweets_.size();
}
inline void Response::clear_tweets() {
  tweets_.Clear();
}
inline const ::communication::Response_Tweet& Response::tweets(int index) const {
  // @@protoc_insertion_point(field_get:communication.Response.tweets)
  return tweets_.Get(index);
}
inline ::communication::Response_Tweet* Response::mutable_tweets(int index) {
  // @@protoc_insertion_point(field_mutable:communication.Response.tweets)
  return tweets_.Mutable(index);
}
inline ::communication::Response_Tweet* Response::add_tweets() {
  // @@protoc_insertion_point(field_add:communication.Response.tweets)
  return tweets_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::communication::Response_Tweet >*
Response::mutable_tweets() {
  // @@protoc_insertion_point(field_mutable_list:communication.Response.tweets)
  return &tweets_;
}
inline const ::google::protobuf::RepeatedPtrField< ::communication::Response_Tweet >&
Response::tweets() const {
  // @@protoc_insertion_point(field_list:communication.Response.tweets)
  return tweets_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace communication

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_message_2eproto__INCLUDED
