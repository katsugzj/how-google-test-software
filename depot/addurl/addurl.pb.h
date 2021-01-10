// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: addurl.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_addurl_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_addurl_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3014000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3014000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_addurl_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_addurl_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_addurl_2eproto;
class AddUrlReply;
class AddUrlReplyDefaultTypeInternal;
extern AddUrlReplyDefaultTypeInternal _AddUrlReply_default_instance_;
class AddUrlRequest;
class AddUrlRequestDefaultTypeInternal;
extern AddUrlRequestDefaultTypeInternal _AddUrlRequest_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::AddUrlReply* Arena::CreateMaybeMessage<::AddUrlReply>(Arena*);
template<> ::AddUrlRequest* Arena::CreateMaybeMessage<::AddUrlRequest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class AddUrlRequest PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AddUrlRequest) */ {
 public:
  inline AddUrlRequest() : AddUrlRequest(nullptr) {}
  virtual ~AddUrlRequest();

  AddUrlRequest(const AddUrlRequest& from);
  AddUrlRequest(AddUrlRequest&& from) noexcept
    : AddUrlRequest() {
    *this = ::std::move(from);
  }

  inline AddUrlRequest& operator=(const AddUrlRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline AddUrlRequest& operator=(AddUrlRequest&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const AddUrlRequest& default_instance();

  static inline const AddUrlRequest* internal_default_instance() {
    return reinterpret_cast<const AddUrlRequest*>(
               &_AddUrlRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(AddUrlRequest& a, AddUrlRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(AddUrlRequest* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(AddUrlRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline AddUrlRequest* New() const final {
    return CreateMaybeMessage<AddUrlRequest>(nullptr);
  }

  AddUrlRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<AddUrlRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const AddUrlRequest& from);
  void MergeFrom(const AddUrlRequest& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(AddUrlRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AddUrlRequest";
  }
  protected:
  explicit AddUrlRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_addurl_2eproto);
    return ::descriptor_table_addurl_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUrlFieldNumber = 1,
    kCommentFieldNumber = 2,
  };
  // required string url = 1;
  bool has_url() const;
  private:
  bool _internal_has_url() const;
  public:
  void clear_url();
  const std::string& url() const;
  void set_url(const std::string& value);
  void set_url(std::string&& value);
  void set_url(const char* value);
  void set_url(const char* value, size_t size);
  std::string* mutable_url();
  std::string* release_url();
  void set_allocated_url(std::string* url);
  private:
  const std::string& _internal_url() const;
  void _internal_set_url(const std::string& value);
  std::string* _internal_mutable_url();
  public:

  // optional string comment = 2;
  bool has_comment() const;
  private:
  bool _internal_has_comment() const;
  public:
  void clear_comment();
  const std::string& comment() const;
  void set_comment(const std::string& value);
  void set_comment(std::string&& value);
  void set_comment(const char* value);
  void set_comment(const char* value, size_t size);
  std::string* mutable_comment();
  std::string* release_comment();
  void set_allocated_comment(std::string* comment);
  private:
  const std::string& _internal_comment() const;
  void _internal_set_comment(const std::string& value);
  std::string* _internal_mutable_comment();
  public:

  // @@protoc_insertion_point(class_scope:AddUrlRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr url_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr comment_;
  friend struct ::TableStruct_addurl_2eproto;
};
// -------------------------------------------------------------------

class AddUrlReply PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AddUrlReply) */ {
 public:
  inline AddUrlReply() : AddUrlReply(nullptr) {}
  virtual ~AddUrlReply();

  AddUrlReply(const AddUrlReply& from);
  AddUrlReply(AddUrlReply&& from) noexcept
    : AddUrlReply() {
    *this = ::std::move(from);
  }

  inline AddUrlReply& operator=(const AddUrlReply& from) {
    CopyFrom(from);
    return *this;
  }
  inline AddUrlReply& operator=(AddUrlReply&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const AddUrlReply& default_instance();

  static inline const AddUrlReply* internal_default_instance() {
    return reinterpret_cast<const AddUrlReply*>(
               &_AddUrlReply_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(AddUrlReply& a, AddUrlReply& b) {
    a.Swap(&b);
  }
  inline void Swap(AddUrlReply* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(AddUrlReply* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline AddUrlReply* New() const final {
    return CreateMaybeMessage<AddUrlReply>(nullptr);
  }

  AddUrlReply* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<AddUrlReply>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const AddUrlReply& from);
  void MergeFrom(const AddUrlReply& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(AddUrlReply* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AddUrlReply";
  }
  protected:
  explicit AddUrlReply(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_addurl_2eproto);
    return ::descriptor_table_addurl_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kErrorCodeDetailsFieldNumber = 2,
    kErrorCodeFieldNumber = 1,
  };
  // optional string error_code_details = 2;
  bool has_error_code_details() const;
  private:
  bool _internal_has_error_code_details() const;
  public:
  void clear_error_code_details();
  const std::string& error_code_details() const;
  void set_error_code_details(const std::string& value);
  void set_error_code_details(std::string&& value);
  void set_error_code_details(const char* value);
  void set_error_code_details(const char* value, size_t size);
  std::string* mutable_error_code_details();
  std::string* release_error_code_details();
  void set_allocated_error_code_details(std::string* error_code_details);
  private:
  const std::string& _internal_error_code_details() const;
  void _internal_set_error_code_details(const std::string& value);
  std::string* _internal_mutable_error_code_details();
  public:

  // optional int32 error_code = 1;
  bool has_error_code() const;
  private:
  bool _internal_has_error_code() const;
  public:
  void clear_error_code();
  ::PROTOBUF_NAMESPACE_ID::int32 error_code() const;
  void set_error_code(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_error_code() const;
  void _internal_set_error_code(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:AddUrlReply)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr error_code_details_;
  ::PROTOBUF_NAMESPACE_ID::int32 error_code_;
  friend struct ::TableStruct_addurl_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AddUrlRequest

// required string url = 1;
inline bool AddUrlRequest::_internal_has_url() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool AddUrlRequest::has_url() const {
  return _internal_has_url();
}
inline void AddUrlRequest::clear_url() {
  url_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& AddUrlRequest::url() const {
  // @@protoc_insertion_point(field_get:AddUrlRequest.url)
  return _internal_url();
}
inline void AddUrlRequest::set_url(const std::string& value) {
  _internal_set_url(value);
  // @@protoc_insertion_point(field_set:AddUrlRequest.url)
}
inline std::string* AddUrlRequest::mutable_url() {
  // @@protoc_insertion_point(field_mutable:AddUrlRequest.url)
  return _internal_mutable_url();
}
inline const std::string& AddUrlRequest::_internal_url() const {
  return url_.Get();
}
inline void AddUrlRequest::_internal_set_url(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  url_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void AddUrlRequest::set_url(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  url_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:AddUrlRequest.url)
}
inline void AddUrlRequest::set_url(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  url_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:AddUrlRequest.url)
}
inline void AddUrlRequest::set_url(const char* value,
    size_t size) {
  _has_bits_[0] |= 0x00000001u;
  url_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:AddUrlRequest.url)
}
inline std::string* AddUrlRequest::_internal_mutable_url() {
  _has_bits_[0] |= 0x00000001u;
  return url_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* AddUrlRequest::release_url() {
  // @@protoc_insertion_point(field_release:AddUrlRequest.url)
  if (!_internal_has_url()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return url_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void AddUrlRequest::set_allocated_url(std::string* url) {
  if (url != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  url_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), url,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:AddUrlRequest.url)
}

// optional string comment = 2;
inline bool AddUrlRequest::_internal_has_comment() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool AddUrlRequest::has_comment() const {
  return _internal_has_comment();
}
inline void AddUrlRequest::clear_comment() {
  comment_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& AddUrlRequest::comment() const {
  // @@protoc_insertion_point(field_get:AddUrlRequest.comment)
  return _internal_comment();
}
inline void AddUrlRequest::set_comment(const std::string& value) {
  _internal_set_comment(value);
  // @@protoc_insertion_point(field_set:AddUrlRequest.comment)
}
inline std::string* AddUrlRequest::mutable_comment() {
  // @@protoc_insertion_point(field_mutable:AddUrlRequest.comment)
  return _internal_mutable_comment();
}
inline const std::string& AddUrlRequest::_internal_comment() const {
  return comment_.Get();
}
inline void AddUrlRequest::_internal_set_comment(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  comment_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void AddUrlRequest::set_comment(std::string&& value) {
  _has_bits_[0] |= 0x00000002u;
  comment_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:AddUrlRequest.comment)
}
inline void AddUrlRequest::set_comment(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000002u;
  comment_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:AddUrlRequest.comment)
}
inline void AddUrlRequest::set_comment(const char* value,
    size_t size) {
  _has_bits_[0] |= 0x00000002u;
  comment_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:AddUrlRequest.comment)
}
inline std::string* AddUrlRequest::_internal_mutable_comment() {
  _has_bits_[0] |= 0x00000002u;
  return comment_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* AddUrlRequest::release_comment() {
  // @@protoc_insertion_point(field_release:AddUrlRequest.comment)
  if (!_internal_has_comment()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  return comment_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void AddUrlRequest::set_allocated_comment(std::string* comment) {
  if (comment != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  comment_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), comment,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:AddUrlRequest.comment)
}

// -------------------------------------------------------------------

// AddUrlReply

// optional int32 error_code = 1;
inline bool AddUrlReply::_internal_has_error_code() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool AddUrlReply::has_error_code() const {
  return _internal_has_error_code();
}
inline void AddUrlReply::clear_error_code() {
  error_code_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 AddUrlReply::_internal_error_code() const {
  return error_code_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 AddUrlReply::error_code() const {
  // @@protoc_insertion_point(field_get:AddUrlReply.error_code)
  return _internal_error_code();
}
inline void AddUrlReply::_internal_set_error_code(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000002u;
  error_code_ = value;
}
inline void AddUrlReply::set_error_code(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_error_code(value);
  // @@protoc_insertion_point(field_set:AddUrlReply.error_code)
}

// optional string error_code_details = 2;
inline bool AddUrlReply::_internal_has_error_code_details() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool AddUrlReply::has_error_code_details() const {
  return _internal_has_error_code_details();
}
inline void AddUrlReply::clear_error_code_details() {
  error_code_details_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& AddUrlReply::error_code_details() const {
  // @@protoc_insertion_point(field_get:AddUrlReply.error_code_details)
  return _internal_error_code_details();
}
inline void AddUrlReply::set_error_code_details(const std::string& value) {
  _internal_set_error_code_details(value);
  // @@protoc_insertion_point(field_set:AddUrlReply.error_code_details)
}
inline std::string* AddUrlReply::mutable_error_code_details() {
  // @@protoc_insertion_point(field_mutable:AddUrlReply.error_code_details)
  return _internal_mutable_error_code_details();
}
inline const std::string& AddUrlReply::_internal_error_code_details() const {
  return error_code_details_.Get();
}
inline void AddUrlReply::_internal_set_error_code_details(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  error_code_details_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void AddUrlReply::set_error_code_details(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  error_code_details_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:AddUrlReply.error_code_details)
}
inline void AddUrlReply::set_error_code_details(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  error_code_details_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:AddUrlReply.error_code_details)
}
inline void AddUrlReply::set_error_code_details(const char* value,
    size_t size) {
  _has_bits_[0] |= 0x00000001u;
  error_code_details_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:AddUrlReply.error_code_details)
}
inline std::string* AddUrlReply::_internal_mutable_error_code_details() {
  _has_bits_[0] |= 0x00000001u;
  return error_code_details_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* AddUrlReply::release_error_code_details() {
  // @@protoc_insertion_point(field_release:AddUrlReply.error_code_details)
  if (!_internal_has_error_code_details()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return error_code_details_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void AddUrlReply::set_allocated_error_code_details(std::string* error_code_details) {
  if (error_code_details != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  error_code_details_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), error_code_details,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:AddUrlReply.error_code_details)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_addurl_2eproto