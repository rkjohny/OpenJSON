#ifndef OPEN_JSON_OBJECT_H
#define OPEN_JSON_OBJECT_H

namespace open_json {
    class Object {
    public:
        constexpr Object() = default;

        virtual ~Object() = default;

        constexpr Object(Object &&other) noexcept = default;

        constexpr Object(const Object &other) = delete;

        constexpr Object(Object &other) = delete;

        constexpr Object &operator=(const Object &other) = delete;

        constexpr Object &operator=(const Object other) = delete;
    };
}

#endif //OPEN_JSON_OBJECT_H
