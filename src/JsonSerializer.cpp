#include "../include/core/JsonSerializer.h"

using namespace open_json;


template<class T>
open_json::Json::Value JsonSerializer::toJson(const T *const *object) {
    return {};
}

template<class T>
open_json::Json::Value JsonSerializer::toJson(const T *object) {
    return {};
}

template<class T>
open_json::Json::Value JsonSerializer::toJson(const T &object) {
    return {};
}

template<class T>
open_json::Json::Value JsonSerializer::toJson(const T &&object) {
    return {};
}