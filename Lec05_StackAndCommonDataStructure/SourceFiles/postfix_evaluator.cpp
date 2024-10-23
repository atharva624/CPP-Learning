#include "postfix_evaluator.h"

int PostfixEvaluator::evaluate(const std::string& expression) {
    std::stack<int> stack;
    std::istringstream tokens(expression);
    std::string token;

    while (tokens >> token) {
        if (std::isdigit(token[0])) {
            stack.push(std::stoi(token));
        }
        else {
            int operand2 = stack.top(); stack.pop();
            int operand1 = stack.top(); stack.pop();
            switch (token[0]) {
            case '+': stack.push(operand1 + operand2); break;
            case '-': stack.push(operand1 - operand2); break;
            case '*': stack.push(operand1 * operand2); break;
            case '/': stack.push(operand1 / operand2); break;
            default: throw std::invalid_argument("Invalid operator");
            }
        }
    }
    return stack.top();
}
