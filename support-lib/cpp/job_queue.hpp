// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from react.djinni

#pragma once

#include <memory>

class Job;

class JobQueue {
public:
    virtual ~JobQueue() {}

    virtual std::shared_ptr<Job> poll() = 0;

    virtual void interruptPoll() = 0;
};
