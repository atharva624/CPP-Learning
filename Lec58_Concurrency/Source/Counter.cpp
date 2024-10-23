#include "Counter.h"

Counter::Counter() : count(0) {}

void Counter::increment() {
    std::lock_guard<std::mutex> lock(mtx);
    count++;
}

int Counter::getCount() const {
    return count;
}
