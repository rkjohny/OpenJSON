#include "../include/base_types/Serializable.h"

using namespace open_json;


Serializable::Serializable(const shared_ptr<Serializable> &) {

}

Serializable &Serializable::operator=(const shared_ptr<Serializable> &) {
    return *this;
}
