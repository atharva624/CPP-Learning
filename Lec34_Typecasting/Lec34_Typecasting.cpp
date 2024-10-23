#include "CastDemo.h"

int main() {
    Circle circle;
    Square square;

    CastDemo demo;

    std::cout << "Testing Circle object:" << std::endl;
    demo.demonstrateCasts(&circle);

    std::cout << "\nTesting Square object:" << std::endl;
    demo.demonstrateCasts(&square);

    return 0;
}
