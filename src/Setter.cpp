#include "../include/Setter.h"

using namespace open_json;

template<class ClassT, class ArgT>
constexpr Setter<ClassT, ArgT>::Setter(Setter::SetterPtr fp, const char *name) : fp(fp), name(name) {
}
