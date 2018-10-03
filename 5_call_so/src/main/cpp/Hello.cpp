//
// Created by eava_wu on 18-10-2.
//

#include <jni.h>
#include <BitmapUtil.h>


#ifdef __cplusplus
extern "C" {
#endif


JNIEXPORT jint JNICALL
Java_com_example_a5_1opencv_MainActivity_gray(JNIEnv *env, jobject instance, jobject bitmap) {
//   BitmapUtil的实现在so库里面
    BitmapUtil *bitmapUtil = new BitmapUtil;
    bitmapUtil->gray(env, bitmap);
    delete bitmapUtil;
    return JNI_TRUE;
} ;

#ifdef __cplusplus
}
#endif
