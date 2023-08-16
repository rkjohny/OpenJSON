#include "../include/Singleton.h"

using namespace open_json;

template<class T>
[[maybe_unused]] T const *Singleton<T>::get() {
    return &m_singleton;
}

template<class T>
[[maybe_unused]] T const &Singleton<T>::getInstance() {
    return m_singleton;
}
