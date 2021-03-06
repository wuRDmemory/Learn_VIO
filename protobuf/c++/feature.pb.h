// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: feature.proto

#ifndef PROTOBUF_feature_2eproto__INCLUDED
#define PROTOBUF_feature_2eproto__INCLUDED

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
#include <google/protobuf/map.h>  // IWYU pragma: export
#include <google/protobuf/map_entry.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/unknown_field_set.h>
#include "math.pb.h"
// @@protoc_insertion_point(includes)

namespace protobuf_feature_2eproto {
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
void InitDefaultsFeatureImpl();
void InitDefaultsFeature();
void InitDefaultsFeatureManager_AllFtrEntry_DoNotUseImpl();
void InitDefaultsFeatureManager_AllFtrEntry_DoNotUse();
void InitDefaultsFeatureManagerImpl();
void InitDefaultsFeatureManager();
inline void InitDefaults() {
  InitDefaultsFeature();
  InitDefaultsFeatureManager_AllFtrEntry_DoNotUse();
  InitDefaultsFeatureManager();
}
}  // namespace protobuf_feature_2eproto
namespace PbFeature {
class Feature;
class FeatureDefaultTypeInternal;
extern FeatureDefaultTypeInternal _Feature_default_instance_;
class FeatureManager;
class FeatureManagerDefaultTypeInternal;
extern FeatureManagerDefaultTypeInternal _FeatureManager_default_instance_;
class FeatureManager_AllFtrEntry_DoNotUse;
class FeatureManager_AllFtrEntry_DoNotUseDefaultTypeInternal;
extern FeatureManager_AllFtrEntry_DoNotUseDefaultTypeInternal _FeatureManager_AllFtrEntry_DoNotUse_default_instance_;
}  // namespace PbFeature
namespace PbFeature {

// ===================================================================

class Feature : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:PbFeature.Feature) */ {
 public:
  Feature();
  virtual ~Feature();

  Feature(const Feature& from);

  inline Feature& operator=(const Feature& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Feature(Feature&& from) noexcept
    : Feature() {
    *this = ::std::move(from);
  }

  inline Feature& operator=(Feature&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Feature& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Feature* internal_default_instance() {
    return reinterpret_cast<const Feature*>(
               &_Feature_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Feature* other);
  friend void swap(Feature& a, Feature& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Feature* New() const PROTOBUF_FINAL { return New(NULL); }

  Feature* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Feature& from);
  void MergeFrom(const Feature& from);
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
  void InternalSwap(Feature* other);
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

  // repeated .PbMath.vector3 vis_fs = 5;
  int vis_fs_size() const;
  void clear_vis_fs();
  static const int kVisFsFieldNumber = 5;
  const ::PbMath::vector3& vis_fs(int index) const;
  ::PbMath::vector3* mutable_vis_fs(int index);
  ::PbMath::vector3* add_vis_fs();
  ::google::protobuf::RepeatedPtrField< ::PbMath::vector3 >*
      mutable_vis_fs();
  const ::google::protobuf::RepeatedPtrField< ::PbMath::vector3 >&
      vis_fs() const;

  // repeated .PbMath.vector2 vis_uv = 6;
  int vis_uv_size() const;
  void clear_vis_uv();
  static const int kVisUvFieldNumber = 6;
  const ::PbMath::vector2& vis_uv(int index) const;
  ::PbMath::vector2* mutable_vis_uv(int index);
  ::PbMath::vector2* add_vis_uv();
  ::google::protobuf::RepeatedPtrField< ::PbMath::vector2 >*
      mutable_vis_uv();
  const ::google::protobuf::RepeatedPtrField< ::PbMath::vector2 >&
      vis_uv() const;

  // .PbMath.vector3 pt3d = 4;
  bool has_pt3d() const;
  void clear_pt3d();
  static const int kPt3DFieldNumber = 4;
  const ::PbMath::vector3& pt3d() const;
  ::PbMath::vector3* release_pt3d();
  ::PbMath::vector3* mutable_pt3d();
  void set_allocated_pt3d(::PbMath::vector3* pt3d);

  // int32 id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // int32 ref_frame_id = 2;
  void clear_ref_frame_id();
  static const int kRefFrameIdFieldNumber = 2;
  ::google::protobuf::int32 ref_frame_id() const;
  void set_ref_frame_id(::google::protobuf::int32 value);

  // double inv_depth = 3;
  void clear_inv_depth();
  static const int kInvDepthFieldNumber = 3;
  double inv_depth() const;
  void set_inv_depth(double value);

  // @@protoc_insertion_point(class_scope:PbFeature.Feature)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::PbMath::vector3 > vis_fs_;
  ::google::protobuf::RepeatedPtrField< ::PbMath::vector2 > vis_uv_;
  ::PbMath::vector3* pt3d_;
  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 ref_frame_id_;
  double inv_depth_;
  mutable int _cached_size_;
  friend struct ::protobuf_feature_2eproto::TableStruct;
  friend void ::protobuf_feature_2eproto::InitDefaultsFeatureImpl();
};
// -------------------------------------------------------------------

class FeatureManager_AllFtrEntry_DoNotUse : public ::google::protobuf::internal::MapEntry<FeatureManager_AllFtrEntry_DoNotUse, 
    ::google::protobuf::int32, ::PbFeature::Feature,
    ::google::protobuf::internal::WireFormatLite::TYPE_INT32,
    ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
    0 > {
public:
  typedef ::google::protobuf::internal::MapEntry<FeatureManager_AllFtrEntry_DoNotUse, 
    ::google::protobuf::int32, ::PbFeature::Feature,
    ::google::protobuf::internal::WireFormatLite::TYPE_INT32,
    ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
    0 > SuperType;
  FeatureManager_AllFtrEntry_DoNotUse();
  FeatureManager_AllFtrEntry_DoNotUse(::google::protobuf::Arena* arena);
  void MergeFrom(const FeatureManager_AllFtrEntry_DoNotUse& other);
  static const FeatureManager_AllFtrEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const FeatureManager_AllFtrEntry_DoNotUse*>(&_FeatureManager_AllFtrEntry_DoNotUse_default_instance_); }
  void MergeFrom(const ::google::protobuf::Message& other) PROTOBUF_FINAL;
  ::google::protobuf::Metadata GetMetadata() const;
};

// -------------------------------------------------------------------

class FeatureManager : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:PbFeature.FeatureManager) */ {
 public:
  FeatureManager();
  virtual ~FeatureManager();

