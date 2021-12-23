#include "binaryen-java.h"
#include "binaryen-c.h"

JNIEXPORT jobject JNICALL 
Java_WebAssembly_test(
    JNIEnv *env, 
    jclass this, 
    jbyteArray data
) {
    jsize size;
    jbyte* elements;
    BinaryenModuleRef module;

    size = (*env)->GetArrayLength(env, data);
    elements = (*env)->GetByteArrayElements(env, data, NULL);
    module = BinaryenModuleRead((char *)elements, size);
    (*env)->ReleaseByteArrayElements(env, data, elements, 0);

    BinaryenModulePrint(module);
    BinaryenModuleInterpret(module);
    BinaryenModuleDispose(module);

    return (void *)0;
}