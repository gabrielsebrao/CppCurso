#include <iostream>

int main() {

    std::string character;

    std::cout << "Please, enter a single character: ";
    std::cin >> character;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            std::cout << character;
        }
        std::cout << "\n";
    }

    return 0;
}