#pragma once

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction(int num = 0, int denom = 1);
    friend Fraction operator+(const Fraction& lhs, const Fraction& rhs);
    friend bool operator==(const Fraction& lhs, const Fraction& rhs);
    Fraction operator-() const;
    void display() const;
};
