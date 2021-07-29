/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: DataStructures.proto */

#ifndef PROTOBUF_C_DataStructures_2eproto__INCLUDED
#define PROTOBUF_C_DataStructures_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003003 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "FeatureTypes.pb-c.h"

typedef struct _CoreML__Specification__StringToInt64Map CoreML__Specification__StringToInt64Map;
typedef struct _CoreML__Specification__StringToInt64Map__MapEntry CoreML__Specification__StringToInt64Map__MapEntry;
typedef struct _CoreML__Specification__Int64ToStringMap CoreML__Specification__Int64ToStringMap;
typedef struct _CoreML__Specification__Int64ToStringMap__MapEntry CoreML__Specification__Int64ToStringMap__MapEntry;
typedef struct _CoreML__Specification__StringToDoubleMap CoreML__Specification__StringToDoubleMap;
typedef struct _CoreML__Specification__StringToDoubleMap__MapEntry CoreML__Specification__StringToDoubleMap__MapEntry;
typedef struct _CoreML__Specification__Int64ToDoubleMap CoreML__Specification__Int64ToDoubleMap;
typedef struct _CoreML__Specification__Int64ToDoubleMap__MapEntry CoreML__Specification__Int64ToDoubleMap__MapEntry;
typedef struct _CoreML__Specification__StringVector CoreML__Specification__StringVector;
typedef struct _CoreML__Specification__Int64Vector CoreML__Specification__Int64Vector;
typedef struct _CoreML__Specification__FloatVector CoreML__Specification__FloatVector;
typedef struct _CoreML__Specification__DoubleVector CoreML__Specification__DoubleVector;
typedef struct _CoreML__Specification__Int64Range CoreML__Specification__Int64Range;
typedef struct _CoreML__Specification__Int64Set CoreML__Specification__Int64Set;
typedef struct _CoreML__Specification__DoubleRange CoreML__Specification__DoubleRange;


/* --- enums --- */


/* --- messages --- */

struct  _CoreML__Specification__StringToInt64Map__MapEntry
{
  ProtobufCMessage base;
  char *key;
  int64_t value;
};
#define CORE_ML__SPECIFICATION__STRING_TO_INT64_MAP__MAP_ENTRY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&core_ml__specification__string_to_int64_map__map_entry__descriptor) \
    , (char *)protobuf_c_empty_string, 0 }


/*
 **
 * A mapping from a string
 * to a 64-bit integer.
 */
struct  _CoreML__Specification__StringToInt64Map
{
  ProtobufCMessage base;
  size_t n_map;
  CoreML__Specification__StringToInt64Map__MapEntry **map;
};
#define CORE_ML__SPECIFICATION__STRING_TO_INT64_MAP__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&core_ml__specification__string_to_int64_map__descriptor) \
    , 0,NULL }


struct  _CoreML__Specification__Int64ToStringMap__MapEntry
{
  ProtobufCMessage base;
  int64_t key;
  char *value;
};
#define CORE_ML__SPECIFICATION__INT64_TO_STRING_MAP__MAP_ENTRY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&core_ml__specification__int64_to_string_map__map_entry__descriptor) \
    , 0, (char *)protobuf_c_empty_string }


/*
 **
 * A mapping from a 64-bit integer
 * to a string.
 */
struct  _CoreML__Specification__Int64ToStringMap
{
  ProtobufCMessage base;
  size_t n_map;
  CoreML__Specification__Int64ToStringMap__MapEntry **map;
};
#define CORE_ML__SPECIFICATION__INT64_TO_STRING_MAP__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&core_ml__specification__int64_to_string_map__descriptor) \
    , 0,NULL }


struct  _CoreML__Specification__StringToDoubleMap__MapEntry
{
  ProtobufCMessage base;
  char *key;
  double value;
};
#define CORE_ML__SPECIFICATION__STRING_TO_DOUBLE_MAP__MAP_ENTRY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&core_ml__specification__string_to_double_map__map_entry__descriptor) \
    , (char *)protobuf_c_empty_string, 0 }


/*
 **
 * A mapping from a string
 * to a double-precision floating point number.
 */
struct  _CoreML__Specification__StringToDoubleMap
{
  ProtobufCMessage base;
  size_t n_map;
  CoreML__Specification__StringToDoubleMap__MapEntry **map;
};
#define CORE_ML__SPECIFICATION__STRING_TO_DOUBLE_MAP__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&core_ml__specification__string_to_double_map__descriptor) \
    , 0,NULL }


