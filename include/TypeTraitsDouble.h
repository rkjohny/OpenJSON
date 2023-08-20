#ifndef OPEN_JSON_TYPE_TRAITS_DOUBLE_H
#define OPEN_JSON_TYPE_TRAITS_DOUBLE_H

#include "TypeTrailsCommon.h"

namespace open_json {
    /**
     * type check for double
     */
    template<class T>
    struct Is_Double_type {
        static const bool value = false;
    };

    template<>
    struct Is_Double_type<double> {
        static const bool value = true;
    };

    template<>
    struct Is_Double_type<const double> {
        static const bool value = true;
    };

    template<>
    struct Is_Double_type<double &> {
        static const bool value = true;
    };

    template<>
    struct Is_Double_type<const double &> {
        static const bool value = true;
    };

    template<>
    struct Is_Double_type<double &&> {
        static const bool value = true;
    };

    template<>
    struct Is_Double_type<const double &&> {
        static const bool value = true;
    };

    template<>
    struct Is_Double_type<double *> {
        static const bool value = true;
    };

    template<>
    struct Is_Double_type<const double *> {
        static const bool value = true;
    };

    template<>
    struct Is_Double_type<const double *const> {
        static const bool value = true;
    };

    template<class T>
    struct Is_Double {
    private:
        typedef typename Remove_CVR<T>::type U;
        typedef typename Remove_CVRP<T>::type P;
    public:
        static const bool value = Is_Double_type<U>::value || Is_Double_type<P>::value;
    };
}

#endif //OPEN_JSON_TYPE_TRAITS_DOUBLE_H