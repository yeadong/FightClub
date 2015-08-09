// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Element.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace PWRD {

namespace {

const ::google::protobuf::Descriptor* Entity_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Entity_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* Entity_DATA_TYPE_descriptor_ = NULL;
const ::google::protobuf::Descriptor* Element_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Element_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* Element_ELEMENT_TYPE_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_Element_2eproto() {
  protobuf_AddDesc_Element_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Element.proto");
  GOOGLE_CHECK(file != NULL);
  Entity_descriptor_ = file->message_type(0);
  static const int Entity_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Entity, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Entity, key_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Entity, total_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Entity, use_),
  };
  Entity_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Entity_descriptor_,
      Entity::default_instance_,
      Entity_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Entity, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Entity, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Entity));
  Entity_DATA_TYPE_descriptor_ = Entity_descriptor_->enum_type(0);
  Element_descriptor_ = file->message_type(1);
  static const int Element_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Element, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Element, entity_),
  };
  Element_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Element_descriptor_,
      Element::default_instance_,
      Element_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Element, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Element, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Element));
  Element_ELEMENT_TYPE_descriptor_ = Element_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Element_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Entity_descriptor_, &Entity::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Element_descriptor_, &Element::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Element_2eproto() {
  delete Entity::default_instance_;
  delete Entity_reflection_;
  delete Element::default_instance_;
  delete Element_reflection_;
}

void protobuf_AddDesc_Element_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\rElement.proto\022\004PWRD\"w\n\006Entity\022$\n\004type\030"
    "\001 \002(\0162\026.PWRD.Entity.DATA_TYPE\022\013\n\003key\030\002 \002"
    "(\t\022\r\n\005total\030\003 \001(\005\022\013\n\003use\030\004 \001(\005\"\036\n\tDATA_T"
    "YPE\022\010\n\004BOOL\020\000\022\007\n\003INT\020\001\"\301\001\n\007Element\022(\n\004ty"
    "pe\030\001 \002(\0162\032.PWRD.Element.ELEMENT_TYPE\022\034\n\006"
    "entity\030\002 \003(\0132\014.PWRD.Entity\"n\n\014ELEMENT_TY"
    "PE\022\r\n\tITEM_TYPE\020\000\022\016\n\nEQUIP_TYPE\020\001\022\r\n\tBUF"
    "F_TYPE\020\002\022\020\n\014FRIENDS_TYPE\020\003\022\017\n\013PKLIST_TYP"
    "E\020\004\022\r\n\tNULL_TYPE\020d", 338);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Element.proto", &protobuf_RegisterTypes);
  Entity::default_instance_ = new Entity();
  Element::default_instance_ = new Element();
  Entity::default_instance_->InitAsDefaultInstance();
  Element::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Element_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Element_2eproto {
  StaticDescriptorInitializer_Element_2eproto() {
    protobuf_AddDesc_Element_2eproto();
  }
} static_descriptor_initializer_Element_2eproto_;


// ===================================================================

const ::google::protobuf::EnumDescriptor* Entity_DATA_TYPE_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Entity_DATA_TYPE_descriptor_;
}
bool Entity_DATA_TYPE_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const Entity_DATA_TYPE Entity::BOOL;
const Entity_DATA_TYPE Entity::INT;
const Entity_DATA_TYPE Entity::DATA_TYPE_MIN;
const Entity_DATA_TYPE Entity::DATA_TYPE_MAX;
const int Entity::DATA_TYPE_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int Entity::kTypeFieldNumber;
const int Entity::kKeyFieldNumber;
const int Entity::kTotalFieldNumber;
const int Entity::kUseFieldNumber;
#endif  // !_MSC_VER

Entity::Entity()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Entity::InitAsDefaultInstance() {
}

Entity::Entity(const Entity& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Entity::SharedCtor() {
  _cached_size_ = 0;
  type_ = 0;
  key_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  total_ = 0;
  use_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Entity::~Entity() {
  SharedDtor();
}

void Entity::SharedDtor() {
  if (key_ != &::google::protobuf::internal::kEmptyString) {
    delete key_;
  }
  if (this != default_instance_) {
  }
}

void Entity::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Entity::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Entity_descriptor_;
}

const Entity& Entity::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Element_2eproto();  return *default_instance_;
}

Entity* Entity::default_instance_ = NULL;

Entity* Entity::New() const {
  return new Entity;
}

