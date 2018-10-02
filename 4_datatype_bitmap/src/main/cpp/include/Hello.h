//
// Created by eava_wu on 18-9-30.
//

#ifndef PRACTICLE_HELLO_H
#define PRACTICLE_HELLO_H

#include <android/log.h>
#include <BitmapUtil.h>


#ifdef __cplusplus
extern "C" {
#endif


JNIEXPORT jint JNICALL
Java_com_example_a4_1datatype_1bitmap_MainActivity_gray(JNIEnv *env, jobject instance,
                                                        jobject bitmap);

#ifdef __cplusplus
}
#endif
#endif