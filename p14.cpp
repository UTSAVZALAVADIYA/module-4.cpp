#include <iostream>

int main() {
    int* ptr = new int;
    *ptr = 10;

    std::cout << "Value of allocated integer: " << *ptr << std::endl;

    delete ptr;

    int* arr = new int[5];

    for (int i = 0; i < 5; ++i) {
        arr[i] = i * 10;
    }

    std::cout << "Values in the allocated array: ";
    for (int i = 0; i < 5; ++i) {   
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr;

    return 0;
}
