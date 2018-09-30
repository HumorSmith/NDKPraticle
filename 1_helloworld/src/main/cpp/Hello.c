//
// Created by eava_wu on 18-9-30.
//
#include "Hello.h"

JNIEXPORT jstring JNICALL
Java_com_example_a1_1opencv_1helloworld_MainActivity_getHello(JNIEnv *env, jobject instance) {
    return (*env)->NewStringUTF(env, "native hello world");
}