#include "Calculator.h"

void Calculator::addOperation(const std::function<double(double)>& op) {
    operations.push_back(op);
}

void Calculator::execute(double input) const {
    for (const auto& op : operations) {
        std::cout << op(input) << std::endl;
    }
}
