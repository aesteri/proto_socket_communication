// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: christine.proto
// Protobuf C++ Version: 4.25.4

#ifndef GOOGLE_PROTOBUF_INCLUDED_christine_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_christine_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION < 4025000
#error "This file was generated by a newer version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please update"
#error "your headers."
#endif  // PROTOBUF_VERSION

#if 4025004 < PROTOBUF_MIN_PROTOC_VERSION
#error "This file was generated by an older version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please"
#error "regenerate this file with a newer version of protoc."
#endif  // PROTOBUF_MIN_PROTOC_VERSION
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_christine_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_christine_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_christine_2eproto;
namespace christine {
class yap_of_christine;
struct yap_of_christineDefaultTypeInternal;
extern yap_of_christineDefaultTypeInternal _yap_of_christine_default_instance_;
}  // namespace christine
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace christine {

// ===================================================================


// -------------------------------------------------------------------

class yap_of_christine final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:christine.yap_of_christine) */ {
 public:
  inline yap_of_christine() : yap_of_christine(nullptr) {}
  ~yap_of_christine() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR yap_of_christine(::google::protobuf::internal::ConstantInitialized);

  inline yap_of_christine(const yap_of_christine& from)
      : yap_of_christine(nullptr, from) {}
  yap_of_christine(yap_of_christine&& from) noexcept
    : yap_of_christine() {
    *this = ::std::move(from);
  }

  inline yap_of_christine& operator=(const yap_of_christine& from) {
    CopyFrom(from);
    return *this;
  }
  inline yap_of_christine& operator=(yap_of_christine&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const yap_of_christine& default_instance() {
    return *internal_default_instance();
  }
  static inline const yap_of_christine* internal_default_instance() {
    return reinterpret_cast<const yap_of_christine*>(
               &_yap_of_christine_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(yap_of_christine& a, yap_of_christine& b) {
    a.Swap(&b);
  }
  inline void Swap(yap_of_christine* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr &&
        GetArena() == other->GetArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(yap_of_christine* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  yap_of_christine* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<yap_of_christine>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const yap_of_christine& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const yap_of_christine& from) {
    yap_of_christine::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  ::google::protobuf::internal::CachedSize* AccessCachedSize() const final;
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(yap_of_christine* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "christine.yap_of_christine";
  }
  protected:
  explicit yap_of_christine(::google::protobuf::Arena* arena);
  yap_of_christine(::google::protobuf::Arena* arena, const yap_of_christine& from);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSenderNameFieldNumber = 1,
    kYapFieldNumber = 2,
  };
  // required string sender_name = 1;
  bool has_sender_name() const;
  void clear_sender_name() ;
  const std::string& sender_name() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_sender_name(Arg_&& arg, Args_... args);
  std::string* mutable_sender_name();
  PROTOBUF_NODISCARD std::string* release_sender_name();
  void set_allocated_sender_name(std::string* value);

  private:
  const std::string& _internal_sender_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_sender_name(
      const std::string& value);
  std::string* _internal_mutable_sender_name();

  public:
  // optional string yap = 2;
  bool has_yap() const;
  void clear_yap() ;
  const std::string& yap() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_yap(Arg_&& arg, Args_... args);
  std::string* mutable_yap();
  PROTOBUF_NODISCARD std::string* release_yap();
  void set_allocated_yap(std::string* value);

  private:
  const std::string& _internal_yap() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_yap(
      const std::string& value);
  std::string* _internal_mutable_yap();

  public:
  // @@protoc_insertion_point(class_scope:christine.yap_of_christine)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      1, 2, 0,
      49, 2>
      _table_;
  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {

        inline explicit constexpr Impl_(
            ::google::protobuf::internal::ConstantInitialized) noexcept;
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena);
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena, const Impl_& from);
    ::google::protobuf::internal::HasBits<1> _has_bits_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    ::google::protobuf::internal::ArenaStringPtr sender_name_;
    ::google::protobuf::internal::ArenaStringPtr yap_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_christine_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// yap_of_christine

// required string sender_name = 1;
inline bool yap_of_christine::has_sender_name() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void yap_of_christine::clear_sender_name() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.sender_name_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& yap_of_christine::sender_name() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:christine.yap_of_christine.sender_name)
  return _internal_sender_name();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void yap_of_christine::set_sender_name(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.sender_name_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:christine.yap_of_christine.sender_name)
}
inline std::string* yap_of_christine::mutable_sender_name() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_sender_name();
  // @@protoc_insertion_point(field_mutable:christine.yap_of_christine.sender_name)
  return _s;
}
inline const std::string& yap_of_christine::_internal_sender_name() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.sender_name_.Get();
}
inline void yap_of_christine::_internal_set_sender_name(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.sender_name_.Set(value, GetArena());
}
inline std::string* yap_of_christine::_internal_mutable_sender_name() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.sender_name_.Mutable( GetArena());
}
inline std::string* yap_of_christine::release_sender_name() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:christine.yap_of_christine.sender_name)
  if ((_impl_._has_bits_[0] & 0x00000001u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* released = _impl_.sender_name_.Release();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.sender_name_.Set("", GetArena());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return released;
}
inline void yap_of_christine::set_allocated_sender_name(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.sender_name_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.sender_name_.IsDefault()) {
          _impl_.sender_name_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:christine.yap_of_christine.sender_name)
}

// optional string yap = 2;
inline bool yap_of_christine::has_yap() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void yap_of_christine::clear_yap() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.yap_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline const std::string& yap_of_christine::yap() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:christine.yap_of_christine.yap)
  return _internal_yap();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void yap_of_christine::set_yap(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.yap_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:christine.yap_of_christine.yap)
}
inline std::string* yap_of_christine::mutable_yap() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_yap();
  // @@protoc_insertion_point(field_mutable:christine.yap_of_christine.yap)
  return _s;
}
inline const std::string& yap_of_christine::_internal_yap() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.yap_.Get();
}
inline void yap_of_christine::_internal_set_yap(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.yap_.Set(value, GetArena());
}
inline std::string* yap_of_christine::_internal_mutable_yap() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000002u;
  return _impl_.yap_.Mutable( GetArena());
}
inline std::string* yap_of_christine::release_yap() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:christine.yap_of_christine.yap)
  if ((_impl_._has_bits_[0] & 0x00000002u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000002u;
  auto* released = _impl_.yap_.Release();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.yap_.Set("", GetArena());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return released;
}
inline void yap_of_christine::set_allocated_yap(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  _impl_.yap_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.yap_.IsDefault()) {
          _impl_.yap_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:christine.yap_of_christine.yap)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace christine


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_christine_2eproto_2epb_2eh
