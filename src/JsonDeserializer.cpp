#include "../include/core/JsonDeserializer.h"

using namespace open_json;

template<class T>
void JsonDeserializer::fromJson(T **object, Json::Value &jvalue) {

}

template<class T>
void JsonDeserializer::fromJson(T *object, const Json::Value &jvalue) {

}

template<class T>
void JsonDeserializer::fromJson(T &object, const Json::Value &jvalue) {

}
