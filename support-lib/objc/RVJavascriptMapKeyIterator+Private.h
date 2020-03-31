// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from react.djinni

#include "javascript_map_key_iterator.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@protocol RVJavascriptMapKeyIterator;

namespace djinni_generated {

class JavascriptMapKeyIterator
{
public:
    using CppType = std::shared_ptr<::JavascriptMapKeyIterator>;
    using CppOptType = std::shared_ptr<::JavascriptMapKeyIterator>;
    using ObjcType = id<RVJavascriptMapKeyIterator>;

    using Boxed = JavascriptMapKeyIterator;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated
