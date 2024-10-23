#pragma once
#include <initializer_list>
#include <type_traits>

template <typename T>
class MaxFinder {
public:
    T findMax(std::initializer_list<T> list);
};

template <typename T>
T MaxFinder<T>::findMax(std::initializer_list<T> list) {
    T maxValue = *list.begin();
    for (const auto& item : list) {
        if (item > maxValue) {
            maxValue = item;
        }
    }
    return maxValue;
}
