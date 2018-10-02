# 指定cmke版本
cmake_minimum_required(VERSION 3.4.1)
add_definitions(-std=c++11)



add_library(native-lib
        SHARED
        src/main/cpp/Hello.cpp) #添加.c源文件
include_directories(src/main/cpp/include) #添加头文件的位置
target_link_libraries(native-lib
        ${log-lib}) #选择要使用的库