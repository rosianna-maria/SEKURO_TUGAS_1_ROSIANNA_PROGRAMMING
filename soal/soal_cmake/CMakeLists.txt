cmake_minimum_required(VERSION 3.10)
project(robot)

include_directories(include)

add_executable(robot
    src/main.cpp
    src/robot.cpp
    src/robotair.cpp
)

set_target_properties(robot PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin
)
