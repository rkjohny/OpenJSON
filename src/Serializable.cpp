#include "../include/Serializable.h"

using namespace open_json;


Serializable::Serializable(const shared_ptr<Serializable> &another) {

}

Serializable &Serializable::operator=(const shared_ptr<Serializable> &another) {
    return *this;
}
