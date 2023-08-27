#ifndef OPEN_JSON_TYPE_TRAITS_ENUM_H
#define OPEN_JSON_TYPE_TRAITS_ENUM_H

#include "TypeTrailsCommon.h"

namespace open_json {
    /**
    * type check for enum
    */
    template<class T>
    struct [[maybe_unused]] Is_Enum {
    private:
        typedef typename Remove_CVR<T>::type U;
        typedef typename Remove_CVRP<T>::type P;
    public:
        static const bool value =
                std::is_enum<T>::value || std::is_enum<U>::value || std::is_enum<P>::value;
    };
}

#endif //OPEN_JSON_TYPE_TRAITS_ENUM_H
