//
// Created by eava_wu on 18-10-2.
//

#ifndef PRACTICLE_JAVACONVERTC_H
#define PRACTICLE_JAVACONVERTC_H

#include <jni.h>

class Java2CConvert {
public:
    int convertInt(JNIEnv *env, jint srcInt);

    long convertLong(JNIEnv *env, jlong srcLong);

    const char *convertString(JNIEnv *env, jstring srcString);


};

#endif //PRACTICLE_JAVACONVERTC_H
