//
// Created by eava_wu on 18-10-2.
//

#ifndef PRACTICLE_HELLO_H
#define PRACTICLE_HELLO_H



#include "Java2CConvert.h"
#include "C2JavaConvert.h"

#ifdef __cplusplus
extern "C" {
#endif



JNIEXPORT jint JNICALL
Java_com_example_a3_1cmake_MainActivity_convertInt(JNIEnv *env, jobject instance, jint src);

JNIEXPORT jlong JNICALL
Java_com_example_a3_1cmake_MainActivity_convertLong(JNIEnv *env, jobject instance, jlong src);




#ifdef __cplusplus
}
#endif


#endif //PRACTICLE_HELLO_H
