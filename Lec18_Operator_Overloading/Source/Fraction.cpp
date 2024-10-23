#include "Fraction.h"
#include <iostream>

Fraction::Fraction(int num, int denom) : numerator(num), denominator(denom) {}

Fraction operator+(const Fraction& lhs, const Fraction& rhs) {
    return Fraction(lhs.numerator * rhs.denominator + rhs.numerator * lhs.denominator, lhs.denominator * rhs.denominator);
}

bool operator==(const Fraction& lhs, const Fraction& rhs) {
    return (lhs.numerator * rhs.denominator == rhs.numerator * lhs.denominator);
}

Fraction Fraction::operator-() const {
    return Fraction(-numerator, denominator);
}

void Fraction::display() const {
    std::cout << numerator << "/" << denominator << std::endl;
}
