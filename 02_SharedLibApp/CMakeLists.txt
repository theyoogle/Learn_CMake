cmake_minimum_required(VERSION 3.22)
project(MyGame
    VERSION 0.0.1
    LANGUAGES CXX
)
set(CMAKE_CXX_STANDARD 20)

#=================================
add_subdirectory(SharedCode)

#=================================
add_executable(Game
    standalone.cpp
)

#=================================
target_link_libraries(Game
    PRIVATE
        SharedCodeLib
)