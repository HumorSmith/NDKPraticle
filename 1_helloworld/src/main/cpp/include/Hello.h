//
// Created by eava_wu on 18-9-30.
//

#ifndef PRACTICLE_HELLO_H
#define PRACTICLE_HELLO_H

#include <android/log.h>
#include <jni.h>

JNIEXPORT jstring JNICALL
Java_com_example_a1_1opencv_1helloworld_MainActivity_getHello(JNIEnv *env, jobject instance);
#endif //PRACTICLE_HELLO_H
