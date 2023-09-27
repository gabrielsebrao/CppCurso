#include <iostream>

int main() {

    int age = 20;
    int *pointer = nullptr;
    pointer = &age;

    if(pointer==nullptr) {
        std::cout << "Your pointer is not adressed!";
    } else {
        std::cout << "Your pointer is adressed!\n";
        std::cout << "You are " << *pointer << " years old.";
    }

    return 0;
}