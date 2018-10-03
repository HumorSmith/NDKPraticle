//
// Created by eava_wu on 18-10-3.
//

#ifndef PRACTICLE_HELLO_H
#define PRACTICLE_HELLO_H

#include <jni.h>
#include <android/bitmap.h>

extern "C"
JNIEXPORT jint JNICALL
Java_com_example_a5_1opencv_MainActivity_gray(JNIEnv *env, jobject instance, jobject bitmap);
#endif //PRACTICLE_HELLO_H