struct  _CoreML__Specification__Int64ToDoubleMap__MapEntry
{
  ProtobufCMessage base;
  int64_t key;
  double value;
};
#define CORE_ML__SPECIFICATION__INT64_TO_DOUBLE_MAP__MAP_ENTRY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&core_ml__specification__int64_to_double_map__map_entry__descriptor) \
    , 0, 0 }


/*
 **
 * A mapping from a 64-bit integer
 * to a double-precision floating point number.
 */
struct  _CoreML__Specification__Int64ToDoubleMap
{
  ProtobufCMessage base;
  size_t n_map;
  CoreML__Specification__Int64ToDoubleMap__MapEntry **map;
};
#define CORE_ML__SPECIFICATION__INT64_TO_DOUBLE_MAP__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&core_ml__specification__int64_to_double_map__descriptor) \
    , 0,NULL }


/*
 **
 * A vector of strings.
 */
struct  _CoreML__Specification__StringVector
{
  ProtobufCMessage base;
  size_t n_vector;
  char **vector;
};
#define CORE_ML__SPECIFICATION__STRING_VECTOR__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&core_ml__specification__string_vector__descriptor) \
    , 0,NULL }


/*
 **
 * A vector of 64-bit integers.
 */
struct  _CoreML__Specification__Int64Vector
{
  ProtobufCMessage base;
  size_t n_vector;
  int64_t *vector;
};
#define CORE_ML__SPECIFICATION__INT64_VECTOR__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&core_ml__specification__int64_vector__descriptor) \
    , 0,NULL }


/*
 **
 * A vector of floating point numbers.
 */
struct  _CoreML__Specification__FloatVector
{
  ProtobufCMessage base;
  size_t n_vector;
  float *vector;
};
#define CORE_ML__SPECIFICATION__FLOAT_VECTOR__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&core_ml__specification__float_vector__descriptor) \
    , 0,NULL }


/*
 **
 * A vector of double-precision floating point numbers.
 */
struct  _CoreML__Specification__DoubleVector
{
  ProtobufCMessage base;
  size_t n_vector;
  double *vector;
};
#define CORE_ML__SPECIFICATION__DOUBLE_VECTOR__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&core_ml__specification__double_vector__descriptor) \
    , 0,NULL }


/*
 **
 * A range of int64 values
 */
struct  _CoreML__Specification__Int64Range
{
  ProtobufCMessage base;
  int64_t minvalue;
  int64_t maxvalue;
};
#define CORE_ML__SPECIFICATION__INT64_RANGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&core_ml__specification__int64_range__descriptor) \
    , 0, 0 }


/*
 **
 * A set of int64 values
 */
struct  _CoreML__Specification__Int64Set
{
  ProtobufCMessage base;
  size_t n_values;
  int64_t *values;
};
#define CORE_ML__SPECIFICATION__INT64_SET__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&core_ml__specification__int64_set__descriptor) \
    , 0,NULL }


/*
 **
 * A range of double values
 */
struct  _CoreML__Specification__DoubleRange
{
  ProtobufCMessage base;
  double minvalue;
  double maxvalue;
};
#define CORE_ML__SPECIFICATION__DOUBLE_RANGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&core_ml__specification__double_range__descriptor) \
    , 0, 0 }


/* CoreML__Specification__StringToInt64Map__MapEntry methods */
void   core_ml__specification__string_to_int64_map__map_entry__init
                     (CoreML__Specification__StringToInt64Map__MapEntry         *message);
/* CoreML__Specification__StringToInt64Map methods */
void   core_ml__specification__string_to_int64_map__init
                     (CoreML__Specification__StringToInt64Map         *message);
size_t core_ml__specification__string_to_int64_map__get_packed_size
                     (const CoreML__Specification__StringToInt64Map   *message);
size_t core_ml__specification__string_to_int64_map__pack
                     (const CoreML__Specification__StringToInt64Map   *message,
                      uint8_t             *out);
size_t core_ml__specification__string_to_int64_map__pack_to_buffer
                     (const CoreML__Specification__StringToInt64Map   *message,
                      ProtobufCBuffer     *buffer);
CoreML__Specification__StringToInt64Map *
       core_ml__specification__string_to_int64_map__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   core_ml__specification__string_to_int64_map__free_unpacked
                     (CoreML__Specification__StringToInt64Map *message,
                      ProtobufCAllocator *allocator);
