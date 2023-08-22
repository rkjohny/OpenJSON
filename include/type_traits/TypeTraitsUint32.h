#ifndef OPEN_JSON_TYPE_TRAITS_UINT32_H
#define OPEN_JSON_TYPE_TRAITS_UINT32_H

#include <cstdint>
#include "TypeTrailsCommon.h"

namespace open_json {
    /**
     * type: unsigned int
     *
     */
    template<class T>
    struct Is_UInt32_type {
        static const bool value = false;
    };

    template<>
    struct Is_UInt32_type<uint32_t> {
        static const bool value = true;
    };

    template<>
    struct Is_UInt32_type<const uint32_t> {
        static const bool value = true;
    };

    template<>
    struct Is_UInt32_type<uint32_t &> {
        static const bool value = true;
    };

    template<>
    struct Is_UInt32_type<const uint32_t &> {
        static const bool value = true;
    };

    template<>
    struct Is_UInt32_type<uint32_t &&> {
        static const bool value = true;
    };

    template<>
    struct Is_UInt32_type<const uint32_t &&> {
        static const bool value = true;
    };

    template<>
    struct Is_UInt32_type<uint32_t *> {
        static const bool value = true;
    };

    template<>
    struct Is_UInt32_type<const uint32_t *> {
        static const bool value = true;
    };

    template<>
    struct Is_UInt32_type<const uint32_t *const> {
        static const bool value = true;
    };

    template<class T>
    struct Is_UInt32 {
    private:
        typedef typename Remove_CVR<T>::type U;
        typedef typename Remove_CVRP<T>::type P;
    public:
        static const bool value = Is_UInt32_type<U>::value || Is_UInt32_type<P>::value;
    };

    /**
    * make compilable with long int is 32 bit word size system.
    */
#ifdef WIN32_OS
    typedef unsigned long int uint_32_t;
#endif
}

#endif //OPEN_JSON_TYPE_TRAITS_UINT32_H
