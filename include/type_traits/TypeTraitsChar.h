#ifndef OPEN_JSON_TYPE_TRAITS_CHAR_H
#define OPEN_JSON_TYPE_TRAITS_CHAR_H

#include "TypeTrailsCommon.h"

namespace open_json {
    /**
     * type char, it may vary among platforms
     */
    template<class T>
    struct Is_Char_type {
        static const bool value = false;
    };

    template<>
    struct Is_Char_type<char> {
        static const bool value = true;
    };

    template<>
    struct Is_Char_type<const char> {
        static const bool value = true;
    };

    template<>
    struct Is_Char_type<char &> {
        static const bool value = true;
    };

    template<>
    struct Is_Char_type<const char &> {
        static const bool value = true;
    };

    template<>
    struct Is_Char_type<char &&> {
        static const bool value = true;
    };

    template<>
    struct Is_Char_type<const char &&> {
        static const bool value = true;
    };

    template<>
    struct Is_Char_type<char *> {
        static const bool value = true;
    };

    template<>
    struct Is_Char_type<const char *> {
        static const bool value = true;
    };

    template<>
    struct Is_Char_type<char *const> {
        static const bool value = true;
    };

    template<>
    struct Is_Char_type<const char *const> {
        static const bool value = true;
    };
    template<class T>
    struct Is_Char {
    private:
        typedef typename Remove_CVR<T>::type U;
        typedef typename Remove_CVRP<T>::type P;
    public:
        static const bool value = Is_Char_type<U>::value || Is_Char_type<P>::value;
    };
}

#endif //OPEN_JSON_TYPE_TRAITS_CHAR_H
