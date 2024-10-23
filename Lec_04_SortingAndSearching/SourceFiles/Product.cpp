#include "product.h"
#include <iostream>

Product::Product(const std::string& name, float price) : name(name), price(price) {}

std::string Product::getName() const {
    return name;
}

float Product::getPrice() const {
    return price;
}

void ProductManager::addProduct(const std::string& name, float price) {
    products.emplace_back(name, price);
}

void ProductManager::sortByPrice() {
    int n = products.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (products[j].getPrice() > products[j + 1].getPrice()) {
                std::swap(products[j], products[j + 1]);
            }
        }
    }
}

void ProductManager::displayProducts() const {
    for (const auto& product : products) {
        std::cout << "Product: " << product.getName()
            << ", Price: " << product.getPrice() << "\n";
    }
}
