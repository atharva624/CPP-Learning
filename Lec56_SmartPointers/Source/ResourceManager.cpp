#include "ResourceManager.h"

void ResourceManager::addUniqueResource(const std::string& name) {
    uniqueResources.push_back(std::make_unique<Resource>(name));
}

void ResourceManager::addSharedResource(const std::string& name) {
    auto res = std::make_shared<Resource>(name);
    sharedResources.push_back(res);
    weakResources.push_back(res);
}

void ResourceManager::displayResources() const {
    for (const auto& res : uniqueResources) {
        res->display();
    }
    for (const auto& res : sharedResources) {
        res->display();
    }
    for (const auto& res : weakResources) {
        if (auto sharedRes = res.lock()) {
            sharedRes->display();
        }
        else {
            std::cout << "Weak resource expired." << std::endl;
        }
    }
}
