//
// Created by eava_wu on 18-9-30.
//

//防止重复编译的头
#ifndef PRACTICLE_HELLO_H
#define PRACTICLE_HELLO_H

#include <android/log.h>
#include <jni.h>


class C2JavaConvert {
public:

    jint convertInt(JNIEnv *env, int srcInt);
    jlong convertLong(JNIEnv *env, long srcLong);
    jstring convertString(JNIEnv *env, const char* srcString);
};

//防止重复编译的头结束标识
#endif //PRACTICLE_HELLO_H

