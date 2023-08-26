#include "../include/Getter.h"

using namespace open_json;

template<class ClassT, class ReturnT>
constexpr Getter<ClassT, ReturnT>::Getter(Getter::GetterPtr fp, const char *name) : fp(fp), name(name) {
}
