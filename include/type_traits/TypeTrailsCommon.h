#ifndef OPEN_JSON_TYPE_TRAILS_COMMON_H
#define OPEN_JSON_TYPE_TRAILS_COMMON_H

#include <type_traits>

namespace open_json {
    template<class T>
    struct Remove_CVR {
        typedef typename std::remove_reference<typename std::remove_cv<T>::type>::type type;
    };

    template<class T>
    struct Remove_CVRP {
        typedef typename std::remove_pointer<typename Remove_CVR<T>::type>::type type;
    };
}

#endif //OPEN_JSON_TYPE_TRAILS_COMMON_H
