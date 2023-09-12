#ifndef KUNI_H
#define KUNI_H

// TODO: format with clang-format

// Enumeration types

typedef enum KUNI_STATUS {
    UNRECOVERABLE_ERROR, RECOVERABLE_ERROR, SUCCESS 
} KUNI_STATUS;

typedef enum KUNI_TYPE {
    STRING_U8_IMMUTABLE, STRING_U16_IMMUTABLE, STRING_U32_IMMUTABLE, 
    STRING_U8_MUTABLE, STRING_U16_MUTABLE, STRING_U32_MUTABLE
} KUNI_TYPE;

// Immutable string types

/// @brief An immutable utf-8 encoded string type.
typedef struct KUNI_string_u8 {
    const char*  data;
    const size_t available_bytes;
    const size_t used_bytes;
    const size_t length;
} kuni_string_u8;

/// @brief An immutable utf-16 encoded string type.
typedef struct KUNI_string_u16 {
    const char16_t*  data;
    const size_t     available_bytes;
    const size_t     used_bytes;
    const size_t     length;
} kuni_string_u16;

/// @brief An immutable utf-32 encoded string type.
typedef struct KUNI_string_u32 {
    const char32_t*  data;
    const size_t     available_bytes;
    const size_t     used_bytes;
    const size_t     length;
} kuni_string_u32;


// Mutable string types

/// @brief A utf-8 encoded string type.
typedef struct KUNI_string_u8_mutable
{
    char*  data;
    size_t available_bytes;
    size_t used_bytes;
    size_t length;
} kuni_string_u8_mutable;

/// @brief A utf-16 encoded string type.
typedef struct KUNI_string_u16_mutable {
    char16_t*  data;
    size_t     available_bytes;
    size_t     used_bytes;
    size_t     length;
} kuni_string_u16_mutable;

/// @brief A utf-32 encoded string type.
typedef struct KUNI_string_u32_mutable {
    char32_t*  data;
    size_t     available_bytes;
    size_t     used_bytes;
    size_t     length;
} kuni_string_u32_mutable;


// Various other structs

typedef struct KUNI_result {
    void*       data;
    KUNI_STATUS error;
    KUNI_TYPE   return_type;
} KUNI_result;

#endif