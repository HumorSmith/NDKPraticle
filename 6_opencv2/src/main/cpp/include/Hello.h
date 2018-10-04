//
// Created by eava_wu on 18-10-3.
//

#ifndef PRACTICLE_HELLO_H
#define PRACTICLE_HELLO_H

#include <jni.h>
#include <android/bitmap.h>
#include <opencv/cv.h>
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>
using namespace cv;
extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_a6_1opencv2_MainActivity_getVersion(JNIEnv *env, jobject instance);

#endif //PRACTICLE_HELLO_H
