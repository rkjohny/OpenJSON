#ifndef OPEN_JSON_TYPE_TRAITS_CLASS_H
#define OPEN_JSON_TYPE_TRAITS_CLASS_H

#include "TypeTraitsVector.h"
#include "TypeTraitsPrimitive.h"

namespace open_json {
    /**
    * Checks if T is a custom defined type
    */
    template<class T>
    struct [[maybe_unused]] Is_Class {
    private:
        typedef typename Remove_CVR<T>::type U;
        typedef typename Remove_CVRP<T>::type P;

    public:
        static constexpr bool value = (!Is_Vector<U>::value &&
                                       !Is_Primitive<U>::value &&
                                       std::is_class<U>::value
                                      ) ||
                                      (!Is_Vector<P>::value &&
                                       !Is_Primitive<P>::value &&
                                       std::is_class<P>::value
                                      );
    };
}

#endif //OPEN_JSON_TYPE_TRAITS_CLASS_H
