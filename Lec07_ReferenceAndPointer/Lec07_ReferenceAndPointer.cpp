#include "DynamicArray.h"
#include <iostream>

int main() {
    DynamicArray arr;

    int choice;
    do {
        std::cout << "\n1. Add Element\n2. Remove Element\n3. Update Element\n4. Display Elements\n5. Get Max\n6. Get Min\n7. Get Average\n0. Exit\n";
        std::cin >> choice;

        switch (choice) {
        case 1: {
            int element;
            std::cout << "Enter element to add: ";
            std::cin >> element;
            arr.addElement(element);
            break;
        }
        case 2: {
            int index;
            std::cout << "Enter index to remove: ";
            std::cin >> index;
            arr.removeElement(index);
            break;
        }
        case 3: {
            int index, newValue;
            std::cout << "Enter index to update: ";
            std::cin >> index;
            std::cout << "Enter new value: ";
            std::cin >> newValue;
            arr.updateElement(index, newValue);
            break;
        }
        case 4: {
            arr.displayElements();
            break;
        }
        case 5: {
            std::cout << "Max Value: " << arr.getMax() << std::endl;
            break;
        }
        case 6: {
            std::cout << "Min Value: " << arr.getMin() << std::endl;
            break;
        }
        case 7: {
            std::cout << "Average Value: " << arr.getAverage() << std::endl;
            break;
        }
        }
    } while (choice != 0);

    return 0;
}
