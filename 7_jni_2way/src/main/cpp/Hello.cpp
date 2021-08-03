//
// Created by eava_wu on 18-10-2.
//

#include <jni.h>
#include "Hello.h"

#include<android/log.h>


#define TAG "helloworld-jni" // 这个是自定义的LOG的标识
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG,TAG ,__VA_ARGS__) // 定义LOGD类型
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO,TAG ,__VA_ARGS__) // 定义LOGI类型
#define LOGW(...) __android_log_print(ANDROID_LOG_WARN,TAG ,__VA_ARGS__) // 定义LOGW类型
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR,TAG ,__VA_ARGS__) // 定义LOGE类型
#define LOGF(...) __android_log_print(ANDROID_LOG_FATAL,TAG ,__VA_ARGS__) // 定义LOGF类型

#ifdef __cplusplus
extern "C" {
#endif


jint add(JNIEnv *env, jobject clazz, jint a, jint b) {
    return a + b;
}

jint sub(JNIEnv *env, jobject clazz, jint a, jint b) {
    return a - b;
}

//回调函数 在这里面注册函数
jint  JNI_OnLoad(JavaVM* vm, void* reserved){
    JNIEnv* env = NULL;
    //env赋值
    LOGD("GetEnv");
    //获取JniEnv
    if(vm->GetEnv((void**)&env,JNI_VERSION_1_6)!= JNI_OK){
        LOGD("GetEnv Failed");
        return -1;
    }
    //获取一个class对象,对应java类MainActivity
    jclass  mainActivity = env->FindClass("com/jhzl/a7_jni_2way/MainActivity");

    /**
     * add : java方法名
     * (II)I 里面是两个jint,返回jnit
     * add，c函数指针,传递的参数应该是env,jobject,包括签名的(II)两个jint,一个jnit返回值
     *
     */
    JNINativeMethod methods_MainActivity[] = {
            {"add", "(II)I", (jint *) add},
            {"sub", "(II)I", (jint *) sub}

    };

    env->RegisterNatives(mainActivity,methods_MainActivity,sizeof(methods_MainActivity)/ sizeof(methods_MainActivity[0]));
    env->RegisterNatives(mainActivity,methods_MainActivity,sizeof(methods_MainActivity)/ sizeof(methods_MainActivity[1]));
    //返回jni 的版本
    return JNI_VERSION_1_6;
}


#ifdef __cplusplus
}
#endif
