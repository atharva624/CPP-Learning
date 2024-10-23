#include "Fraction.h"
#include<iostream>


int main() {
    Fraction f1(1, 2);
    Fraction f2(3, 4);
    Fraction sum = f1 + f2;
    Fraction neg = -f1;

    sum.display();
    neg.display();

    if (f1 == neg) {
        std::cout << "Fractions are equal" << std::endl;
    }
    else {
        std::cout << "Fractions are not equal" << std::endl;
    }

    return 0;
}
