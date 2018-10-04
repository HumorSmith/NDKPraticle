cmake_minimum_required(VERSION 3.6)
set(CMAKE_VERBOSE_MAKEFILE on)
set(libs "${CMAKE_SOURCE_DIR}/src/main/jniLibs")
add_library(native-lib
        SHARED
        src/main/cpp/Hello.cpp ) #添加.c源文件

include_directories(src/main/cpp/include) #添加头文件的位置

#添加库
add_library(libopencv_java3 SHARED IMPORTED )

set_target_properties(libopencv_java3 PROPERTIES
        IMPORTED_LOCATION "${libs}/${ANDROID_ABI}/libopencv_java3.so")

target_link_libraries( # Specifies the target library.
        native-lib -ljnigraphics libopencv_java3
        # Links the target library to the log library
        # included in the NDK.
        ${log-lib} )

