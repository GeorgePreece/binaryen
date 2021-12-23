#include <jni.h>

#ifndef wasm_binaryen_java_h
#define wasm_binaryen_java_h

JNIEXPORT jobject JNICALL 
Java_WebAssembly_test(
    JNIEnv *, 
    jclass
);

#endif // wasm_binaryen_java_h