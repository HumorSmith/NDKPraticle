//
// Created by eava_wu on 18-10-2.
//

#include <C2JavaConvert.h>
#include "Hello.h"
#include <Java2CConvert.h>


#ifdef __cplusplus
extern "C" {
#endif


JNIEXPORT jint JNICALL
Java_com_example_a3_1cmake_MainActivity_convertInt(JNIEnv *env, jobject instance, jint src) {
    Java2CConvert *java2CConvert = new Java2CConvert();
    C2JavaConvert *c2JavaConvert = new C2JavaConvert();
    int cInt = java2CConvert->convertInt(env, src);
    return c2JavaConvert->convertInt(env, cInt);
}


JNIEXPORT jlong JNICALL
Java_com_example_a3_1cmake_MainActivity_convertLong(JNIEnv *env, jobject instance, jlong src) {
    Java2CConvert *java2CConvert = new Java2CConvert();
    C2JavaConvert *c2JavaConvert = new C2JavaConvert();
    long cInt = java2CConvert->convertLong(env, src);
    return c2JavaConvert->convertLong(env, cInt);
}


JNIEXPORT jstring JNICALL
Java_com_example_a3_1cmake_MainActivity_convertString(JNIEnv *env, jobject instance, jstring src) {
    Java2CConvert *java2CConvert = new Java2CConvert();
    C2JavaConvert *c2JavaConvert = new C2JavaConvert();
    const char *chars = java2CConvert->convertString(env, src);
    return c2JavaConvert->convertString(env, chars);
}


#ifdef __cplusplus
}
#endif

