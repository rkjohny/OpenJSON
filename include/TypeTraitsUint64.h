#ifndef OPEN_JSON_TYPE_TRAITS_UINT64_H
#define OPEN_JSON_TYPE_TRAITS_UINT64_H

#include <cstdint>
#include "TypeTrailsCommon.h"

namespace open_json {
    /**
     * type: unsigned long int or unsigned long long int
     *
     */
    template<class T>
    struct Is_UInt64_type {
        static const bool value = false;
    };

    template<>
    struct Is_UInt64_type<uint64_t> {
        static const bool value = true;
    };

    template<>
    struct Is_UInt64_type<const uint64_t> {
        static const bool value = true;
    };

    template<>
    struct Is_UInt64_type<uint64_t &> {
        static const bool value = true;
    };

    template<>
    struct Is_UInt64_type<const uint64_t &> {
        static const bool value = true;
    };

    template<>
    struct Is_UInt64_type<uint64_t &&> {
        static const bool value = true;
    };

    template<>
    struct Is_UInt64_type<const uint64_t &&> {
        static const bool value = true;
    };

    template<>
    struct Is_UInt64_type<uint64_t *> {
        static const bool value = true;
    };

    template<>
    struct Is_UInt64_type<const uint64_t *> {
        static const bool value = true;
    };

    template<>
    struct Is_UInt64_type<const uint64_t *const> {
        static const bool value = true;
    };

    template<class T>
    struct Is_UInt64 {
    private:
        typedef typename Remove_CVR<T>::type U;
        typedef typename Remove_CVRP<T>::type P;
    public:
        static const bool value = Is_UInt64_type<U>::value || Is_UInt64_type<P>::value;
    };
}

#endif //OPEN_JSON_TYPE_TRAITS_UINT64_H
