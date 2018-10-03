# 指定cmke版本
cmake_minimum_required(VERSION 3.4.1)



include_directories(src/main/cpp/include) #添加头文件的位置

add_library(call-lib
        SHARED
        src/main/cpp/Hello.cpp) #添加.c源文件


add_library(native-lib
        SHARED
        IMPORTED)

set_target_properties(native-lib PROPERTIES IMPORTED_LOCATION ${PROJECT_SOURCE_DIR}/src/main/jniLibs/${ANDROID_ABI}/libnative-lib.so)



target_link_libraries(
        call-lib
        native-lib
        -ljnigraphics #JNI层,添加bitmap支持
        ) #选择要使用的库