#ifndef OPEN_JSON_TYPE_TRAITS_INT64_H
#define OPEN_JSON_TYPE_TRAITS_INT64_H

#include <cstdint>
#include "../Common.h"
#include "TypeTrailsCommon.h"

namespace open_json {
    /**
     * type: signed long int or signed long long int
     *
     */
    template<class T>
    struct Is_Int64_type {
        static const bool value = false;
    };

    template<>
    struct Is_Int64_type<int64_t> {
        static const bool value = true;
    };

    template<>
    struct Is_Int64_type<const int64_t> {
        static const bool value = true;
    };

    template<>
    struct Is_Int64_type<int64_t &> {
        static const bool value = true;
    };

    template<>
    struct Is_Int64_type<const int64_t &> {
        static const bool value = true;
    };

    template<>
    struct Is_Int64_type<int64_t &&> {
        static const bool value = true;
    };

    template<>
    struct Is_Int64_type<const int64_t &&> {
        static const bool value = true;
    };

    template<>
    struct Is_Int64_type<int64_t *> {
        static const bool value = true;
    };

    template<>
    struct Is_Int64_type<const int64_t *> {
        static const bool value = true;
    };

    template<>
    struct Is_Int64_type<const int64_t *const> {
        static const bool value = true;
    };

    template<class T>
    struct Is_Int64 {
    private:
        typedef typename Remove_CVR<T>::type U;
        typedef typename Remove_CVRP<T>::type P;
    public:
        static const bool value = Is_Int64_type<U>::value || Is_Int64_type<P>::value;
    };

    /**
    * make compilable with long long int in 64 bit word size system
    */
#ifdef WIN32_OS
    typedef long long int int_64_t;
#endif
}
#endif //OPEN_JSON_TYPE_TRAITS_INT64_H
