cmake_minimum_required(VERSION 3.10)

project(Tutorial_4 VERSION 2.0)

add_executable(Tutorial_4 tutorial_4.cxx)

option(USE_MYMATH "Use tutorial provied math implementation" ON)
# cmake 编译时修改此参数 cmake -DUSE_MYMATH=ON ./
# cmake 编译时修改此参数 cmake -DUSE_MYMATH=OFF ./
# 配置头文件中 #cmakedefine USE_MYMATH 

configure_file(tutorialConfig.h.in tutorialConfig.h)

if(USE_MYMATH)
    add_subdirectory(mathFunctions)
    list(APPEND EXTRA_LIBS mathFunctions)
    list(APPEND EXTRA_INCLUDES "${PROJECT_SOURCE_DIR}/mathFunctions")
endif()

target_link_libraries(Tutorial_4 PUBLIC ${EXTRA_LIBS})

target_include_directories(Tutorial_4 PUBLIC "${PROJECT_BINARY_DIR}" 
                                             ${EXTRA_INCLUDES})

