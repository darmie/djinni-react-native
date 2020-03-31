// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from react.djinni

#include "NativeJavascriptCallback.hpp"  // my header
#include "Marshal.hpp"
#include "NativeJavascriptObject.hpp"

namespace djinni_generated {

NativeJavascriptCallback::NativeJavascriptCallback() : ::djinni::JniInterface<::JavascriptCallback, NativeJavascriptCallback>() {}

NativeJavascriptCallback::~NativeJavascriptCallback() = default;

NativeJavascriptCallback::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

NativeJavascriptCallback::JavaProxy::~JavaProxy() = default;

void NativeJavascriptCallback::JavaProxy::invoke(const std::vector<std::shared_ptr<::JavascriptObject>> & c_args) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeJavascriptCallback>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_invoke,
                           ::djinni::get(::djinni::List<::djinni_generated::NativeJavascriptObject>::fromCpp(jniEnv, c_args)));
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeJavascriptCallback::JavaProxy::invokeSingleArg(const std::shared_ptr<::JavascriptObject> & c_arg) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeJavascriptCallback>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_invokeSingleArg,
                           ::djinni::get(::djinni_generated::NativeJavascriptObject::fromCpp(jniEnv, c_arg)));
    ::djinni::jniExceptionCheck(jniEnv);
}

}  // namespace djinni_generated