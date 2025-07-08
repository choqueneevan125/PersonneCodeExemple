cmake_minimum_required(VERSION 3.10)
set(CMAKE_C_COMPILER=gcc)
set(CMAKE_CXX_COMPILER=g++)

project(Personne)


include_directories(include)
set(SOURCES_CODE src/main.cpp src/InfoPerso.cpp src/Personne.cpp)

set(CMAKE_CXX_STANDARD 17)


add_executable(Personne ${SOURCES_CODE})