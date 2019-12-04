cmake_minimum_required(VERSION 3.10)

add_library(mathFunctions mathFunctions.cxx)

# 将头文件暴露给使用者
target_include_directories(mathFunctions INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

# 安装拷贝
install(TARGETS mathFunctions DESTINATION lib)
install(FILES mathFunctions.h DESTINATION include)
