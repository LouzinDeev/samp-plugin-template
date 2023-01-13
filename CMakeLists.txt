
cmake_minimum_required (VERSION 3.8)

project ("Plugin" VERSION 1.0.0)

list(APPEND CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/Plugin/Deps/cmake-modules")

set(SDK "${CMAKE_SOURCE_DIR}/Plugin/Deps/sdk")
set(GDK "${CMAKE_SOURCE_DIR}/Plugin/Deps/sampgdk")
set(RAKNET "${CMAKE_SOURCE_DIR}/Plugin/Deps/raknet")

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/sampsvr/plugins)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

add_subdirectory ("Plugin")