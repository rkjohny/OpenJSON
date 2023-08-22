#ifndef OPEN_JSON_JSON_PARSER_H
#define OPEN_JSON_JSON_PARSER_H

#include <string>
#include <map>
#include "Json.h"

namespace open_json {
    class JsonParser {
    public:
        [[maybe_unused]] static open_json::Json parser(std::string jsonStr);
    };
}

#endif //OPEN_JSON_JSON_PARSER_H