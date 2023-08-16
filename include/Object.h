#ifndef OPEN_JSON_OBJECT_H
#define OPEN_JSON_OBJECT_H

namespace open_json {
    class Object {
    public:
        Object() = default;

        virtual ~Object() = default;

        Object(Object &&other) noexcept = default;

        Object(const Object &other) = delete;

        Object(Object &other) = delete;

        Object &operator=(const Object &other) = delete;

        Object &operator=(const Object other) = delete;
    };
}

#endif //OPEN_JSON_OBJECT_H
