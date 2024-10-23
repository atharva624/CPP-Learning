#include <iostream>
#include <cmath> 
#include "PrimeChecker.h"

int main() {
    int n, m;

   
    std::cout << "Enter a number to check if it's prime: ";
    std::cin >> n;
    std::cout << "Enter a number to find its square root: ";
    std::cin >> m;

    PrimeChecker checker;

    bool prime = checker.isPrime(n);
    if (prime)
        std::cout << n << " is a prime number.\n";
    else
        std::cout << n << " is not a prime number.\n";

    double squareRoot = std::sqrt(m);
    std::cout << "The square root of " << m << " is " << squareRoot << "\n";

    return 0;
}
