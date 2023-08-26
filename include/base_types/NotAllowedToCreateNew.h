#ifndef OPEN_JSON_NOT_ALLOWED_TO_CREATE_NEW_H
#define OPEN_JSON_NOT_ALLOWED_TO_CREATE_NEW_H

#include "../core/Common.h"

namespace open_json {
    class NotAllowedToCreateNew {
    public:
        constexpr NotAllowedToCreateNew() = delete;

        virtual ~NotAllowedToCreateNew() = delete;
    };
}

#endif //OPEN_JSON_NOT_ALLOWED_TO_CREATE_NEW_H
