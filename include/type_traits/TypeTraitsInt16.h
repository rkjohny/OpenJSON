#ifndef OPEN_JSON_TYPE_TRAITS_INT16_H
#define OPEN_JSON_TYPE_TRAITS_INT16_H

#include <cstdint>
#include "TypeTrailsCommon.h"

namespace open_json {
    /**
     * type: signed short int
     */
    template<class T>
    struct Is_Int16_type {
        static const bool value = false;
    };

    template<>
    struct Is_Int16_type<int16_t> {
        static const bool value = true;
    };

    template<>
    struct Is_Int16_type<const int16_t> {
        static const bool value = true;
    };

    template<>
    struct Is_Int16_type<int16_t &> {
        static const bool value = true;
    };

    template<>
    struct Is_Int16_type<const int16_t &> {
        static const bool value = true;
    };

    template<>
    struct Is_Int16_type<int16_t &&> {
        static const bool value = true;
    };

    template<>
    struct Is_Int16_type<const int16_t &&> {
        static const bool value = true;
    };

    template<>
    struct Is_Int16_type<int16_t *> {
        static const bool value = true;
    };

    template<>
    struct Is_Int16_type<const int16_t *> {
        static const bool value = true;
    };

    template<>
    struct Is_Int16_type<int16_t *const> {
        static const bool value = true;
    };

    template<>
    struct Is_Int16_type<const int16_t *const> {
        static const bool value = true;
    };

    template<class T>
    struct Is_Int16 {
    private:
        typedef typename Remove_CVR<T>::type U;
        typedef typename Remove_CVRP<T>::type P;
    public:
        static const bool value = Is_Int16_type<U>::value || Is_Int16_type<P>::value;
    };
}

#endif //OPEN_JSON_TYPE_TRAITS_INT16_H
