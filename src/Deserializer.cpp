#include "../include/Deserializer.h"
#include "../include/core/JsonDeserializer.h"

using namespace open_json;

template<class T>
void Deserializer::fromJson(T **object, Json::Value &jvalue) {
    JsonDeserializer::fromJson(object, jvalue);
}

template<class T>
void Deserializer::fromJson(T *object, const Json::Value &jvalue) {
    JsonDeserializer::fromJson(object, jvalue);
}

template<class T>
void Deserializer::fromJson(T &object, const Json::Value &jvalue) {
    JsonDeserializer::fromJson(object, jvalue);
}
