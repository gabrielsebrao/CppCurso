#include <iostream>

int main() {

    const int SIZE = 5;
    std::string foods[SIZE];
    std::string temp;

    for(int i = 0; i < SIZE; i++) {
        std::cout << "Enter a favorite food [q to quit]: ";
        std::getline(std::cin, temp);
        if(temp == "q") {
            break;
        } else {
            foods[i] = temp;
        }
    }

    std::cout << "----------------------\n";

    for(int i = 0; !foods[i].empty(); i++) {
        std::cout << foods[i] << '\n';
    }

    return 0;
}