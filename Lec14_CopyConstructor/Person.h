#pragma once

class Person {
private:
    int* data;
    mutable int age;

public:
    Person(int size, int ageVal);
    Person(const Person& other); // Copy constructor
    ~Person();
    void mutateAge(int newAge) const;
    void printData() const;
};
