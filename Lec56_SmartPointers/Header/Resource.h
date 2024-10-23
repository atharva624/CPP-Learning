#pragma once
#include <iostream>

class Resource {
private:
    std::string name;

public:
    Resource(const std::string& name);
    void display() const;
};
