#include "Calculator.h"

int main() {
    Calculator calc;

    double factor = 2.0;

    calc.addOperation([factor](double x) { return x * factor; });

    calc.addOperation([&factor](double x) mutable { factor += 1.0; return x + factor; });

    calc.addOperation([](double x) { return x * x; });

    calc.execute(5);

    return 0;
}
