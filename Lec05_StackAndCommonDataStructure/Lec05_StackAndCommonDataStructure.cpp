#include <iostream>
#include "postfix_evaluator.h"

int main() {
    PostfixEvaluator evaluator;

    std::string postfixExpression = "5 1 2 + 4 * + 3 -"; 
    int result = evaluator.evaluate(postfixExpression);
    std::cout << "Result of postfix evaluation: " << result << std::endl;

    return 0;
}
