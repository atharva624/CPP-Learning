#pragma once
#include <string>

class TaskManager {
public:
    TaskManager();
    ~TaskManager();

    void updateTask(const std::string& taskName, int& priority);
    int validatePriority(int priority);
};
