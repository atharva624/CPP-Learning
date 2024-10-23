#include <iostream>
#include "student.h"

int main() {
    Student students[100]; 
    int count = 0; 

    for (int i = 0; i < 1; ++i) { 
        addStudent(students, count);
    }

    
    std::cout << "\nAll Students:\n";
    displayStudents(students, count);

    float threshold;
    std::cout << "\nEnter grade threshold: ";
    std::cin >> threshold;
    int aboveCount = countAboveThreshold(students, count, threshold);
    std::cout << "Number of students with average grade above " << threshold << ": " << aboveCount << std::endl;

    return 0;
}
