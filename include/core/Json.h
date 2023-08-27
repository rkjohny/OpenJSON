#ifndef OPEN_JSON_JSON_H
#define OPEN_JSON_JSON_H

#include "../base_types/NonCopyMoveAble.h"

namespace open_json {
    class Json : public NonCopyMoveAble {
    public:
        Json();

        Json(Json &&other) noexcept = default;

        ~Json() override;

        Json &operator=(Json &&other) noexcept = default;

        class Value : public NonCopyMoveAble {
        public:
            Value();

            Value(Value &&other) noexcept = default;

            ~Value() override;

            Value &operator=(Value &&other) noexcept = default;
        };
    };
}


#endif //OPEN_JSON_JSON_H
