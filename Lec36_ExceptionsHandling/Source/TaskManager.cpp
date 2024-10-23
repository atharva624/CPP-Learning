#include <iostream>
#include <stdexcept>
#include "TaskManager.h"

TaskManager::TaskManager() {}

TaskManager::~TaskManager() {}

int TaskManager::validatePriority(int priority) {
    if (priority < 0 || priority > 10) {
        throw std::invalid_argument("Invalid priority value! Must be between 0 and 10.");
    }
    return priority;
}

void TaskManager::updateTask(const std::string& taskName, int& priority) {
    try {
        if (taskName.empty()) {
            throw std::invalid_argument("Task name cannot be empty!");
        }

        std::cout << "Validating task: " << taskName << std::endl;
        validatePriority(priority);

        priority += 1;
        std::cout << "Task '" << taskName << "' updated. New priority: " << priority << std::endl;

    }
    catch (const std::invalid_argument& e) {
        std::cerr << "Task update failed: " << e.what() << std::endl;
    }
}
