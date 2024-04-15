cmake_minimum_required(VERSION 3.22)
project(MyGame
    VERSION 0.0.1
    LANGUAGES CXX
)

#=================================
add_executable(Game
    standalone.cpp
)

add_executable(Game_VST
    vst.cpp
)