  FeatureManager(const FeatureManager& from);

  inline FeatureManager& operator=(const FeatureManager& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  FeatureManager(FeatureManager&& from) noexcept
    : FeatureManager() {
    *this = ::std::move(from);
  }

  inline FeatureManager& operator=(FeatureManager&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const FeatureManager& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const FeatureManager* internal_default_instance() {
    return reinterpret_cast<const FeatureManager*>(
               &_FeatureManager_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(FeatureManager* other);
  friend void swap(FeatureManager& a, FeatureManager& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline FeatureManager* New() const PROTOBUF_FINAL { return New(NULL); }

  FeatureManager* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const FeatureManager& from);
  void MergeFrom(const FeatureManager& from);
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
  void InternalSwap(FeatureManager* other);
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

  // map<int32, .PbFeature.Feature> all_ftr = 1;
  int all_ftr_size() const;
  void clear_all_ftr();
  static const int kAllFtrFieldNumber = 1;
  const ::google::protobuf::Map< ::google::protobuf::int32, ::PbFeature::Feature >&
      all_ftr() const;
  ::google::protobuf::Map< ::google::protobuf::int32, ::PbFeature::Feature >*
      mutable_all_ftr();

  // @@protoc_insertion_point(class_scope:PbFeature.FeatureManager)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::MapField<
      FeatureManager_AllFtrEntry_DoNotUse,
      ::google::protobuf::int32, ::PbFeature::Feature,
      ::google::protobuf::internal::WireFormatLite::TYPE_INT32,
      ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
      0 > all_ftr_;
  mutable int _cached_size_;
  friend struct ::protobuf_feature_2eproto::TableStruct;
  friend void ::protobuf_feature_2eproto::InitDefaultsFeatureManagerImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Feature

// int32 id = 1;
inline void Feature::clear_id() {
  id_ = 0;
}
inline ::google::protobuf::int32 Feature::id() const {
  // @@protoc_insertion_point(field_get:PbFeature.Feature.id)
  return id_;
}
inline void Feature::set_id(::google::protobuf::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:PbFeature.Feature.id)
}

// int32 ref_frame_id = 2;
inline void Feature::clear_ref_frame_id() {
  ref_frame_id_ = 0;
}
inline ::google::protobuf::int32 Feature::ref_frame_id() const {
  // @@protoc_insertion_point(field_get:PbFeature.Feature.ref_frame_id)
  return ref_frame_id_;
}
inline void Feature::set_ref_frame_id(::google::protobuf::int32 value) {
  
  ref_frame_id_ = value;
  // @@protoc_insertion_point(field_set:PbFeature.Feature.ref_frame_id)
}

// double inv_depth = 3;
inline void Feature::clear_inv_depth() {
  inv_depth_ = 0;
}
inline double Feature::inv_depth() const {
  // @@protoc_insertion_point(field_get:PbFeature.Feature.inv_depth)
  return inv_depth_;
}
inline void Feature::set_inv_depth(double value) {
  
  inv_depth_ = value;
  // @@protoc_insertion_point(field_set:PbFeature.Feature.inv_depth)
}

// .PbMath.vector3 pt3d = 4;
inline bool Feature::has_pt3d() const {
  return this != internal_default_instance() && pt3d_ != NULL;
}
inline const ::PbMath::vector3& Feature::pt3d() const {
  const ::PbMath::vector3* p = pt3d_;
  // @@protoc_insertion_point(field_get:PbFeature.Feature.pt3d)
  return p != NULL ? *p : *reinterpret_cast<const ::PbMath::vector3*>(
      &::PbMath::_vector3_default_instance_);
}
inline ::PbMath::vector3* Feature::release_pt3d() {
  // @@protoc_insertion_point(field_release:PbFeature.Feature.pt3d)
  
  ::PbMath::vector3* temp = pt3d_;
  pt3d_ = NULL;
  return temp;
}
inline ::PbMath::vector3* Feature::mutable_pt3d() {
  
  if (pt3d_ == NULL) {
    pt3d_ = new ::PbMath::vector3;
  }
  // @@protoc_insertion_point(field_mutable:PbFeature.Feature.pt3d)
  return pt3d_;
}
inline void Feature::set_allocated_pt3d(::PbMath::vector3* pt3d) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(pt3d_);
  }
  if (pt3d) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      pt3d = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, pt3d, submessage_arena);
    }
    
  } else {
    
  }
  pt3d_ = pt3d;
  // @@protoc_insertion_point(field_set_allocated:PbFeature.Feature.pt3d)
}

