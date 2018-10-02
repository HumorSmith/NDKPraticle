//
// Created by eava_wu on 18-9-30.
//
#include "Hello.h"


#ifdef __cplusplus
extern "C" {
#endif
/**
用C语言格式
return (*env)->NewStringUTF(env, "Hello JNI !");
C++格式
return env->NewStringUTF((char *)"Hello JNI !");

查看源码发现，这两个对象不是一个类型,只是名字一样
#if defined(__cplusplus)
typedef _JNIEnv JNIEnv;
typedef _JavaVM JavaVM;
#else
typedef const struct JNINativeInterface* JNIEnv;
typedef const struct JNIInvokeInterface* JavaVM;
#endif
**/

JNIEXPORT jstring JNICALL
Java_com_example_a2_1opencv_1gray_MainActivity_getHello(JNIEnv *env, jobject instance) {
    return env->NewStringUTF((char *) " Hello extern c !");
}

#ifdef __cplusplus
}
#endif



