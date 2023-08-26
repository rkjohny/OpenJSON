#include "../include/Serializer.h"
#include "../include/core/JsonSerializer.h"


using namespace open_json;

template<class T>
open_json::Json::Value Serializer::toJson(const T *const *object) {
    return JsonSerializer::toJson(object);
}

template<class T>
open_json::Json::Value Serializer::toJson(const T *object) {
    return JsonSerializer::toJson(object);
}

template<class T>
open_json::Json::Value Serializer::toJson(const T &object) {
    return JsonSerializer::toJson(object);
}

template<class T>
open_json::Json::Value Serializer::toJson(const T &&object) {
    return JsonSerializer::toJson(std::move(object));
}
