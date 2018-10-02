//
// Created by eava_wu on 18-10-2.
//

#include <Hello.h>
#ifdef __cplusplus
extern "C" {
#endif


JNIEXPORT jint JNICALL
Java_com_example_a4_1datatype_1bitmap_MainActivity_gray(JNIEnv *env, jobject instance, jobject bitmap){
    BitmapUtil *bitmapUtil = new BitmapUtil;
    bitmapUtil->gray(env, bitmap);
    delete bitmapUtil;
    return JNI_TRUE;
}

#ifdef __cplusplus
}
#endif
