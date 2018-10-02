//
// Created by eava_wu on 18-10-2.
//

#include "BitmapUtil.h"

int BitmapUtil::gray(JNIEnv *env, jobject bitmap) {
    AndroidBitmapInfo srcInfo, dstInfo;
    if (ANDROID_BITMAP_RESULT_SUCCESS != AndroidBitmap_getInfo(env, bitmap, &srcInfo)) {
        return false;
    }

    void *srcBuf;
    if (ANDROID_BITMAP_RESULT_SUCCESS != AndroidBitmap_lockPixels(env, bitmap, &srcBuf)) {
        return false;
    }
    int w = srcInfo.width;
    int h = srcInfo.height;

    int32_t *srcPixs = (int32_t *) srcBuf;

    int alpha = 0xFF << 24;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            // 获得像素的颜色
            int color = srcPixs[w * i + j];
            int red = ((color & 0x00FF0000) >> 16);
            int green = ((color & 0x0000FF00) >> 8);
            int blue = color & 0x000000FF;
            color = (red + green + blue) / 3;
            color = alpha | (color << 16) | (color << 8) | color;
            srcPixs[w * i + j] = color;
        }
    }
    AndroidBitmap_unlockPixels(env, bitmap);
    return true;
};