/* CoreML__Specification__Int64ToStringMap__MapEntry methods */
void   core_ml__specification__int64_to_string_map__map_entry__init
                     (CoreML__Specification__Int64ToStringMap__MapEntry         *message);
/* CoreML__Specification__Int64ToStringMap methods */
void   core_ml__specification__int64_to_string_map__init
                     (CoreML__Specification__Int64ToStringMap         *message);
size_t core_ml__specification__int64_to_string_map__get_packed_size
                     (const CoreML__Specification__Int64ToStringMap   *message);
size_t core_ml__specification__int64_to_string_map__pack
                     (const CoreML__Specification__Int64ToStringMap   *message,
                      uint8_t             *out);
size_t core_ml__specification__int64_to_string_map__pack_to_buffer
                     (const CoreML__Specification__Int64ToStringMap   *message,
                      ProtobufCBuffer     *buffer);
CoreML__Specification__Int64ToStringMap *
       core_ml__specification__int64_to_string_map__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   core_ml__specification__int64_to_string_map__free_unpacked
                     (CoreML__Specification__Int64ToStringMap *message,
                      ProtobufCAllocator *allocator);
/* CoreML__Specification__StringToDoubleMap__MapEntry methods */
void   core_ml__specification__string_to_double_map__map_entry__init
                     (CoreML__Specification__StringToDoubleMap__MapEntry         *message);
/* CoreML__Specification__StringToDoubleMap methods */
void   core_ml__specification__string_to_double_map__init
                     (CoreML__Specification__StringToDoubleMap         *message);
size_t core_ml__specification__string_to_double_map__get_packed_size
                     (const CoreML__Specification__StringToDoubleMap   *message);
size_t core_ml__specification__string_to_double_map__pack
                     (const CoreML__Specification__StringToDoubleMap   *message,
                      uint8_t             *out);
size_t core_ml__specification__string_to_double_map__pack_to_buffer
                     (const CoreML__Specification__StringToDoubleMap   *message,
                      ProtobufCBuffer     *buffer);
CoreML__Specification__StringToDoubleMap *
       core_ml__specification__string_to_double_map__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   core_ml__specification__string_to_double_map__free_unpacked
                     (CoreML__Specification__StringToDoubleMap *message,
                      ProtobufCAllocator *allocator);
/* CoreML__Specification__Int64ToDoubleMap__MapEntry methods */
void   core_ml__specification__int64_to_double_map__map_entry__init
                     (CoreML__Specification__Int64ToDoubleMap__MapEntry         *message);
/* CoreML__Specification__Int64ToDoubleMap methods */
void   core_ml__specification__int64_to_double_map__init
                     (CoreML__Specification__Int64ToDoubleMap         *message);
size_t core_ml__specification__int64_to_double_map__get_packed_size
                     (const CoreML__Specification__Int64ToDoubleMap   *message);
size_t core_ml__specification__int64_to_double_map__pack
                     (const CoreML__Specification__Int64ToDoubleMap   *message,
                      uint8_t             *out);
size_t core_ml__specification__int64_to_double_map__pack_to_buffer
                     (const CoreML__Specification__Int64ToDoubleMap   *message,
                      ProtobufCBuffer     *buffer);
CoreML__Specification__Int64ToDoubleMap *
       core_ml__specification__int64_to_double_map__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   core_ml__specification__int64_to_double_map__free_unpacked
                     (CoreML__Specification__Int64ToDoubleMap *message,
                      ProtobufCAllocator *allocator);
/* CoreML__Specification__StringVector methods */
void   core_ml__specification__string_vector__init
                     (CoreML__Specification__StringVector         *message);
size_t core_ml__specification__string_vector__get_packed_size
                     (const CoreML__Specification__StringVector   *message);
size_t core_ml__specification__string_vector__pack
                     (const CoreML__Specification__StringVector   *message,
                      uint8_t             *out);
size_t core_ml__specification__string_vector__pack_to_buffer
                     (const CoreML__Specification__StringVector   *message,
                      ProtobufCBuffer     *buffer);
CoreML__Specification__StringVector *
       core_ml__specification__string_vector__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   core_ml__specification__string_vector__free_unpacked
                     (CoreML__Specification__StringVector *message,
                      ProtobufCAllocator *allocator);
