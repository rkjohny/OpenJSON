#ifndef OPEN_JSON_SERIALIZER_H
#define OPEN_JSON_SERIALIZER_H

#include "base_types/Static.h"
#include "core/Json.h"

namespace open_json {
    class Serializer : public Static {
    public:
        template<class T>
        static open_json::Json::Value toJson(const T &&object);

        template<class T>
        static open_json::Json::Value toJson(const T &object);

        template<class T>
        static open_json::Json::Value toJson(const T *object);

        template<class T>
        static open_json::Json::Value toJson(const T *const *object);
    };
}


#endif //OPEN_JSON_SERIALIZER_H
