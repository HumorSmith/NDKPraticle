//
// Created by eava_wu on 18-10-2.
//

#include <jni.h>
#include "Hello.h"

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jstring JNICALL
Java_com_example_a6_1opencv2_MainActivity_getVersion(JNIEnv *env, jobject instance) {
    const char *version = CV_VERSION;
    return env->NewStringUTF(version);;
} ;

#ifdef __cplusplus
}
#endif
