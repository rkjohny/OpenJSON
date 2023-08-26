#ifndef OPEN_JSON_SERIALIZABLE_T_H
#define OPEN_JSON_SERIALIZABLE_T_H

#include "core/AbstractJsonSerializable.h"
#include "Serializer.h"
#include "Deserializer.h"

namespace open_json {

    template<class T>
    class JsonSerializable : public AbstractJsonSerializable {
    public:
        JsonSerializable() = default;

        virtual ~JsonSerializable() = default;

        open_json::Json::Value &serialize() override;

        void deserialize(const open_json::Json::Value &jvalue) override;

        REGISTER_GETTER_INCLUDING_BASE_START(AbstractJsonSerializable)
        REGISTER_GETTER_INCLUDING_BASE_END

        REGISTER_SETTER_INCLUDING_BASE_START(AbstractJsonSerializable)
        REGISTER_SETTER_INCLUDING_BASE_END
    };
}


#endif //OPEN_JSON_SERIALIZABLE_T_H
