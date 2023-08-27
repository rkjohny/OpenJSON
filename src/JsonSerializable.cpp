#include "../include/JsonSerializable.h"

using namespace open_json;

template<class T>
void JsonSerializable<T>::deserialize(const Json::Value &jsonValue) {
    Deserializer::fromJson<T>(reinterpret_cast<T *> (this), jsonValue);
}

template<class T>
open_json::Json::Value &JsonSerializable<T>::serialize() {
    m_serializedValue = Serializer::toJson<T>(reinterpret_cast<const T *>(this));
    return m_serializedValue;
}
