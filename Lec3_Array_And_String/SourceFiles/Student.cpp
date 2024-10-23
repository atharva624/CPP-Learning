#include <iostream>
#include "student.h"

// Function to add a new student
void addStudent(Student* students, int& count) {
    if (count >= 100) {
        std::cout << "Student limit reached!" << std::endl;
        return;
    }

    std::cout << "Enter name: ";
    std::cin >> students[count].name;
    std::cout << "Enter age: ";
    std::cin >> students[count].age;
    std::cout << "Enter 5 grades: ";
    for (int i = 0; i < 5; ++i) {
        std::cin >> students[count].grades[i];
    }
    count++;
}

// Function to calculate the average grade of a student
float calculateAverage(const Student* student) {
    float sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += student->grades[i];
    }
    return sum / 5;
}

// Function to display all students' information
void displayStudents(const Student* students, int count) {
    for (int i = 0; i < count; ++i) {
        std::cout << "Name: " << students[i].name << ", Age: " << students[i].age << ", Average Grade: " << calculateAverage(&students[i]) << std::endl;
    }
}

// Recursive function to count students with average grade above a threshold
int countAboveThreshold(const Student* students, int count, float threshold) {
    if (count <= 0) {
        return 0;
    }

    int avgCount = countAboveThreshold(students, count - 1, threshold);
    return (calculateAverage(&students[count - 1]) > threshold) ? avgCount + 1 : avgCount;
}
