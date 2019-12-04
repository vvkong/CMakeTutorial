cmake_minimum_required(VERSION 3.10)

project(Tutorial_2 VERSION 1.0)

add_executable(Tutorial_2 tutorial_2.cpp)

configure_file(tutorialConfig.h.in tutorialConfig.h)

target_include_directories(Tutorial_2 PUBLIC "${PROJECT_BINARY_DIR}")

