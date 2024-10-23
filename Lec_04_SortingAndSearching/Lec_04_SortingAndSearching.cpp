#include <iostream>
#include "product.h"

int main() {
    ProductManager manager;

    manager.addProduct("Laptop", 1200.0f);
    manager.addProduct("Phone", 800.0f);
    manager.addProduct("Headphones", 150.0f);
    manager.addProduct("Monitor", 300.0f);
    manager.addProduct("Keyboard", 100.0f);

    std::cout << "All Products (Before Sorting):\n";
    manager.displayProducts();

    std::cout << "\nAll Products (After Sorting by Price):\n";
    manager.sortByPrice();
    manager.displayProducts();

    return 0;
}
