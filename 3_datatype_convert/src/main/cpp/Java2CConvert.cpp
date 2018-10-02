//
// Created by eava_wu on 18-9-30.
//
#include "include/Java2CConvert.h"


int Java2CConvert::convertInt(JNIEnv *env, jint srcInt) {
    return srcInt;
};

long Java2CConvert::convertLong(JNIEnv *env, jlong srcLong) {
    return srcLong;
};

const  char *Java2CConvert::convertString(JNIEnv *env, jstring srcString) {
    const char *nativeString = env->GetStringUTFChars(srcString, JNI_FALSE);
    return nativeString;
};

