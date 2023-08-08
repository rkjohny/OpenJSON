cmake_minimum_required(VERSION 3.26)
project(OpenJSON VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

add_compile_options(-c -O3 -g3 -Wall)

#setting the header and source files path required by libOpenJSON target
set(PROJECT_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)
set(PROJECT_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)

#exposing the header location to be included by other targets
set(LIB_OPEN_JSON_INCLUDE_DIR ${PROJECT_INCLUDE_DIR})

#building target
if (TARGET ${PROJECT_NAME})
    message("libOpenJSON is already defined")
else ()
    message("Building libcOpenJSON ...")

    #including header files
    include_directories(${LIB_OPEN_JSON_INCLUDE_DIR})

    file(GLOB_RECURSE LIB_OPEN_JSON_HEADERS ${LIB_OPEN_JSON_INCLUDE_DIR}/*.h)
    file(GLOB_RECURSE LIB_OPEN_JSON_SOURCES ${PROJECT_SOURCE_DIR}/*.cpp)

    #creating target libJson
    add_library(${PROJECT_NAME} STATIC ${LIB_OPEN_JSON_SOURCES} ${LIB_OPEN_JSON_HEADERS})
endif ()
