// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from foo_containers.djinni

#pragma once

#include <atomic>
#include <experimental/optional>
#include "foo_containers_record.hpp"
#ifdef __cplusplus
extern "C" {
#endif

#include "dh__set_string.h"

#ifdef __cplusplus
}
#endif
struct DjinniSetString {
    static djinni::Handle<DjinniObjectHandle> fromCpp(const std::unordered_set<std::string> & dc);
    static std::unordered_set<std::string> toCpp(djinni::Handle<DjinniObjectHandle> dh);
    static djinni::Handle<DjinniOptionalObjectHandle>fromCpp(std::experimental::optional<std::unordered_set<std::string>> dc);
    static std::experimental::optional<std::unordered_set<std::string>> toCpp(djinni::Handle<DjinniOptionalObjectHandle> dh);
};