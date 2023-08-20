#ifndef OPEN_JSON_TYPE_TRAITS_BOOL_H
#define OPEN_JSON_TYPE_TRAITS_BOOL_H

#include "TypeTrailsCommon.h"

namespace open_json {
    /**
     * type check for boolean
     */
    template<class T>
    struct Is_Bool_type {
        static const bool value = false;
    };

    template<>
    struct Is_Bool_type<bool> {
        static const bool value = true;
    };

    template<>
    struct Is_Bool_type<const bool> {
        static const bool value = true;
    };

    template<>
    struct Is_Bool_type<bool &> {
        static const bool value = true;
    };

    template<>
    struct Is_Bool_type<const bool &> {
        static const bool value = true;
    };

    template<>
    struct Is_Bool_type<bool &&> {
        static const bool value = true;
    };

    template<>
    struct Is_Bool_type<const bool &&> {
        static const bool value = true;
    };

    template<>
    struct Is_Bool_type<bool *> {
        static const bool value = true;
    };

    template<>
    struct Is_Bool_type<const bool *> {
        static const bool value = true;
    };

    template<>
    struct Is_Bool_type<const bool *const> {
        static const bool value = true;
    };

    template<class T>
    struct Is_Bool {
    private:
        typedef typename Remove_CVR<T>::type U;
        typedef typename Remove_CVRP<T>::type P;
    public:
        static const bool value = Is_Bool_type<U>::value || Is_Bool_type<P>::value;
    };
}
#endif //OPEN_JSON_TYPE_TRAITS_BOOL_H
