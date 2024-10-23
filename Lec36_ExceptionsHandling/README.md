TaskManager Project
Problem Definition
You are required to implement a basic TaskManager class that can:

Validate the task name (non-empty) and task priority (0-10).
Update the task's priority by increasing it by 1, if valid.
Handle errors gracefully using exception handling when validation fails.
Solution
The TaskManager class provides two key functionalities:

Task Validation: Checks if the task name is non-empty and if the priority is within the allowed range (0-10).
Task Update: Updates the priority of a valid task by incrementing it by 1. If the task name or priority is invalid, an exception is thrown with a descriptive error message.
Approach
The updateTask() method first checks if the task name is valid (non-empty). If it’s invalid, an exception is thrown.
The validatePriority() method checks if the priority is between 0 and 10. If it's invalid, it throws an exception.
Once validated, the task's priority is incremented by 1, and the updated task details are printed.