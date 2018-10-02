//
// Created by eava_wu on 18-9-30.
//
#include "C2JavaConvert.h"


jint C2JavaConvert::convertInt(JNIEnv *env, int srcInt) {
    return srcInt;
};

jlong C2JavaConvert::convertLong(JNIEnv *env, long srcLong) {
    return srcLong;
};

jstring C2JavaConvert::convertString(JNIEnv *env, const char *srcString) {
    return env->NewStringUTF(srcString);
};





