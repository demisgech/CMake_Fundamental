cmake_minimum_required(VERSION 3.5)
project(HelloWorld
        VERSION 0.0.1
        DESCRIPTION "Hello world app."
        LANGUAGES CXX)
# Building multiple files
 # Not recommended
# file(GLOB_RECURSE SRC_FILES src/*.cpp)
# add_executable(excute main.cpp ${SRC_FILES})

# Target
add_executable(excute 
                main.cpp
                src/Node.cpp 
                src/LinkedList.cpp )

target_compile_features(excute PRIVATE cxx_std_20)
target_include_directories(excute PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)