#include "binaryen-java.h"

JNIEXPORT jobject JNICALL 
Java_WebAssembly_test(
    JNIEnv *env, 
    jclass this
) {
    puts("Hello, World!");
    return (void *)0;
}