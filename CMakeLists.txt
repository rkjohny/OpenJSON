cmake_minimum_required(VERSION 3.26)
project(OpenJSON)

set(CMAKE_CXX_STANDARD 17)

add_library(OpenJSON
        include/Getter.h
        include/Setter.h
        include/Json.h
        src/Json.cpp
        src/LinkedStack.cpp
        include/LinkedStack.h
        include/Common.h
        include/Object.h
        src/Singleton.cpp
        include/Singleton.h
        include/TypeTraits.h
        include/TypeTraitsChar.h
        include/TypeTraitsInt8.h
        include/TypeTrailsCommon.h
        include/TypeTraitsUint8.h
        include/TypeTraitsInt16.h
        include/TypeTraitsUint16.h
        include/TypeTraitsInt32.h
        include/TypeTraitsUint32.h
        include/TypeTraitsInt64.h
        include/TypeTraitsUint64.h
        include/TypeTraitsFlot.h
        include/TypeTraitsDouble.h
        include/TypeTraitsLongDouble.h
        include/TypeTraitsBool.h
        include/TypeTraitsString.h
        include/TypeTraitsVector.h
        include/TypeTraitsEnum.h
        include/TypeTraitsClass.h
        include/TypeTraitsPrimitive.h
        include/TypeTraitsDecimal.h
        include/TypeTraitsInteger.h
)
