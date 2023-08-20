//
// Created by User on 8/20/2023.
//

#ifndef OPEN_JSON_TYPE_TRAITS_INT8_H
#define OPEN_JSON_TYPE_TRAITS_INT8_H


#include <cstdint>
#include "TypeTrailsCommon.h"

namespace open_json {
    /**
     * type: signed char, byte
     */
    template<class T>
    struct Is_Int8_type {
        static const bool value = false;
    };

    template<>
    struct Is_Int8_type<int8_t> {
        static const bool value = true;
    };

    template<>
    struct Is_Int8_type<const int8_t> {
        static const bool value = true;
    };

    template<>
    struct Is_Int8_type<int8_t &> {
        static const bool value = true;
    };

    template<>
    struct Is_Int8_type<const int8_t &> {
        static const bool value = true;
    };

    template<>
    struct Is_Int8_type<int8_t &&> {
        static const bool value = true;
    };

    template<>
    struct Is_Int8_type<const int8_t &&> {
        static const bool value = true;
    };

    template<>
    struct Is_Int8_type<int8_t *> {
        static const bool value = true;
    };

    template<>
    struct Is_Int8_type<const int8_t *> {
        static const bool value = true;
    };

    template<>
    struct Is_Int8_type<int8_t *const> {
        static const bool value = true;
    };
    template<>
    struct Is_Int8_type<const int8_t *const> {
        static const bool value = true;
    };
    template<class T>
    struct Is_Int8 {
    private:
        typedef typename Remove_CVR<T>::type U;
        typedef typename Remove_CVRP<T>::type P;
    public:
        static const bool value = Is_Int8_type<U>::value || Is_Int8_type<P>::value;
    };
}
#endif //OPEN_JSON_TYPE_TRAITS_INT8_H
