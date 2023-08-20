#ifndef OPEN_JSON_TYPE_TRAITS_INTEGER_H
#define OPEN_JSON_TYPE_TRAITS_INTEGER_H

#include "TypeTraitsInt8.h"
#include "TypeTraitsUint8.h"
#include "TypeTraitsInt16.h"
#include "TypeTraitsUint16.h"
#include "TypeTraitsInt32.h"
#include "TypeTraitsUint32.h"
#include "TypeTraitsInt64.h"
#include "TypeTraitsUint64.h"

namespace open_json {
    /**
     * type check for integers.
     * considering char is not integer
     */
    template<class T>
    struct Is_Integer {
        static constexpr bool value = (Is_Int8<T>::value || Is_UInt8<T>::value ||
                                       Is_Int16<T>::value || Is_UInt16<T>::value ||
                                       Is_Int32<T>::value || Is_UInt32<T>::value ||
                                       Is_Int64<T>::value || Is_UInt64<T>::value
        );
    };
}

#endif //OPEN_JSON_TYPE_TRAITS_INTEGER_H
