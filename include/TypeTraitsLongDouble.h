#ifndef OPEN_JSON_TYPE_TRAITS_LONG_DOUBLE_H
#define OPEN_JSON_TYPE_TRAITS_LONG_DOUBLE_H

#include "TypeTrailsCommon.h"

namespace open_json {
    /**
     * long double type
     */
    template<class T>
    struct Is_LongDouble_type {
        static const bool value = false;
    };

    template<>
    struct Is_LongDouble_type<long double> {
        static const bool value = true;
    };

    template<>
    struct Is_LongDouble_type<const long double> {
        static const bool value = true;
    };

    template<>
    struct Is_LongDouble_type<long double &> {
        static const bool value = true;
    };

    template<>
    struct Is_LongDouble_type<const long double &> {
        static const bool value = true;
    };

    template<>
    struct Is_LongDouble_type<long double &&> {
        static const bool value = true;
    };

    template<>
    struct Is_LongDouble_type<const long double &&> {
        static const bool value = true;
    };

    template<>
    struct Is_LongDouble_type<long double *> {
        static const bool value = true;
    };

    template<>
    struct Is_LongDouble_type<const long double *> {
        static const bool value = true;
    };

    template<>
    struct Is_LongDouble_type<const long double *const> {
        static const bool value = true;
    };

    template<class T>
    struct Is_LongDouble {
    private:
        typedef typename Remove_CVR<T>::type U;
        typedef typename Remove_CVRP<T>::type P;
    public:
        static const bool value = Is_LongDouble_type<U>::value || Is_LongDouble_type<P>::value;
    };
}

#endif //OPEN_JSON_TYPE_TRAITS_LONG_DOUBLE_H
