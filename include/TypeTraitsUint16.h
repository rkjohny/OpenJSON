#ifndef OPEN_JSON_TYPE_TRAITS_UINT16_H
#define OPEN_JSON_TYPE_TRAITS_UINT16_H

#include <cstdint>
#include "TypeTrailsCommon.h"

namespace open_json {
    /**
    * type: unsigned short int
    */
    template<class T>
    struct Is_UInt16_type {
        static const bool value = false;
    };

    template<>
    struct Is_UInt16_type<uint16_t> {
        static const bool value = true;
    };

    template<>
    struct Is_UInt16_type<const uint16_t> {
        static const bool value = true;
    };

    template<>
    struct Is_UInt16_type<uint16_t &> {
        static const bool value = true;
    };

    template<>
    struct Is_UInt16_type<const uint16_t&> {
        static const bool value = true;
    };

    template<>
    struct Is_UInt16_type<uint16_t&&> {
        static const bool value = true;
    };

    template<>
    struct Is_UInt16_type<const uint16_t&&> {
        static const bool value = true;
    };

    template<>
    struct Is_UInt16_type<uint16_t *> {
        static const bool value = true;
    };

    template<>
    struct Is_UInt16_type<const uint16_t *> {
        static const bool value = true;
    };

    template<>
    struct Is_UInt16_type<const uint16_t *const> {
        static const bool value = true;
    };

    template<class T>
    struct Is_UInt16 {
    private:
        typedef typename Remove_CVR<T>::type U;
        typedef typename Remove_CVRP<T>::type P;
    public:
        static const bool value = Is_UInt16_type<U>::value || Is_UInt16_type<P>::value;
    };

}
#endif //OPEN_JSON_TYPE_TRAITS_UINT16_H
