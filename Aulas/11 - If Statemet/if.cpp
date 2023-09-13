#include <iostream>

int main() {

    int age;
    std::cout << "How old are you: ";
    std::cin >> age;

    if (age >= 18 && age < 120) {
        std::cout << "Welcome!";
    } else if (age <= 0 || age >= 120) {
        std::cout << "Enter a valid age!";
    } else {
        std::cout << "Get out of here!";
    }

    return 0;
}