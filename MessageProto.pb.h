/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.8 at Wed Sep 20 22:04:13 2017. */

#ifndef PB_MESSAGEPROTO_PB_H_INCLUDED
#define PB_MESSAGEPROTO_PB_H_INCLUDED

#include "pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _StatusEnum {
    StatusEnum_OPEN = 1,
    StatusEnum_CLOSE = 2
} StatusEnum;
#define _StatusEnum_MIN StatusEnum_OPEN
#define _StatusEnum_MAX StatusEnum_CLOSE
#define _StatusEnum_ARRAYSIZE ((StatusEnum)(StatusEnum_CLOSE+1))

/* Struct definitions */
typedef struct _Body {
    bool has_count;
    int32_t count;
    pb_callback_t content;
/* @@protoc_insertion_point(struct:Body) */
} Body;

typedef struct _Head {
    bool has_code;
    int32_t code;
    pb_callback_t msg;
/* @@protoc_insertion_point(struct:Head) */
} Head;

typedef struct _Message {
    int32_t int32Value;
    pb_callback_t int32ListValue;
    pb_callback_t stringValue;
    bool has_stringValue128;
    char stringValue128[128];
    bool has_stringValue1024;
    char stringValue1024[1024];
    pb_callback_t stringListValue;
    bool has_floatValue;
    float floatValue;
    bool has_doubleValue;
    double doubleValue;
    bool has_boolValue;
    bool boolValue;
    bool has_status;
    StatusEnum status;
    bool has_head;
    Head head;
    pb_callback_t body;
/* @@protoc_insertion_point(struct:Message) */
} Message;

/* Default values for struct fields */

/* Initializer values for message structs */
#define Head_init_default                        {false, 0, {{NULL}, NULL}}
#define Body_init_default                        {false, 0, {{NULL}, NULL}}
#define Message_init_default                     {0, {{NULL}, NULL}, {{NULL}, NULL}, false, "", false, "", {{NULL}, NULL}, false, 0, false, 0, false, 0, false, (StatusEnum)0, false, Head_init_default, {{NULL}, NULL}}
#define Head_init_zero                           {false, 0, {{NULL}, NULL}}
#define Body_init_zero                           {false, 0, {{NULL}, NULL}}
#define Message_init_zero                        {0, {{NULL}, NULL}, {{NULL}, NULL}, false, "", false, "", {{NULL}, NULL}, false, 0, false, 0, false, 0, false, (StatusEnum)0, false, Head_init_zero, {{NULL}, NULL}}

/* Field tags (for use in manual encoding/decoding) */
#define Body_count_tag                           1
#define Body_content_tag                         2
#define Head_code_tag                            1
#define Head_msg_tag                             2
#define Message_int32Value_tag                   1
#define Message_int32ListValue_tag               2
#define Message_stringValue_tag                  3
#define Message_stringValue128_tag               4
#define Message_stringValue1024_tag              5
#define Message_stringListValue_tag              6
#define Message_floatValue_tag                   7
#define Message_doubleValue_tag                  8
#define Message_boolValue_tag                    9
#define Message_status_tag                       10
#define Message_head_tag                         11
#define Message_body_tag                         12

/* Struct field encoding specification for nanopb */
extern const pb_field_t Head_fields[3];
extern const pb_field_t Body_fields[3];
extern const pb_field_t Message_fields[13];

/* Maximum encoded size of messages (where known) */
/* Head_size depends on runtime parameters */
/* Body_size depends on runtime parameters */
/* Message_size depends on runtime parameters */

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define MESSAGEPROTO_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
