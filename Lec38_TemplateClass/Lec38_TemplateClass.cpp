#include <iostream>
#include "MaxFinder.h"

int main() {
    MaxFinder<int> intFinder;
    MaxFinder<double> doubleFinder;
    MaxFinder<std::string> stringFinder;

    std::cout << "Max Integer: " << intFinder.findMax({ 1, 3, 5, 2, 4 }) << std::endl;
    std::cout << "Max Double: " << doubleFinder.findMax({ 1.5, 3.2, 5.1, 2.4, 4.8 }) << std::endl;
    std::cout << "Max String: " << stringFinder.findMax({ "apple", "orange", "banana", "grape" }) << std::endl;

    return 0;
}
