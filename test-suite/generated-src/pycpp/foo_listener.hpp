// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from foo_listener.djinni

#pragma once

#include <chrono>
#include <cstdint>
#include <experimental/optional>
#include <string>
#include <vector>

namespace testsuite {

struct FooSomeOtherRecord;

class FooListener {
public:
    virtual ~FooListener() {}

    virtual std::string on_string_change(const std::string & private_string) = 0;

    virtual int32_t get_private_int() = 0;

    virtual std::string on_changes_string_returned(int32_t i, float f, const std::string & s, const std::vector<uint8_t> & binar, bool b, const std::chrono::system_clock::time_point & d) = 0;

    virtual std::vector<uint8_t> on_changes_binary_returned(int32_t i, float f, const std::string & s, const std::vector<uint8_t> & binar, bool b, const std::chrono::system_clock::time_point & d) = 0;

    virtual std::chrono::system_clock::time_point on_changes_date_returned(int32_t i, float f, const std::string & s, const std::vector<uint8_t> & binar, bool b, const std::chrono::system_clock::time_point & d) = 0;

    virtual int32_t on_changes_int_returned(int32_t i, float f, const std::string & s, const std::vector<uint8_t> & binar, bool b, const std::chrono::system_clock::time_point & d) = 0;

    virtual FooSomeOtherRecord on_changes_record_returned(int32_t n1, int32_t n2) = 0;

    virtual std::experimental::optional<std::string> on_changes_string_optional_returned(std::experimental::optional<int32_t> i, float f, const std::experimental::optional<std::string> & s, const std::vector<uint8_t> & binar, int32_t b, const std::chrono::system_clock::time_point & d) = 0;

    virtual std::experimental::optional<int32_t> on_changes_int_optional_returned(std::experimental::optional<int32_t> i, float f, const std::experimental::optional<std::string> & s, const std::vector<uint8_t> & binar, int32_t b, const std::chrono::system_clock::time_point & d) = 0;

    virtual void cause_py_exception(const std::string & exception_arg) = 0;

    virtual void cause_zero_division_error() = 0;
};

}  // namespace testsuite