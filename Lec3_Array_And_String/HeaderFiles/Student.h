#pragma once
#include <string>

struct Student {
    std::string name;
    int age;
    float grades[5]; 
};

// Function declarations
void addStudent(Student* students, int& count);
float calculateAverage(const Student* student);
void displayStudents(const Student* students, int count);
int countAboveThreshold(const Student* students, int count, float threshold);
