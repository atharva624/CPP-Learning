#include "ResourceManager.h"

int main() {
    ResourceManager manager;

    manager.addUniqueResource("Unique Resource 1");
    manager.addSharedResource("Shared Resource 1");
    manager.addSharedResource("Shared Resource 2");

    manager.displayResources();

    return 0;
}
