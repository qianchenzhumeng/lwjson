#ifndef LWJSON_H
#define LWJSON_H

#ifdef __cplusplus
extern "C"{
#endif

#include "lwjson_types.h"
#include "lwjson_config.h"

// Generation
typedef struct LwJsonMsg{
    char *string;
    unsigned int len;
    unsigned int _offset;
    int _lastError;
} LwJsonMsg;


// Parsing
int lwJsonGetObject(const char **path, const LwJsonMsg *msg, LwJsonMsg *object);
int lwJsonGetArray(const char **path, const LwJsonMsg *msg, LwJsonMsg *array);
int lwJsonGetArrayLen(const char **path, const LwJsonMsg *msg);
int lwJsonGetIntArray(const char **path, const LwJsonMsg *msg, int *array, unsigned int arrayLen);
int lwJsonGetStringArray(const char **path, const LwJsonMsg *msg, char **pArray, unsigned int *pLen, unsigned int arrayLen);
int lwJsonGetString(const char **path, const LwJsonMsg *msg, char *value, unsigned int valueLen);
int lwJsonGetInt(const char **path, const LwJsonMsg *msg, int *value);
int lwJsonGetDecimal(const char **path, const LwJsonMsg *msg, float *value);
int lwJsonGetBool(const char **path, const LwJsonMsg *msg, int *value);


int lwJsonWriteStart(LwJsonMsg *msg);
int lwJsonWriteEnd(LwJsonMsg *msg);
void LwJsonWriteApplyOffset(LwJsonMsg *msg, unsigned int offset);
int lwJsonStartObject(LwJsonMsg *msg);
int lwJsonStartArray(LwJsonMsg *msg);
int lwJsonCloseObject(LwJsonMsg *msg);
int lwJsonCloseArray(LwJsonMsg *msg);
int lwJsonAddStringToObject(LwJsonMsg *msg, const char *name, const char *string);
int lwJsonAddStringToArray(LwJsonMsg *msg, const char *string);
int lwJsonAddIntToObject(LwJsonMsg *msg, const char *name, int value);
int lwJsonAddDecimalToObject(LwJsonMsg *msg, const char *name, float value);
int lwJsonAddIntToArray(LwJsonMsg *msg, int value);
int lwJsonAddDecimalToArray(LwJsonMsg *msg, float value);
int lwJsonAddBooleanToObject(LwJsonMsg *msg, const char *name, int boolean);
int lwJsonAddBooleanToArray(LwJsonMsg *msg, int boolean);
int lwJsonAddObjectToObject(LwJsonMsg *msg, const char *name);
int lwJsonAddObjectToArray(LwJsonMsg *msg);
int lwJsonAddArrayToObject(LwJsonMsg *msg, const char *name);
int lwJsonAddArrayToArray(LwJsonMsg *msg);
int lwJsonAddNullToObject(LwJsonMsg *msg, const char *name);
int lwJsonAddNullToArray(LwJsonMsg *msg);
int lwJsonAppendObject(LwJsonMsg *msg, const char *name, const char *objString);


#ifdef __cplusplus
}
#endif

#endif
