#include "Person.h"

int main() {
    Person person1(10, 25); // Parameterized constructor
    Person person2 = person1; // Copy constructor (deep copy)

    person1.mutateAge(30); // Change age using mutable member

    person1.printData();
    person2.printData();

    return 0;
}
