#ifndef OPEN_JSON_COMMON_H
#define OPEN_JSON_COMMON_H

#ifndef NOT_NULL
#define NOT_NULL
#endif

#define IS_NULL(a) ((a) == nullptr)


#if defined(WIN32) || defined(_WIN32)
#define WINDOWS
#else
#define LINUX
#endif

#if defined(WINDOWS)
#define PATH_SEPARATOR "\\"
#elif defined(LINUX)
#define PATH_SEPARATOR "/"
#endif

#if (__WORDSIZE == 32)
#define 32BIT_OS
#elif (__WORDSIZE == 64)
#define 64BIT_OS
#endif

#define PAIR_SEPARATOR "="

#define FILE_TYPE_SEPARATOR "."

#define USE_C_FUNCTION 1

#define FL __FILE__
#define LN __LINE__

#define UNUSED(x) ((void)(x))

#define MAYBE_UNUSED [[maybe_unused]]

#endif //OPEN_JSON_COMMON_H
