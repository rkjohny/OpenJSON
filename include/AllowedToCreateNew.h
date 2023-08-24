#ifndef OPEN_JSON_ALLOWED_TO_CREATE_NEW_H
#define OPEN_JSON_ALLOWED_TO_CREATE_NEW_H

#include "Common.h"

namespace open_json {
    class AllowedToCreateNew {
    public:
        constexpr AllowedToCreateNew() = default;

        virtual ~AllowedToCreateNew() = default;
    };
}

#endif //OPEN_JSON_ALLOWED_TO_CREATE_NEW_H
