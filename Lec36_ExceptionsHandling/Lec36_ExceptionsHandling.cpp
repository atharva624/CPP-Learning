#include "TaskManager.h"

int main() {
    TaskManager manager;

    int priority = 5;
    manager.updateTask("Task1", priority);

    int invalidPriority = 12;
    manager.updateTask("Task2", invalidPriority);

    manager.updateTask("", priority);

    return 0;
}
