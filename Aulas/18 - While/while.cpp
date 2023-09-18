#include <iostream>

int main() {

    std::string name;

    while(name.empty()) {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name); 

        if(name.empty()) {
            std::cout << "Please, enter a name!\n";
        }
    }

    std::cout << "Hello, " << name << ".";

    return 0;
}