#include "Resource.h"

Resource::Resource(const std::string& name) : name(name) {}

void Resource::display() const {
    std::cout << "Resource: " << name << std::endl;
}