/* CoreML__Specification__Int64Vector methods */
void   core_ml__specification__int64_vector__init
                     (CoreML__Specification__Int64Vector         *message);
size_t core_ml__specification__int64_vector__get_packed_size
                     (const CoreML__Specification__Int64Vector   *message);
size_t core_ml__specification__int64_vector__pack
                     (const CoreML__Specification__Int64Vector   *message,
                      uint8_t             *out);
size_t core_ml__specification__int64_vector__pack_to_buffer
                     (const CoreML__Specification__Int64Vector   *message,
                      ProtobufCBuffer     *buffer);
CoreML__Specification__Int64Vector *
       core_ml__specification__int64_vector__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   core_ml__specification__int64_vector__free_unpacked
                     (CoreML__Specification__Int64Vector *message,
                      ProtobufCAllocator *allocator);
/* CoreML__Specification__FloatVector methods */
void   core_ml__specification__float_vector__init
                     (CoreML__Specification__FloatVector         *message);
size_t core_ml__specification__float_vector__get_packed_size
                     (const CoreML__Specification__FloatVector   *message);
size_t core_ml__specification__float_vector__pack
                     (const CoreML__Specification__FloatVector   *message,
                      uint8_t             *out);
size_t core_ml__specification__float_vector__pack_to_buffer
                     (const CoreML__Specification__FloatVector   *message,
                      ProtobufCBuffer     *buffer);
CoreML__Specification__FloatVector *
       core_ml__specification__float_vector__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   core_ml__specification__float_vector__free_unpacked
                     (CoreML__Specification__FloatVector *message,
                      ProtobufCAllocator *allocator);
/* CoreML__Specification__DoubleVector methods */
void   core_ml__specification__double_vector__init
                     (CoreML__Specification__DoubleVector         *message);
size_t core_ml__specification__double_vector__get_packed_size
                     (const CoreML__Specification__DoubleVector   *message);
size_t core_ml__specification__double_vector__pack
                     (const CoreML__Specification__DoubleVector   *message,
                      uint8_t             *out);
size_t core_ml__specification__double_vector__pack_to_buffer
                     (const CoreML__Specification__DoubleVector   *message,
                      ProtobufCBuffer     *buffer);
CoreML__Specification__DoubleVector *
       core_ml__specification__double_vector__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   core_ml__specification__double_vector__free_unpacked
                     (CoreML__Specification__DoubleVector *message,
                      ProtobufCAllocator *allocator);
/* CoreML__Specification__Int64Range methods */
void   core_ml__specification__int64_range__init
                     (CoreML__Specification__Int64Range         *message);
size_t core_ml__specification__int64_range__get_packed_size
                     (const CoreML__Specification__Int64Range   *message);
size_t core_ml__specification__int64_range__pack
                     (const CoreML__Specification__Int64Range   *message,
                      uint8_t             *out);
size_t core_ml__specification__int64_range__pack_to_buffer
                     (const CoreML__Specification__Int64Range   *message,
                      ProtobufCBuffer     *buffer);
CoreML__Specification__Int64Range *
       core_ml__specification__int64_range__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   core_ml__specification__int64_range__free_unpacked
                     (CoreML__Specification__Int64Range *message,
                      ProtobufCAllocator *allocator);
/* CoreML__Specification__Int64Set methods */
void   core_ml__specification__int64_set__init
                     (CoreML__Specification__Int64Set         *message);
size_t core_ml__specification__int64_set__get_packed_size
                     (const CoreML__Specification__Int64Set   *message);
size_t core_ml__specification__int64_set__pack
                     (const CoreML__Specification__Int64Set   *message,
                      uint8_t             *out);
size_t core_ml__specification__int64_set__pack_to_buffer
                     (const CoreML__Specification__Int64Set   *message,
                      ProtobufCBuffer     *buffer);
CoreML__Specification__Int64Set *
       core_ml__specification__int64_set__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   core_ml__specification__int64_set__free_unpacked
                     (CoreML__Specification__Int64Set *message,
                      ProtobufCAllocator *allocator);
/* CoreML__Specification__DoubleRange methods */
void   core_ml__specification__double_range__init
                     (CoreML__Specification__DoubleRange         *message);
size_t core_ml__specification__double_range__get_packed_size
                     (const CoreML__Specification__DoubleRange   *message);
