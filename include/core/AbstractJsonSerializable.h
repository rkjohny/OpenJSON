#ifndef OPEN_JSON_ABSTRACT_SERIALIZABLE_H
#define OPEN_JSON_ABSTRACT_SERIALIZABLE_H

#include "Json.h"
#include "../RegisterGetterSetter.h"
#include "../base_types/NonCopyMoveAble.h"

namespace open_json {
    class AbstractJsonSerializable : public NonCopyMoveAble {
    public:
        AbstractJsonSerializable() = default;

        virtual ~AbstractJsonSerializable() = default;

        virtual open_json::Json::Value &serialize() = 0;

        virtual void deserialize(const open_json::Json::Value &) = 0;

        REGISTER_GETTER_START
        REGISTER_GETTER_END

        REGISTER_SETTER_START
        REGISTER_SETTER_END

    protected:
        open_json::Json::Value m_serializedValue;
    };
}

#endif /* OPEN_JSON_ABSTRACT_SERIALIZABLE_H */
