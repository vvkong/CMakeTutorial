cmake_minimum_required(VERSION 3.10)

project(Tutorial_5 VERSION 1.0)

add_executable(Tutorial_5 tutorial_5.cxx)

option(USE_MYMATH "use my math" ON)
configure_file(tutorialConfig.h.in tutorialConfig.h)

if(USE_MYMATH)
    add_subdirectory(mathFunctions)
    list(APPEND EXTRA_LIBS mathFunctions)
endif()

target_link_libraries(Tutorial_5 ${EXTRA_LIBS})

target_include_directories(Tutorial_5 PUBLIC "${PROJECT_BINARY_DIR}")


# 安装拷贝
# 设置安装路径
# set(CMAKE_INSTALL_PREFIX "/Users/wangrenxing/custom")
# CMAKE_INSTALL_PREFIX  #make install 的安装路径 set 修改无效，请用编译生成时携带参数-D修改
# CMAKE_BUILD_TYPE #生成的目标为debug或者release -DCMAKE_BUILD_TYPE=Release 
# CMAKE_C_FLAGS #gcc 的编译参数指定，这个非常好用，一般通过set 修改其值
# CMAKE_CXX_FLAGS #g++ 和上面CMAKE_C_FLAGS 类似
# CMAKE_CURRENT_SOURCE_DIR # 当前CMakeLists.txt所在的目录，主要用来定位某文件
# CMAKE_CURRENT_BINARY_DIR # 当前CMakeLists.txt对应的编译时的目录

install(TARGETS Tutorial_5 DESTINATION bin)
install(FILES "${PROJECT_BINARY_DIR}/tutorialConfig.h" DESTINATION include)

# cmake -L -DCMAKE_INSTALL_PREFIX=/Users/wangrenxing/custom .
# cmake --build .
# 使用命令 --prefix 可修改安装路径
# cmake --install --prefix /usr/local . # 不知为啥没其安装成功
# make install  --prefix /usr/local . # 亲测靠谱


# mkdir -p build && cd build && cmake .. && make 
