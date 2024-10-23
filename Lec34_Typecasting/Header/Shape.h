#pragma once
#include <iostream>
#include <typeinfo>

class Shape {
public:
    virtual ~Shape() {}
    virtual void draw() const = 0;
};

class Circle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing Circle" << std::endl;
    }
    void radius() const {
        std::cout << "Circle radius method" << std::endl;
    }
};

class Square : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing Square" << std::endl;
    }
    void side() const {
        std::cout << "Square side method" << std::endl;
    }
};