void Entity::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    type_ = 0;
    if (has_key()) {
      if (key_ != &::google::protobuf::internal::kEmptyString) {
        key_->clear();
      }
    }
    total_ = 0;
    use_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Entity::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .PWRD.Entity.DATA_TYPE type = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::PWRD::Entity_DATA_TYPE_IsValid(value)) {
            set_type(static_cast< ::PWRD::Entity_DATA_TYPE >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_key;
        break;
      }
      
      // required string key = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_key:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_key()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->key().data(), this->key().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_total;
        break;
      }
      
      // optional int32 total = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_total:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &total_)));
          set_has_total();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_use;
        break;
      }
      
      // optional int32 use = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_use:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &use_)));
          set_has_use();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Entity::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .PWRD.Entity.DATA_TYPE type = 1;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->type(), output);
  }
  
  // required string key = 2;
  if (has_key()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->key().data(), this->key().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->key(), output);
  }
  
  // optional int32 total = 3;
  if (has_total()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->total(), output);
  }
  
  // optional int32 use = 4;
  if (has_use()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->use(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Entity::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required .PWRD.Entity.DATA_TYPE type = 1;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->type(), target);
  }
  
  // required string key = 2;
  if (has_key()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->key().data(), this->key().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->key(), target);
  }
  
  // optional int32 total = 3;
  if (has_total()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->total(), target);
  }
  
  // optional int32 use = 4;
  if (has_use()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->use(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Entity::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .PWRD.Entity.DATA_TYPE type = 1;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
    }
    
    // required string key = 2;
    if (has_key()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->key());
    }
    
    // optional int32 total = 3;
    if (has_total()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->total());
    }
    
    // optional int32 use = 4;
    if (has_use()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->use());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Entity::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Entity* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Entity*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Entity::MergeFrom(const Entity& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_key()) {
      set_key(from.key());
    }
    if (from.has_total()) {
      set_total(from.total());
    }
    if (from.has_use()) {
      set_use(from.use());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Entity::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Entity::CopyFrom(const Entity& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Entity::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  
  return true;
}

void Entity::Swap(Entity* other) {
  if (other != this) {
    std::swap(type_, other->type_);
    std::swap(key_, other->key_);
    std::swap(total_, other->total_);
    std::swap(use_, other->use_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Entity::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Entity_descriptor_;
  metadata.reflection = Entity_reflection_;
  return metadata;
}


// ===================================================================

const ::google::protobuf::EnumDescriptor* Element_ELEMENT_TYPE_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Element_ELEMENT_TYPE_descriptor_;
}
bool Element_ELEMENT_TYPE_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 100:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const Element_ELEMENT_TYPE Element::ITEM_TYPE;
const Element_ELEMENT_TYPE Element::EQUIP_TYPE;
const Element_ELEMENT_TYPE Element::BUFF_TYPE;
const Element_ELEMENT_TYPE Element::FRIENDS_TYPE;
const Element_ELEMENT_TYPE Element::PKLIST_TYPE;
const Element_ELEMENT_TYPE Element::NULL_TYPE;
const Element_ELEMENT_TYPE Element::ELEMENT_TYPE_MIN;
const Element_ELEMENT_TYPE Element::ELEMENT_TYPE_MAX;
const int Element::ELEMENT_TYPE_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int Element::kTypeFieldNumber;
const int Element::kEntityFieldNumber;
#endif  // !_MSC_VER

Element::Element()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Element::InitAsDefaultInstance() {
}

Element::Element(const Element& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Element::SharedCtor() {
  _cached_size_ = 0;
  type_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Element::~Element() {
  SharedDtor();
}

void Element::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Element::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Element::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Element_descriptor_;
}

const Element& Element::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Element_2eproto();  return *default_instance_;
}

Element* Element::default_instance_ = NULL;

Element* Element::New() const {
  return new Element;
}

void Element::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    type_ = 0;
  }
  entity_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Element::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .PWRD.Element.ELEMENT_TYPE type = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::PWRD::Element_ELEMENT_TYPE_IsValid(value)) {
            set_type(static_cast< ::PWRD::Element_ELEMENT_TYPE >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_entity;
        break;
      }
      
      // repeated .PWRD.Entity entity = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_entity:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_entity()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_entity;
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Element::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .PWRD.Element.ELEMENT_TYPE type = 1;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->type(), output);
  }
  
  // repeated .PWRD.Entity entity = 2;
  for (int i = 0; i < this->entity_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->entity(i), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Element::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required .PWRD.Element.ELEMENT_TYPE type = 1;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->type(), target);
  }
  
  // repeated .PWRD.Entity entity = 2;
  for (int i = 0; i < this->entity_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->entity(i), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Element::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .PWRD.Element.ELEMENT_TYPE type = 1;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
    }
    
  }
  // repeated .PWRD.Entity entity = 2;
  total_size += 1 * this->entity_size();
  for (int i = 0; i < this->entity_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->entity(i));
  }
  
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Element::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Element* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Element*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Element::MergeFrom(const Element& from) {
  GOOGLE_CHECK_NE(&from, this);
  entity_.MergeFrom(from.entity_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_type()) {
      set_type(from.type());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Element::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Element::CopyFrom(const Element& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Element::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  
  for (int i = 0; i < entity_size(); i++) {
    if (!this->entity(i).IsInitialized()) return false;
  }
  return true;
}

void Element::Swap(Element* other) {
  if (other != this) {
    std::swap(type_, other->type_);
    entity_.Swap(&other->entity_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Element::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Element_descriptor_;
  metadata.reflection = Element_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace PWRD

// @@protoc_insertion_point(global_scope)
