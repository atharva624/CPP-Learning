#pragma once
#include <functional>
#include <vector>
#include <iostream>

class Calculator {
private:
    std::vector<std::function<double(double)>> operations;

public:
    void addOperation(const std::function<double(double)>& op);
    void execute(double input) const;
};
