#pragma once
#include <iostream>

class DynamicArray {
private:
    int* arr;
    int size;
    int capacity;

    void resizeArray();

public:
    DynamicArray(int cap = 5);
    ~DynamicArray();

    void addElement(int element);
    void removeElement(int index);
    void updateElement(int index, int newValue);
    void displayElements() const;
    int getMax() const;
    int getMin() const;
    float getAverage() const;
};
