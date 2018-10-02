# 指定cmke版本
cmake_minimum_required(VERSION 3.4.1)


add_library(native-lib
        SHARED
        src/main/cpp/BitmapUtil.cpp src/main/cpp/Hello.cpp ) #添加.c源文件
include_directories(src/main/cpp/include) #添加头文件的位置
target_link_libraries(
        ${log-lib}
        native-lib
        -ljnigraphics #JNI层,添加bitmap支持
        ) #选择要使用的库