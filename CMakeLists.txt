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
)
