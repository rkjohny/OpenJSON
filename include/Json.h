#ifndef OPEN_JSON_JSON_H
#define OPEN_JSON_JSON_H

#include "Object.h"

namespace open_json {
    class Json : public Object {
    public:
        Json();

        Json(Json &&other) noexcept = default;

        ~Json() override;

        Json &operator=(Json &&other) noexcept = default;

        class Value {
        public:
            Value();

            Value(Value &&other) noexcept = default;

            virtual ~Value();

            Value &operator=(Value &&other) noexcept = default;
        };
    };
}


#endif //OPEN_JSON_JSON_H
