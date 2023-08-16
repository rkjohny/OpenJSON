#ifndef OPEN_JSON_JSON_H
#define OPEN_JSON_JSON_H

#include <string>
#include <map>

namespace open_json {
    class Json;

    struct JsonValue {
    public:
        std::string name;
        std::string value;
        std::map<std::string, Json> subObject;
    };

    class Json {
    public:
        JsonValue value;

        Json parse(const std::string &jsonString);
    };
}


#endif //OPEN_JSON_JSON_H