// repeated .PbMath.vector3 vis_fs = 5;
inline int Feature::vis_fs_size() const {
  return vis_fs_.size();
}
inline const ::PbMath::vector3& Feature::vis_fs(int index) const {
  // @@protoc_insertion_point(field_get:PbFeature.Feature.vis_fs)
  return vis_fs_.Get(index);
}
inline ::PbMath::vector3* Feature::mutable_vis_fs(int index) {
  // @@protoc_insertion_point(field_mutable:PbFeature.Feature.vis_fs)
  return vis_fs_.Mutable(index);
}
inline ::PbMath::vector3* Feature::add_vis_fs() {
  // @@protoc_insertion_point(field_add:PbFeature.Feature.vis_fs)
  return vis_fs_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::PbMath::vector3 >*
Feature::mutable_vis_fs() {
  // @@protoc_insertion_point(field_mutable_list:PbFeature.Feature.vis_fs)
  return &vis_fs_;
}
inline const ::google::protobuf::RepeatedPtrField< ::PbMath::vector3 >&
Feature::vis_fs() const {
  // @@protoc_insertion_point(field_list:PbFeature.Feature.vis_fs)
  return vis_fs_;
}

// repeated .PbMath.vector2 vis_uv = 6;
inline int Feature::vis_uv_size() const {
  return vis_uv_.size();
}
inline const ::PbMath::vector2& Feature::vis_uv(int index) const {
  // @@protoc_insertion_point(field_get:PbFeature.Feature.vis_uv)
  return vis_uv_.Get(index);
}
inline ::PbMath::vector2* Feature::mutable_vis_uv(int index) {
  // @@protoc_insertion_point(field_mutable:PbFeature.Feature.vis_uv)
  return vis_uv_.Mutable(index);
}
inline ::PbMath::vector2* Feature::add_vis_uv() {
  // @@protoc_insertion_point(field_add:PbFeature.Feature.vis_uv)
  return vis_uv_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::PbMath::vector2 >*
Feature::mutable_vis_uv() {
  // @@protoc_insertion_point(field_mutable_list:PbFeature.Feature.vis_uv)
  return &vis_uv_;
}
inline const ::google::protobuf::RepeatedPtrField< ::PbMath::vector2 >&
Feature::vis_uv() const {
  // @@protoc_insertion_point(field_list:PbFeature.Feature.vis_uv)
  return vis_uv_;
}

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// FeatureManager

// map<int32, .PbFeature.Feature> all_ftr = 1;
inline int FeatureManager::all_ftr_size() const {
  return all_ftr_.size();
}
inline void FeatureManager::clear_all_ftr() {
  all_ftr_.Clear();
}
inline const ::google::protobuf::Map< ::google::protobuf::int32, ::PbFeature::Feature >&
FeatureManager::all_ftr() const {
  // @@protoc_insertion_point(field_map:PbFeature.FeatureManager.all_ftr)
  return all_ftr_.GetMap();
}
inline ::google::protobuf::Map< ::google::protobuf::int32, ::PbFeature::Feature >*
FeatureManager::mutable_all_ftr() {
  // @@protoc_insertion_point(field_mutable_map:PbFeature.FeatureManager.all_ftr)
  return all_ftr_.MutableMap();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace PbFeature

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_feature_2eproto__INCLUDED
