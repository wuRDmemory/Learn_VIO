// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: feature.proto

#include "feature.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace PbFeature {
class FeatureDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Feature>
      _instance;
} _Feature_default_instance_;
class FeatureManager_AllFtrEntry_DoNotUseDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<FeatureManager_AllFtrEntry_DoNotUse>
      _instance;
} _FeatureManager_AllFtrEntry_DoNotUse_default_instance_;
class FeatureManagerDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<FeatureManager>
      _instance;
} _FeatureManager_default_instance_;
}  // namespace PbFeature
namespace protobuf_feature_2eproto {
void InitDefaultsFeatureImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_math_2eproto::InitDefaultsvector3();
  protobuf_math_2eproto::InitDefaultsvector2();
  {
    void* ptr = &::PbFeature::_Feature_default_instance_;
    new (ptr) ::PbFeature::Feature();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::PbFeature::Feature::InitAsDefaultInstance();
}

void InitDefaultsFeature() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsFeatureImpl);
}

void InitDefaultsFeatureManager_AllFtrEntry_DoNotUseImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_feature_2eproto::InitDefaultsFeature();
  {
    void* ptr = &::PbFeature::_FeatureManager_AllFtrEntry_DoNotUse_default_instance_;
    new (ptr) ::PbFeature::FeatureManager_AllFtrEntry_DoNotUse();
  }
  ::PbFeature::FeatureManager_AllFtrEntry_DoNotUse::InitAsDefaultInstance();
}

void InitDefaultsFeatureManager_AllFtrEntry_DoNotUse() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsFeatureManager_AllFtrEntry_DoNotUseImpl);
}

void InitDefaultsFeatureManagerImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_feature_2eproto::InitDefaultsFeatureManager_AllFtrEntry_DoNotUse();
  {
    void* ptr = &::PbFeature::_FeatureManager_default_instance_;
    new (ptr) ::PbFeature::FeatureManager();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::PbFeature::FeatureManager::InitAsDefaultInstance();
}

void InitDefaultsFeatureManager() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsFeatureManagerImpl);
}

::google::protobuf::Metadata file_level_metadata[3];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::PbFeature::Feature, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::PbFeature::Feature, id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::PbFeature::Feature, ref_frame_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::PbFeature::Feature, inv_depth_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::PbFeature::Feature, pt3d_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::PbFeature::Feature, vis_fs_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::PbFeature::Feature, vis_uv_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::PbFeature::FeatureManager_AllFtrEntry_DoNotUse, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::PbFeature::FeatureManager_AllFtrEntry_DoNotUse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::PbFeature::FeatureManager_AllFtrEntry_DoNotUse, key_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::PbFeature::FeatureManager_AllFtrEntry_DoNotUse, value_),
  0,
  1,
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::PbFeature::FeatureManager, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::PbFeature::FeatureManager, all_ftr_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::PbFeature::Feature)},
  { 11, 18, sizeof(::PbFeature::FeatureManager_AllFtrEntry_DoNotUse)},
  { 20, -1, sizeof(::PbFeature::FeatureManager)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::PbFeature::_Feature_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::PbFeature::_FeatureManager_AllFtrEntry_DoNotUse_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::PbFeature::_FeatureManager_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "feature.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 3);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\rfeature.proto\022\tPbFeature\032\nmath.proto\"\237"
      "\001\n\007Feature\022\n\n\002id\030\001 \001(\005\022\024\n\014ref_frame_id\030\002"
      " \001(\005\022\021\n\tinv_depth\030\003 \001(\001\022\035\n\004pt3d\030\004 \001(\0132\017."
      "PbMath.vector3\022\037\n\006vis_fs\030\005 \003(\0132\017.PbMath."
      "vector3\022\037\n\006vis_uv\030\006 \003(\0132\017.PbMath.vector2"
      "\"\213\001\n\016FeatureManager\0226\n\007all_ftr\030\001 \003(\0132%.P"
      "bFeature.FeatureManager.AllFtrEntry\032A\n\013A"
      "llFtrEntry\022\013\n\003key\030\001 \001(\005\022!\n\005value\030\002 \001(\0132\022"
      ".PbFeature.Feature:\0028\001b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 350);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "feature.proto", &protobuf_RegisterTypes);
  ::protobuf_math_2eproto::AddDescriptors();
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_feature_2eproto
namespace PbFeature {

// ===================================================================

void Feature::InitAsDefaultInstance() {
  ::PbFeature::_Feature_default_instance_._instance.get_mutable()->pt3d_ = const_cast< ::PbMath::vector3*>(
      ::PbMath::vector3::internal_default_instance());
}
void Feature::clear_pt3d() {
  if (GetArenaNoVirtual() == NULL && pt3d_ != NULL) {
    delete pt3d_;
  }
  pt3d_ = NULL;
}
void Feature::clear_vis_fs() {
  vis_fs_.Clear();
}
void Feature::clear_vis_uv() {
  vis_uv_.Clear();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Feature::kIdFieldNumber;
const int Feature::kRefFrameIdFieldNumber;
const int Feature::kInvDepthFieldNumber;
const int Feature::kPt3DFieldNumber;
const int Feature::kVisFsFieldNumber;
const int Feature::kVisUvFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Feature::Feature()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_feature_2eproto::InitDefaultsFeature();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:PbFeature.Feature)
}
Feature::Feature(const Feature& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      vis_fs_(from.vis_fs_),
      vis_uv_(from.vis_uv_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_pt3d()) {
    pt3d_ = new ::PbMath::vector3(*from.pt3d_);
  } else {
    pt3d_ = NULL;
  }
  ::memcpy(&id_, &from.id_,
    static_cast<size_t>(reinterpret_cast<char*>(&inv_depth_) -
    reinterpret_cast<char*>(&id_)) + sizeof(inv_depth_));
  // @@protoc_insertion_point(copy_constructor:PbFeature.Feature)
}

void Feature::SharedCtor() {
  ::memset(&pt3d_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&inv_depth_) -
      reinterpret_cast<char*>(&pt3d_)) + sizeof(inv_depth_));
  _cached_size_ = 0;
}

