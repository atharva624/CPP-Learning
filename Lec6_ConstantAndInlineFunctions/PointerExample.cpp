#include <iostream>
#include "PointerExample.h"

void PointerExample::showPointerToConstData() {
    int value1 = 10;
    int value2 = 20;
    const int* ptrToConstData = &value1;

    std::cout << "Pointer to const data initially points to value1: " << *ptrToConstData << std::endl;

    ptrToConstData = &value2;
    std::cout << "Pointer to const data now points to value2: " << *ptrToConstData << std::endl;
}

void PointerExample::showConstPointer() {
    int value3 = 50;
    int* const constPtr = &value3;

    std::cout << "Const pointer initially points to value3: " << *constPtr << std::endl;

    *constPtr = 60;
    std::cout << "After modifying, const pointer points to value3 with new value: " << *constPtr << std::endl;
}
