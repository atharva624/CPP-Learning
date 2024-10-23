#include "DynamicArray.h"
#include <iostream>
#include <limits>

DynamicArray::DynamicArray(int cap) : size(0), capacity(cap) {
    arr = new int[capacity];
}

DynamicArray::~DynamicArray() {
    delete[] arr;
}

void DynamicArray::resizeArray() {
    capacity *= 2;
    int* newArr = new int[capacity];
    for (int i = 0; i < size; ++i) {
        newArr[i] = arr[i];
    }
    delete[] arr;
    arr = newArr;
}

void DynamicArray::addElement(int element) {
    if (size == capacity) {
        resizeArray();
    }
    arr[size++] = element;
}

void DynamicArray::removeElement(int index) {
    if (index >= 0 && index < size) {
        for (int i = index; i < size - 1; ++i) {
            arr[i] = arr[i + 1];
        }
        --size;
    }
    else {
        std::cout << "Invalid index!" << std::endl;
    }
}

void DynamicArray::updateElement(int index, int newValue) {
    if (index >= 0 && index < size) {
        arr[index] = newValue;
    }
    else {
        std::cout << "Invalid index!" << std::endl;
    }
}

void DynamicArray::displayElements() const {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int DynamicArray::getMax() const {
    int maxVal = std::numeric_limits<int>::min();
    for (int i = 0; i < size; ++i) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int DynamicArray::getMin() const {
    int minVal = std::numeric_limits<int>::max();
    for (int i = 0; i < size; ++i) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    return minVal;
}

float DynamicArray::getAverage() const {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return static_cast<float>(sum) / size;
}
