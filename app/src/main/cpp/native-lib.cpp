#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring

JNICALL
Java_us_tx_austin_vima_bte_myfirstapplication_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
