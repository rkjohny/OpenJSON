#ifndef OPEN_JSON_JSON_DESERIALIZER_H
#define OPEN_JSON_JSON_DESERIALIZER_H

#include "../base_types/Static.h"
#include "Json.h"

namespace open_json {

    class JsonDeserializer : public Static {
    public:
        template<class T>
        static void fromJson(T &object, const open_json::Json::Value &jsonValue);

        template<class T>
        static void fromJson(T *object, const open_json::Json::Value &jsonValue);

        template<class T>
        static void fromJson(T **object, open_json::Json::Value &jsonValue);
    };
} // open_json

#endif //OPEN_JSON_JSON_DESERIALIZER_H
