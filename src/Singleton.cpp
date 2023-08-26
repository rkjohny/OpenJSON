#include "../include/base_types/Singleton.h"

using namespace open_json;

template<class T>
[[maybe_unused]] T const &Singleton<T>::getInstance() {
    return ms_singleton;
}
