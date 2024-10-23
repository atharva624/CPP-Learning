#pragma once
#include <string>
#include <vector>

class Product {
public:
    Product(const std::string& name, float price);
    std::string getName() const;
    float getPrice() const;

private:
    std::string name;
    float price;
};

class ProductManager {
public:
    void addProduct(const std::string& name, float price);
    void sortByPrice();
    void displayProducts() const;

private:
    std::vector<Product> products;
};
