#include <iostream>
#include <thread>
#include <vector>
#include <functional>
#include "Counter.h"

void incrementCounter(Counter& counter, int times) {
    for (int i = 0; i < times; ++i) {
        counter.increment();
    }
}

int main() {
    Counter counter;
    int numThreads = 5;
    int incrementsPerThread = 1000;

    std::vector<std::thread> threads;

    for (int i = 0; i < numThreads; ++i) {
        threads.emplace_back(std::bind(incrementCounter, std::ref(counter), incrementsPerThread));
    }

    for (auto& thread : threads) {
        thread.join();
    }

    std::cout << "Final Count: " << counter.getCount() << std::endl;

    return 0;
}
