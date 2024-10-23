#pragma once
#include <mutex>

class Counter {
private:
    int count;
    std::mutex mtx;

public:
    Counter();
    void increment();
    int getCount() const;
};
