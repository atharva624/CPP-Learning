#include "PrimeChecker.h"

// Method to check if a number is prime
bool PrimeChecker::isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0)
            return false;
    }
    return true;
}
