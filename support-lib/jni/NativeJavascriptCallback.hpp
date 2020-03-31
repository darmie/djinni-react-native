// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from react.djinni

#pragma once

#include "djinni_support.hpp"
#include "javascript_callback.hpp"

namespace djinni_generated {

class NativeJavascriptCallback final : ::djinni::JniInterface<::JavascriptCallback, NativeJavascriptCallback> {
public:
    using CppType = std::shared_ptr<::JavascriptCallback>;
    using CppOptType = std::shared_ptr<::JavascriptCallback>;
    using JniType = jobject;

    using Boxed = NativeJavascriptCallback;

    ~NativeJavascriptCallback();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeJavascriptCallback>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeJavascriptCallback>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeJavascriptCallback();
    friend ::djinni::JniClass<NativeJavascriptCallback>;
    friend ::djinni::JniInterface<::JavascriptCallback, NativeJavascriptCallback>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::JavascriptCallback
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        void invoke(const std::vector<std::shared_ptr<::JavascriptObject>> & args) override;
        void invokeSingleArg(const std::shared_ptr<::JavascriptObject> & arg) override;

    private:
        friend ::djinni::JniInterface<::JavascriptCallback, ::djinni_generated::NativeJavascriptCallback>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("com/rushingvise/reactcpp/JavascriptCallback") };
    const jmethodID method_invoke { ::djinni::jniGetMethodID(clazz.get(), "invoke", "(Ljava/util/ArrayList;)V") };
    const jmethodID method_invokeSingleArg { ::djinni::jniGetMethodID(clazz.get(), "invokeSingleArg", "(Lcom/rushingvise/reactcpp/JavascriptObject;)V") };
};

}  // namespace djinni_generated
