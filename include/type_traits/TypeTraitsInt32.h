#ifndef OPEN_JSON_TYPE_TRAITS_INT32_H
#define OPEN_JSON_TYPE_TRAITS_INT32_H

#include <cstdint>
#include "../Common.h"
#include "TypeTrailsCommon.h"

namespace open_json {
    /**
    * type: signed int
    */
    template<class T>
    struct Is_Int32_type {
        static const bool value = false;
    };

    template<>
    struct Is_Int32_type<int32_t> {
        static const bool value = true;
    };

    template<>
    struct Is_Int32_type<const int32_t> {
        static const bool value = true;
    };

    template<>
    struct Is_Int32_type<int32_t &> {
        static const bool value = true;
    };

    template<>
    struct Is_Int32_type<const int32_t &> {
        static const bool value = true;
    };

    template<>
    struct Is_Int32_type<int32_t &&> {
        static const bool value = true;
    };

    template<>
    struct Is_Int32_type<const int32_t &&> {
        static const bool value = true;
    };

    template<>
    struct Is_Int32_type<int32_t *> {
        static const bool value = true;
    };

    template<>
    struct Is_Int32_type<const int32_t *> {
        static const bool value = true;
    };

    template<>
    struct Is_Int32_type<const int32_t *const> {
        static const bool value = true;
    };

    template<class T>
    struct Is_Int32 {
    private:
        typedef typename Remove_CVR<T>::type U;
        typedef typename Remove_CVR<T>::type P;
    public:
        static const bool value = Is_Int32_type<U>::value || Is_Int32_type<P>::value;
    };


    /**
    * make compilable with long int is 32 bit word size system.
    */
#ifdef WIN32_OS
    typedef long int int_32_t;
#endif
}

#endif //OPEN_JSON_TYPE_TRAITS_INT32_H