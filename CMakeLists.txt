cmake_minimum_required(VERSION 3.6)
project(Accentator)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    accent.cpp Salonicator.cpp Salonicator.h Accentator.h Cyprator.h Cyprator.cpp Larisator.h Larisator.cpp Accentator.cpp)

add_executable(Accentator ${SOURCE_FILES})