#ifndef LWJSON_TYPES_H
#define LWJSON_TYPES_H

#ifdef __cplusplus
extern "C"{
#endif

#define EPERM            1      /* Operation not permitted */
#define ENOENT           2      /* No such file or directory */
#define ESRCH            3      /* No such process */
#define EINTR            4      /* Interrupted system call */
#define EIO              5      /* I/O error */
#define ENXIO            6      /* No such device or address */
#define E2BIG            7      /* Argument list too long */
#define ENOEXEC          8      /* Exec format error */
#define EBADF            9      /* Bad file number */
#define ECHILD          10      /* No child processes */
#define EAGAIN          11      /* Try again */
#define ENOMEM          12      /* Out of memory */
#define EACCES          13      /* Permission denied */
#define EFAULT          14      /* Bad address */
#define ENOTBLK         15      /* Block device required */
#define EBUSY           16      /* Device or resource busy */
#define EEXIST          17      /* File exists */
#define EXDEV           18      /* Cross-device link */
#define ENODEV          19      /* No such device */
#define ENOTDIR         20      /* Not a directory */
#define EISDIR          21      /* Is a directory */
#define EINVAL          22      /* Invalid argument */
#define ENFILE          23      /* File table overflow */
#define EMFILE          24      /* Too many open files */
#define ENOTTY          25      /* Not a typewriter */
#define ETXTBSY         26      /* Text file busy */
#define EFBIG           27      /* File too large */
#define ENOSPC          28      /* No space left on device */
#define ESPIPE          29      /* Illegal seek */
#define EROFS           30      /* Read-only file system */
#define EMLINK          31      /* Too many links */
#define EPIPE           32      /* Broken pipe */
#define EDOM            33      /* Math argument out of domain of func */
#define ERANGE          34      /* Math result not representable */

#ifndef false
#define false 0
#endif
#ifndef true
#define true  1
#endif

typedef enum {
    LWJSON_VAL_STRING,              // String
    LWJSON_VAL_NUMBER,              // Número
    LWJSON_VAL_DECIMAL,             // Decimal
    LWJSON_VAL_BOOLEAN,             // Boolean
    LWJSON_VAL_OBJECT,              // Objeto
    LWJSON_VAL_ARRAY,               // Array
    LWJSON_VAL_NULL                 // Null
} LwJsonValueType;

typedef union {
    char *valueString;              // Puntero a cadena
    int valueInt;               // Valor numérico
    int valueBool;                 // Valor booleano
    float valueDecimal;
} LwJsonValue;

#ifdef __cplusplus
}
#endif

#endif
