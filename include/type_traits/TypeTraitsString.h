#ifndef OPEN_JSON_TYPE_TRAITS_STRING_H
#define OPEN_JSON_TYPE_TRAITS_STRING_H

#include <string>
#include "TypeTrailsCommon.h"

namespace open_json {
    /**
     * type check for string
     */
    template<class T>
    struct Is_String_type {
        static const bool value = false;
    };

    template<>
    struct Is_String_type<std::string> {
        static const bool value = true;
    };

    template<>
    struct Is_String_type<const std::string> {
        static const bool value = true;
    };

    template<>
    struct Is_String_type<std::string &> {
        static const bool value = true;
    };

    template<>
    struct Is_String_type<const std::string &> {
        static const bool value = true;
    };

    template<>
    struct Is_String_type<std::string &&> {
        static const bool value = true;
    };

    template<>
    struct Is_String_type<const std::string &&> {
        static const bool value = true;
    };

    template<>
    struct Is_String_type<std::string *> {
        static const bool value = true;
    };

    template<>
    struct Is_String_type<const std::string *> {
        static const bool value = true;
    };

    template<>
    struct Is_String_type<const std::string *const> {
        static const bool value = true;
    };

    template<class T>
    struct Is_String {
    private:
        typedef typename Remove_CVR<T>::type U;
        typedef typename Remove_CVRP<T>::type P;
    public:
        static const bool value = Is_String_type<U>::value || Is_String_type<P>::value;
    };

}
#endif //OPEN_JSON_TYPE_TRAITS_STRING_H
