#include "Person.h"
#include <iostream>

Person::Person(int size, int ageVal) : age(ageVal) {
    data = new int[size];
    for (int i = 0; i < size; ++i) {
        data[i] = i;
    }
}

Person::Person(const Person& other) : age(other.age) {
    data = new int[10]; // Assuming size is 10 for simplicity
    for (int i = 0; i < 10; ++i) {
        data[i] = other.data[i];
    }
}

Person::~Person() {
    delete[] data;
}

void Person::mutateAge(int newAge) const {
    age = newAge;
}

void Person::printData() const {
    std::cout << "Data: ";
    for (int i = 0; i < 10; ++i) {
        std::cout << data[i] << " ";
    }
    std::cout << "\nAge: " << age << std::endl;
}
