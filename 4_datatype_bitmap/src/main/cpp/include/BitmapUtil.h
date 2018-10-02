//
// Created by eava_wu on 18-10-2.
//

#ifndef PRACTICLE_BITMAPUTIL_H
#define PRACTICLE_BITMAPUTIL_H

#include <jni.h>
#include <android/bitmap.h>
class BitmapUtil {
public:
    int gray(JNIEnv *env, jobject bitmap);
};

#endif //PRACTICLE_BITMAPUTIL_H
