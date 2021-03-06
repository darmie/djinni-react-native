// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from main.djinni

#pragma once

#include "DemoModule.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeDemoModule final : ::djinni::JniInterface<::DemoModule, NativeDemoModule> {
public:
    using CppType = std::shared_ptr<::DemoModule>;
    using CppOptType = std::shared_ptr<::DemoModule>;
    using JniType = jobject;

    using Boxed = NativeDemoModule;

    ~NativeDemoModule();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeDemoModule>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeDemoModule>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeDemoModule();
    friend ::djinni::JniClass<NativeDemoModule>;
    friend ::djinni::JniInterface<::DemoModule, NativeDemoModule>;

};

}  // namespace djinni_generated
