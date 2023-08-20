#ifndef OPEN_JSON_TYPE_TRAITS_PRIMITIVE_H
#define OPEN_JSON_TYPE_TRAITS_PRIMITIVE_H

#include "TypeTraitsBool.h"
#include "TypeTraitsChar.h"
#include "TypeTraitsInteger.h"
#include "TypeTraitsDecimal.h"
#include "TypeTraitsString.h"

namespace open_json {
    /**
    * Determines whether T is primitive type
    * considering std::string is primitive
    */
    template<class T>
    struct Is_Primitive {
        static constexpr bool value = (Is_Bool<T>::value ||
                                       Is_Char<T>::value ||
                                       Is_Integer<T>::value ||
                                       Is_Decimal<T>::value ||
                                       Is_String<T>::value
        );
    };
}

#endif //OPEN_JSON_TYPE_TRAITS_PRIMITIVE_H
