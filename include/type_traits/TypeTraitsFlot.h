#ifndef OPEN_JSON_TYPE_TRAITS_FLOT_H
#define OPEN_JSON_TYPE_TRAITS_FLOT_H

#include "TypeTrailsCommon.h"

namespace open_json {
    /**
    * type check for float
    */
    template<class T>
    struct Is_Float_type {
        static const bool value = false;
    };

    template<>
    struct Is_Float_type<float> {
        static const bool value = true;
    };

    template<>
    struct Is_Float_type<const float> {
        static const bool value = true;
    };

    template<>
    struct Is_Float_type<float &> {
        static const bool value = true;
    };

    template<>
    struct Is_Float_type<const float &> {
        static const bool value = true;
    };

    template<>
    struct Is_Float_type<float &&> {
        static const bool value = true;
    };

    template<>
    struct Is_Float_type<const float &&> {
        static const bool value = true;
    };

    template<>
    struct Is_Float_type<float *> {
        static const bool value = true;
    };

    template<>
    struct Is_Float_type<const float *> {
        static const bool value = true;
    };

    template<>
    struct Is_Float_type<const float *const> {
        static const bool value = true;
    };

    template<class T>
    struct Is_Float {
    private:
        typedef typename Remove_CVR<T>::type U;
        typedef typename Remove_CVRP<T>::type P;
    public:
        static const bool value = Is_Float_type<U>::value || Is_Float_type<P>::value;
    };
}
#endif //OPEN_JSON_TYPE_TRAITS_FLOT_H
