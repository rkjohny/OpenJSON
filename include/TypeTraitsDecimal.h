#ifndef OPEN_JSON_TYPE_TRAITS_DECIMAL_H
#define OPEN_JSON_TYPE_TRAITS_DECIMAL_H

#include "TypeTraitsFlot.h"
#include "TypeTraitsDouble.h"
#include "TypeTraitsLongDouble.h"

namespace open_json {
    /**
     * type check for Is_Decimal
     */
    template<class T>
    struct Is_Decimal {
    private:
        typedef typename Remove_CVR<T>::type U;

    public:
        static constexpr bool value = (Is_Float<U>::value ||
                                       Is_Double<U>::value ||
                                       Is_LongDouble<U>::value
        );
    };
}

#endif //OPEN_JSON_TYPE_TRAITS_DECIMAL_H
