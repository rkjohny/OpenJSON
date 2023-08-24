#ifndef OPEN_JSON_JSON_H
#define OPEN_JSON_JSON_H

#include "Object.h"

namespace open_json {
    class Json : public Object {
    public:
        Json();

        Json(Json &&other) = default;

        virtual ~Json();

        Json &operator=(Json &&other) = default;

        class Value {
        public:
            Value();

            Value(Value &&other) = default;

            virtual ~Value();

            Value &operator=(Value &&other) = default;
        };
    };
}


#endif //OPEN_JSON_JSON_H
