#ifndef OPEN_JSON_OBJECT_H
#define OPEN_JSON_OBJECT_H

#include "NonCopyMoveAble.h"

namespace open_json {
    class Object : public NonCopyMoveAble {
    public:
        explicit Object() = default;
        virtual ~Object() = default;

        Object(Object &&other) noexcept = default;
        Object &operator=(Object &&other) = default;
    };
}

#endif //OPEN_JSON_OBJECT_H
