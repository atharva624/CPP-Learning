#pragma once
#pragma once
#include <memory>
#include <vector>
#include "Resource.h"

class ResourceManager {
private:
    std::vector<std::unique_ptr<Resource>> uniqueResources;
    std::vector<std::shared_ptr<Resource>> sharedResources;
    std::vector<std::weak_ptr<Resource>> weakResources;

public:
    void addUniqueResource(const std::string& name);
    void addSharedResource(const std::string& name);
    void displayResources() const;
};
