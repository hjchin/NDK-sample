#include <jni.h>
#include <string>

std::int64_t counter = 0;

extern "C" JNIEXPORT jstring JNICALL
Java_com_rakuten_counter_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    counter++;
    std::string counterStr = std::to_string(counter);
    return env->NewStringUTF(counterStr.c_str());
}
