#ifndef OPEN_JSON_TYPE_TRAITS_VECTOR_H
#define OPEN_JSON_TYPE_TRAITS_VECTOR_H

#include <vector>
#include "TypeTrailsCommon.h"

namespace open_json {
    /**
     * check whether T is a std::vector
     */
    template<class T>
    struct Is_Vector {
        static const bool value = false;
    };

    template<class T, class Alloc>
    struct Is_Vector<std::vector<T, Alloc> > {
        static const bool value = true;
    };

    template<class T, class Alloc>
    struct Is_Vector<const std::vector<T, Alloc>> {
        static const bool value = true;
    };

    template<class T, class Alloc>
    struct Is_Vector<std::vector<T, Alloc> &> {
        static const bool value = true;
    };

    template<class T, class Alloc>
    struct Is_Vector<const std::vector<T, Alloc>&> {
        static const bool value = true;
    };

    template<class T, class Alloc>
    struct Is_Vector<std::vector<T, Alloc> &&> {
        static const bool value = true;
    };

    template<class T, class Alloc>
    struct Is_Vector<const std::vector<T, Alloc> &&> {
        static const bool value = true;
    };

    template<class T, class Alloc>
    struct Is_Vector<std::vector<T, Alloc> *> {
        static const bool value = true;
    };

    template<class T, class Alloc>
    struct Is_Vector<const std::vector<T, Alloc> *> {
        static const bool value = true;
    };

    template<class T, class Alloc>
    struct Is_Vector<const std::vector<T, Alloc> *const> {
        static const bool value = true;
    };
}

#endif //OPEN_JSON_TYPE_TRAITS_VECTOR_H