Feature::~Feature() {
  // @@protoc_insertion_point(destructor:PbFeature.Feature)
  SharedDtor();
}

void Feature::SharedDtor() {
  if (this != internal_default_instance()) delete pt3d_;
}

void Feature::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Feature::descriptor() {
  ::protobuf_feature_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_feature_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Feature& Feature::default_instance() {
  ::protobuf_feature_2eproto::InitDefaultsFeature();
  return *internal_default_instance();
}

Feature* Feature::New(::google::protobuf::Arena* arena) const {
  Feature* n = new Feature;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Feature::Clear() {
// @@protoc_insertion_point(message_clear_start:PbFeature.Feature)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  vis_fs_.Clear();
  vis_uv_.Clear();
  if (GetArenaNoVirtual() == NULL && pt3d_ != NULL) {
    delete pt3d_;
  }
  pt3d_ = NULL;
  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&inv_depth_) -
      reinterpret_cast<char*>(&id_)) + sizeof(inv_depth_));
  _internal_metadata_.Clear();
}

bool Feature::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:PbFeature.Feature)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 ref_frame_id = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &ref_frame_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double inv_depth = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(25u /* 25 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &inv_depth_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .PbMath.vector3 pt3d = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_pt3d()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .PbMath.vector3 vis_fs = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_vis_fs()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .PbMath.vector2 vis_uv = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_vis_uv()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:PbFeature.Feature)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:PbFeature.Feature)
  return false;
#undef DO_
}

void Feature::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:PbFeature.Feature)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 id = 1;
  if (this->id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // int32 ref_frame_id = 2;
  if (this->ref_frame_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->ref_frame_id(), output);
  }

  // double inv_depth = 3;
  if (this->inv_depth() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->inv_depth(), output);
  }

  // .PbMath.vector3 pt3d = 4;
  if (this->has_pt3d()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, *this->pt3d_, output);
  }

  // repeated .PbMath.vector3 vis_fs = 5;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->vis_fs_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, this->vis_fs(static_cast<int>(i)), output);
  }

  // repeated .PbMath.vector2 vis_uv = 6;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->vis_uv_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, this->vis_uv(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:PbFeature.Feature)
}

::google::protobuf::uint8* Feature::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:PbFeature.Feature)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 id = 1;
  if (this->id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // int32 ref_frame_id = 2;
  if (this->ref_frame_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->ref_frame_id(), target);
  }

  // double inv_depth = 3;
  if (this->inv_depth() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->inv_depth(), target);
  }

  // .PbMath.vector3 pt3d = 4;
  if (this->has_pt3d()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        4, *this->pt3d_, deterministic, target);
  }

  // repeated .PbMath.vector3 vis_fs = 5;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->vis_fs_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        5, this->vis_fs(static_cast<int>(i)), deterministic, target);
  }

  // repeated .PbMath.vector2 vis_uv = 6;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->vis_uv_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        6, this->vis_uv(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:PbFeature.Feature)
  return target;
}

size_t Feature::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:PbFeature.Feature)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .PbMath.vector3 vis_fs = 5;
  {
    unsigned int count = static_cast<unsigned int>(this->vis_fs_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->vis_fs(static_cast<int>(i)));
    }
  }

  // repeated .PbMath.vector2 vis_uv = 6;
  {
    unsigned int count = static_cast<unsigned int>(this->vis_uv_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->vis_uv(static_cast<int>(i)));
    }
  }

  // .PbMath.vector3 pt3d = 4;
  if (this->has_pt3d()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *this->pt3d_);
  }

  // int32 id = 1;
  if (this->id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->id());
  }

  // int32 ref_frame_id = 2;
  if (this->ref_frame_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->ref_frame_id());
  }

  // double inv_depth = 3;
  if (this->inv_depth() != 0) {
    total_size += 1 + 8;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Feature::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:PbFeature.Feature)
  GOOGLE_DCHECK_NE(&from, this);
  const Feature* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Feature>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:PbFeature.Feature)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:PbFeature.Feature)
    MergeFrom(*source);
  }
}

void Feature::MergeFrom(const Feature& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:PbFeature.Feature)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  vis_fs_.MergeFrom(from.vis_fs_);
  vis_uv_.MergeFrom(from.vis_uv_);
  if (from.has_pt3d()) {
    mutable_pt3d()->::PbMath::vector3::MergeFrom(from.pt3d());
  }
  if (from.id() != 0) {
    set_id(from.id());
  }
  if (from.ref_frame_id() != 0) {
    set_ref_frame_id(from.ref_frame_id());
  }
  if (from.inv_depth() != 0) {
    set_inv_depth(from.inv_depth());
  }
}

void Feature::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:PbFeature.Feature)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Feature::CopyFrom(const Feature& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:PbFeature.Feature)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Feature::IsInitialized() const {
  return true;
}

void Feature::Swap(Feature* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Feature::InternalSwap(Feature* other) {
  using std::swap;
  vis_fs_.InternalSwap(&other->vis_fs_);
  vis_uv_.InternalSwap(&other->vis_uv_);
  swap(pt3d_, other->pt3d_);
  swap(id_, other->id_);
  swap(ref_frame_id_, other->ref_frame_id_);
  swap(inv_depth_, other->inv_depth_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Feature::GetMetadata() const {
  protobuf_feature_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_feature_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

FeatureManager_AllFtrEntry_DoNotUse::FeatureManager_AllFtrEntry_DoNotUse() {}
FeatureManager_AllFtrEntry_DoNotUse::FeatureManager_AllFtrEntry_DoNotUse(::google::protobuf::Arena* arena) : SuperType(arena) {}
void FeatureManager_AllFtrEntry_DoNotUse::MergeFrom(const FeatureManager_AllFtrEntry_DoNotUse& other) {
  MergeFromInternal(other);
}
::google::protobuf::Metadata FeatureManager_AllFtrEntry_DoNotUse::GetMetadata() const {
  ::protobuf_feature_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_feature_2eproto::file_level_metadata[1];
}
void FeatureManager_AllFtrEntry_DoNotUse::MergeFrom(
    const ::google::protobuf::Message& other) {
  ::google::protobuf::Message::MergeFrom(other);
}


// ===================================================================

void FeatureManager::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int FeatureManager::kAllFtrFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

FeatureManager::FeatureManager()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_feature_2eproto::InitDefaultsFeatureManager();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:PbFeature.FeatureManager)
}
FeatureManager::FeatureManager(const FeatureManager& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  all_ftr_.MergeFrom(from.all_ftr_);
  // @@protoc_insertion_point(copy_constructor:PbFeature.FeatureManager)
}

void FeatureManager::SharedCtor() {
  _cached_size_ = 0;
}

FeatureManager::~FeatureManager() {
  // @@protoc_insertion_point(destructor:PbFeature.FeatureManager)
  SharedDtor();
}

void FeatureManager::SharedDtor() {
}

void FeatureManager::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* FeatureManager::descriptor() {
  ::protobuf_feature_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_feature_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const FeatureManager& FeatureManager::default_instance() {
  ::protobuf_feature_2eproto::InitDefaultsFeatureManager();
  return *internal_default_instance();
}

FeatureManager* FeatureManager::New(::google::protobuf::Arena* arena) const {
  FeatureManager* n = new FeatureManager;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void FeatureManager::Clear() {
// @@protoc_insertion_point(message_clear_start:PbFeature.FeatureManager)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  all_ftr_.Clear();
  _internal_metadata_.Clear();
}

bool FeatureManager::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:PbFeature.FeatureManager)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // map<int32, .PbFeature.Feature> all_ftr = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          FeatureManager_AllFtrEntry_DoNotUse::Parser< ::google::protobuf::internal::MapField<
              FeatureManager_AllFtrEntry_DoNotUse,
              ::google::protobuf::int32, ::PbFeature::Feature,
              ::google::protobuf::internal::WireFormatLite::TYPE_INT32,
              ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
              0 >,
            ::google::protobuf::Map< ::google::protobuf::int32, ::PbFeature::Feature > > parser(&all_ftr_);
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, &parser));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:PbFeature.FeatureManager)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:PbFeature.FeatureManager)
  return false;
#undef DO_
}

void FeatureManager::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:PbFeature.FeatureManager)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // map<int32, .PbFeature.Feature> all_ftr = 1;
  if (!this->all_ftr().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::int32, ::PbFeature::Feature >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::int32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (output->IsSerializationDeterministic() &&
        this->all_ftr().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->all_ftr().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::int32, ::PbFeature::Feature >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::int32, ::PbFeature::Feature >::const_iterator
          it = this->all_ftr().begin();
          it != this->all_ftr().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<FeatureManager_AllFtrEntry_DoNotUse> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(all_ftr_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            1, *entry, output);
      }
    } else {
      ::google::protobuf::scoped_ptr<FeatureManager_AllFtrEntry_DoNotUse> entry;
      for (::google::protobuf::Map< ::google::protobuf::int32, ::PbFeature::Feature >::const_iterator
          it = this->all_ftr().begin();
          it != this->all_ftr().end(); ++it) {
        entry.reset(all_ftr_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            1, *entry, output);
      }
    }
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:PbFeature.FeatureManager)
}

::google::protobuf::uint8* FeatureManager::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:PbFeature.FeatureManager)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // map<int32, .PbFeature.Feature> all_ftr = 1;
  if (!this->all_ftr().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::int32, ::PbFeature::Feature >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::int32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (deterministic &&
        this->all_ftr().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->all_ftr().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::int32, ::PbFeature::Feature >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::int32, ::PbFeature::Feature >::const_iterator
          it = this->all_ftr().begin();
          it != this->all_ftr().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<FeatureManager_AllFtrEntry_DoNotUse> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(all_ftr_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       1, *entry, deterministic, target);
;
      }
    } else {
      ::google::protobuf::scoped_ptr<FeatureManager_AllFtrEntry_DoNotUse> entry;
      for (::google::protobuf::Map< ::google::protobuf::int32, ::PbFeature::Feature >::const_iterator
          it = this->all_ftr().begin();
          it != this->all_ftr().end(); ++it) {
        entry.reset(all_ftr_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       1, *entry, deterministic, target);
;
      }
    }
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:PbFeature.FeatureManager)
  return target;
}

size_t FeatureManager::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:PbFeature.FeatureManager)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // map<int32, .PbFeature.Feature> all_ftr = 1;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->all_ftr_size());
  {
    ::google::protobuf::scoped_ptr<FeatureManager_AllFtrEntry_DoNotUse> entry;
    for (::google::protobuf::Map< ::google::protobuf::int32, ::PbFeature::Feature >::const_iterator
        it = this->all_ftr().begin();
        it != this->all_ftr().end(); ++it) {
      entry.reset(all_ftr_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void FeatureManager::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:PbFeature.FeatureManager)
  GOOGLE_DCHECK_NE(&from, this);
  const FeatureManager* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const FeatureManager>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:PbFeature.FeatureManager)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:PbFeature.FeatureManager)
    MergeFrom(*source);
  }
}

void FeatureManager::MergeFrom(const FeatureManager& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:PbFeature.FeatureManager)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  all_ftr_.MergeFrom(from.all_ftr_);
}

void FeatureManager::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:PbFeature.FeatureManager)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FeatureManager::CopyFrom(const FeatureManager& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:PbFeature.FeatureManager)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FeatureManager::IsInitialized() const {
  return true;
}

void FeatureManager::Swap(FeatureManager* other) {
  if (other == this) return;
  InternalSwap(other);
}
void FeatureManager::InternalSwap(FeatureManager* other) {
  using std::swap;
  all_ftr_.Swap(&other->all_ftr_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata FeatureManager::GetMetadata() const {
  protobuf_feature_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_feature_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace PbFeature

// @@protoc_insertion_point(global_scope)
