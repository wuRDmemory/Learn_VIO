// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: frame.proto

#ifndef PROTOBUF_frame_2eproto__INCLUDED
#define PROTOBUF_frame_2eproto__INCLUDED

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
#include "math.pb.h"
// @@protoc_insertion_point(includes)

namespace protobuf_frame_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsEstimatorImpl();
void InitDefaultsEstimator();
inline void InitDefaults() {
  InitDefaultsEstimator();
}
}  // namespace protobuf_frame_2eproto
namespace PbFrame {
class Estimator;
class EstimatorDefaultTypeInternal;
extern EstimatorDefaultTypeInternal _Estimator_default_instance_;
}  // namespace PbFrame
namespace PbFrame {

// ===================================================================

class Estimator : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:PbFrame.Estimator) */ {
 public:
  Estimator();
  virtual ~Estimator();

  Estimator(const Estimator& from);

  inline Estimator& operator=(const Estimator& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Estimator(Estimator&& from) noexcept
    : Estimator() {
    *this = ::std::move(from);
  }

  inline Estimator& operator=(Estimator&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Estimator& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Estimator* internal_default_instance() {
    return reinterpret_cast<const Estimator*>(
               &_Estimator_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Estimator* other);
  friend void swap(Estimator& a, Estimator& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Estimator* New() const PROTOBUF_FINAL { return New(NULL); }

  Estimator* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Estimator& from);
  void MergeFrom(const Estimator& from);
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
  void InternalSwap(Estimator* other);
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

  // repeated .PbMath.Quaternion RS = 1;
  int rs_size() const;
  void clear_rs();
  static const int kRSFieldNumber = 1;
  const ::PbMath::Quaternion& rs(int index) const;
  ::PbMath::Quaternion* mutable_rs(int index);
  ::PbMath::Quaternion* add_rs();
  ::google::protobuf::RepeatedPtrField< ::PbMath::Quaternion >*
      mutable_rs();
  const ::google::protobuf::RepeatedPtrField< ::PbMath::Quaternion >&
      rs() const;

  // repeated .PbMath.Quaternion PS = 2;
  int ps_size() const;
  void clear_ps();
  static const int kPSFieldNumber = 2;
  const ::PbMath::Quaternion& ps(int index) const;
  ::PbMath::Quaternion* mutable_ps(int index);
  ::PbMath::Quaternion* add_ps();
  ::google::protobuf::RepeatedPtrField< ::PbMath::Quaternion >*
      mutable_ps();
  const ::google::protobuf::RepeatedPtrField< ::PbMath::Quaternion >&
      ps() const;

  // repeated .PbMath.Quaternion VS = 3;
  int vs_size() const;
  void clear_vs();
  static const int kVSFieldNumber = 3;
  const ::PbMath::Quaternion& vs(int index) const;
  ::PbMath::Quaternion* mutable_vs(int index);
  ::PbMath::Quaternion* add_vs();
  ::google::protobuf::RepeatedPtrField< ::PbMath::Quaternion >*
      mutable_vs();
  const ::google::protobuf::RepeatedPtrField< ::PbMath::Quaternion >&
      vs() const;

  // @@protoc_insertion_point(class_scope:PbFrame.Estimator)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::PbMath::Quaternion > rs_;
  ::google::protobuf::RepeatedPtrField< ::PbMath::Quaternion > ps_;
  ::google::protobuf::RepeatedPtrField< ::PbMath::Quaternion > vs_;
  mutable int _cached_size_;
  friend struct ::protobuf_frame_2eproto::TableStruct;
  friend void ::protobuf_frame_2eproto::InitDefaultsEstimatorImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Estimator

// repeated .PbMath.Quaternion RS = 1;
inline int Estimator::rs_size() const {
  return rs_.size();
}
inline const ::PbMath::Quaternion& Estimator::rs(int index) const {
  // @@protoc_insertion_point(field_get:PbFrame.Estimator.RS)
  return rs_.Get(index);
}
inline ::PbMath::Quaternion* Estimator::mutable_rs(int index) {
  // @@protoc_insertion_point(field_mutable:PbFrame.Estimator.RS)
  return rs_.Mutable(index);
}
inline ::PbMath::Quaternion* Estimator::add_rs() {
  // @@protoc_insertion_point(field_add:PbFrame.Estimator.RS)
  return rs_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::PbMath::Quaternion >*
Estimator::mutable_rs() {
  // @@protoc_insertion_point(field_mutable_list:PbFrame.Estimator.RS)
  return &rs_;
}
inline const ::google::protobuf::RepeatedPtrField< ::PbMath::Quaternion >&
Estimator::rs() const {
  // @@protoc_insertion_point(field_list:PbFrame.Estimator.RS)
  return rs_;
}

// repeated .PbMath.Quaternion PS = 2;
inline int Estimator::ps_size() const {
  return ps_.size();
}
inline const ::PbMath::Quaternion& Estimator::ps(int index) const {
  // @@protoc_insertion_point(field_get:PbFrame.Estimator.PS)
  return ps_.Get(index);
}
inline ::PbMath::Quaternion* Estimator::mutable_ps(int index) {
  // @@protoc_insertion_point(field_mutable:PbFrame.Estimator.PS)
  return ps_.Mutable(index);
}
inline ::PbMath::Quaternion* Estimator::add_ps() {
  // @@protoc_insertion_point(field_add:PbFrame.Estimator.PS)
  return ps_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::PbMath::Quaternion >*
Estimator::mutable_ps() {
  // @@protoc_insertion_point(field_mutable_list:PbFrame.Estimator.PS)
  return &ps_;
}
inline const ::google::protobuf::RepeatedPtrField< ::PbMath::Quaternion >&
Estimator::ps() const {
  // @@protoc_insertion_point(field_list:PbFrame.Estimator.PS)
  return ps_;
}

// repeated .PbMath.Quaternion VS = 3;
inline int Estimator::vs_size() const {
  return vs_.size();
}
inline const ::PbMath::Quaternion& Estimator::vs(int index) const {
  // @@protoc_insertion_point(field_get:PbFrame.Estimator.VS)
  return vs_.Get(index);
}
inline ::PbMath::Quaternion* Estimator::mutable_vs(int index) {
  // @@protoc_insertion_point(field_mutable:PbFrame.Estimator.VS)
  return vs_.Mutable(index);
}
inline ::PbMath::Quaternion* Estimator::add_vs() {
  // @@protoc_insertion_point(field_add:PbFrame.Estimator.VS)
  return vs_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::PbMath::Quaternion >*
Estimator::mutable_vs() {
  // @@protoc_insertion_point(field_mutable_list:PbFrame.Estimator.VS)
  return &vs_;
}
inline const ::google::protobuf::RepeatedPtrField< ::PbMath::Quaternion >&
Estimator::vs() const {
  // @@protoc_insertion_point(field_list:PbFrame.Estimator.VS)
  return vs_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace PbFrame

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_frame_2eproto__INCLUDED