#ifndef OPEN_JSON_TYPE_TRAITS_UINT8_H
#define OPEN_JSON_TYPE_TRAITS_UINT8_H

#include <cstdint>
#include "TypeTrailsCommon.h"

namespace open_json {
    /**
     * type: unsigned char, byte
     */
    template<class T>
    struct Is_UInt8_type {
        static const bool value = false;
    };

    template<>
    struct Is_UInt8_type<uint8_t> {
        static const bool value = true;
    };

    template<>
    struct Is_UInt8_type<const uint8_t> {
        static const bool value = true;
    };

    template<>
    struct Is_UInt8_type<uint8_t &> {
        static const bool value = true;
    };

    template<>
    struct Is_UInt8_type<const uint8_t &> {
        static const bool value = true;
    };

    template<>
    struct Is_UInt8_type<uint8_t &&> {
        static const bool value = true;
    };

    template<>
    struct Is_UInt8_type<const uint8_t &&> {
        static const bool value = true;
    };

    template<>
    struct Is_UInt8_type<uint8_t *> {
        static const bool value = true;
    };

    template<>
    struct Is_UInt8_type<const uint8_t *> {
        static const bool value = true;
    };

    template<>
    struct Is_UInt8_type<uint8_t *const> {
        static const bool value = true;
    };

    template<>
    struct Is_UInt8_type<const uint8_t *const> {
        static const bool value = true;
    };

    template<class T>
    struct Is_UInt8 {
    private:
        typedef typename Remove_CVR<T>::type U;
        typedef typename Remove_CVRP<T>::type P;
    public:
        static const bool value = Is_UInt8_type<U>::value || Is_UInt8_type<P>::value;
    };
}

#endif //OPEN_JSON_TYPE_TRAITS_UINT8_H
