cmake_minimum_required(VERSION 3.10)
set(CMAKE_C_COMPILER=gcc)
set(CMAKE_CXX_COMPILER=g++)

project(Personne)


message(STATUS "C++ Compiler utilisé : ${CMAKE_CXX_COMPILER}")

if(CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    message(STATUS "Compilation avec Clang")
elseif(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    message(STATUS "Compilation avec GCC")
elseif(CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    message(STATUS "Compilation avec MSVC")
endif()


include_directories(include)
set(SOURCES_CODE src/main.cpp src/InfoPerso.cpp src/Personne.cpp)

set(CMAKE_CXX_STANDARD 17)


add_executable(Personne ${SOURCES_CODE})