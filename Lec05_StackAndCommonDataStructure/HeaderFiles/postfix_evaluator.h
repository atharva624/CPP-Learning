#pragma once

#include <stack>
#include <string>
#include <sstream>
#include <cctype>

class PostfixEvaluator {
public:
    int evaluate(const std::string& expression);
};
