#ifndef OPEN_JSON_SERIALIZABLE_H
#define OPEN_JSON_SERIALIZABLE_H

#include <memory>
#include "Common.h"
#include "AllowedToCreateNew.h"
#include "CopyAbleMoveAble.h"

namespace open_json {
    class Serializable : virtual public CopyAbleMoveAble {
    public:
        virtual std::string toString(const Serializable &obj) = 0;

        virtual std::string toJson(const Serializable &obj) = 0;
    };

} // open_json

#endif //OPEN_JSON_SERIALIZABLE_H
