#include "CastDemo.h"

void CastDemo::demonstrateCasts(Shape* shape) {
    // Upcasting: Shape* pointing to derived object
    shape->draw();

    // Downcasting using dynamic_cast
    if (Circle* circle = dynamic_cast<Circle*>(shape)) {
        std::cout << "Dynamic cast to Circle succeeded" << std::endl;
        circle->radius();
    }
    else if (Square* square = dynamic_cast<Square*>(shape)) {
        std::cout << "Dynamic cast to Square succeeded" << std::endl;
        square->side();
    }
    else {
        std::cout << "Dynamic cast failed" << std::endl;
    }

    // Static cast to convert Shape* to Circle* (unsafe if incorrect)
    Circle* staticCircle = static_cast<Circle*>(shape);
    staticCircle->radius();

    // Const cast example
    const Shape* constShape = shape;
    Shape* mutableShape = const_cast<Shape*>(constShape);
    mutableShape->draw();

    // Reinterpret cast for low-level pointer conversion
    long intAddress = reinterpret_cast<long>(shape);
    std::cout << "Reinterpreted address: " << intAddress << std::endl;

    // Using typeid for RTTI
    std::cout << "Type of shape is: " << typeid(*shape).name() << std::endl;
}