size_t core_ml__specification__double_range__pack
                     (const CoreML__Specification__DoubleRange   *message,
                      uint8_t             *out);
size_t core_ml__specification__double_range__pack_to_buffer
                     (const CoreML__Specification__DoubleRange   *message,
                      ProtobufCBuffer     *buffer);
CoreML__Specification__DoubleRange *
       core_ml__specification__double_range__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   core_ml__specification__double_range__free_unpacked
                     (CoreML__Specification__DoubleRange *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*CoreML__Specification__StringToInt64Map__MapEntry_Closure)
                 (const CoreML__Specification__StringToInt64Map__MapEntry *message,
                  void *closure_data);
typedef void (*CoreML__Specification__StringToInt64Map_Closure)
                 (const CoreML__Specification__StringToInt64Map *message,
                  void *closure_data);
typedef void (*CoreML__Specification__Int64ToStringMap__MapEntry_Closure)
                 (const CoreML__Specification__Int64ToStringMap__MapEntry *message,
                  void *closure_data);
typedef void (*CoreML__Specification__Int64ToStringMap_Closure)
                 (const CoreML__Specification__Int64ToStringMap *message,
                  void *closure_data);
typedef void (*CoreML__Specification__StringToDoubleMap__MapEntry_Closure)
                 (const CoreML__Specification__StringToDoubleMap__MapEntry *message,
                  void *closure_data);
typedef void (*CoreML__Specification__StringToDoubleMap_Closure)
                 (const CoreML__Specification__StringToDoubleMap *message,
                  void *closure_data);
typedef void (*CoreML__Specification__Int64ToDoubleMap__MapEntry_Closure)
                 (const CoreML__Specification__Int64ToDoubleMap__MapEntry *message,
                  void *closure_data);
typedef void (*CoreML__Specification__Int64ToDoubleMap_Closure)
                 (const CoreML__Specification__Int64ToDoubleMap *message,
                  void *closure_data);
typedef void (*CoreML__Specification__StringVector_Closure)
                 (const CoreML__Specification__StringVector *message,
                  void *closure_data);
typedef void (*CoreML__Specification__Int64Vector_Closure)
                 (const CoreML__Specification__Int64Vector *message,
                  void *closure_data);
typedef void (*CoreML__Specification__FloatVector_Closure)
                 (const CoreML__Specification__FloatVector *message,
                  void *closure_data);
typedef void (*CoreML__Specification__DoubleVector_Closure)
                 (const CoreML__Specification__DoubleVector *message,
                  void *closure_data);
typedef void (*CoreML__Specification__Int64Range_Closure)
                 (const CoreML__Specification__Int64Range *message,
                  void *closure_data);
typedef void (*CoreML__Specification__Int64Set_Closure)
                 (const CoreML__Specification__Int64Set *message,
                  void *closure_data);
typedef void (*CoreML__Specification__DoubleRange_Closure)
                 (const CoreML__Specification__DoubleRange *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor core_ml__specification__string_to_int64_map__descriptor;
extern const ProtobufCMessageDescriptor core_ml__specification__string_to_int64_map__map_entry__descriptor;
extern const ProtobufCMessageDescriptor core_ml__specification__int64_to_string_map__descriptor;
extern const ProtobufCMessageDescriptor core_ml__specification__int64_to_string_map__map_entry__descriptor;
extern const ProtobufCMessageDescriptor core_ml__specification__string_to_double_map__descriptor;
extern const ProtobufCMessageDescriptor core_ml__specification__string_to_double_map__map_entry__descriptor;
extern const ProtobufCMessageDescriptor core_ml__specification__int64_to_double_map__descriptor;
extern const ProtobufCMessageDescriptor core_ml__specification__int64_to_double_map__map_entry__descriptor;
extern const ProtobufCMessageDescriptor core_ml__specification__string_vector__descriptor;
extern const ProtobufCMessageDescriptor core_ml__specification__int64_vector__descriptor;
extern const ProtobufCMessageDescriptor core_ml__specification__float_vector__descriptor;
extern const ProtobufCMessageDescriptor core_ml__specification__double_vector__descriptor;
extern const ProtobufCMessageDescriptor core_ml__specification__int64_range__descriptor;
extern const ProtobufCMessageDescriptor core_ml__specification__int64_set__descriptor;
extern const ProtobufCMessageDescriptor core_ml__specification__double_range__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_DataStructures_2eproto__INCLUDED */