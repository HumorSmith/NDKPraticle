//
// Created by eava_wu on 18-9-30.
//

//防止重复编译的头
#ifndef PRACTICLE_HELLO_H
#define PRACTICLE_HELLO_H

#include <android/log.h>
#include <jni.h>


//文件判断宏定义开头,如果是CPP文件，加入   extern "C" {
#ifdef __cplusplus
extern "C" {
#endif


JNIEXPORT jstring JNICALL
Java_com_example_a2_1opencv_1gray_MainActivity_getHello(JNIEnv *env, jobject instance);




//文件判断宏定义结尾,如果是CPP文件，加入   }  结尾，和前面的    extern "C" {   对应起来
#ifdef __cplusplus
}
#endif

//防止重复编译的头结束标识
#endif //PRACTICLE_HELLO_H

