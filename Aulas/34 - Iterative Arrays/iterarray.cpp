#include <iostream>

int main() {

    std::string names[] = {"Gabriel", "Daniel", "Giulia", "Nicolas"};
    int sizeOfNames = sizeof(names) / sizeof(std::string);

    for(int i = 0; i < sizeOfNames; i++) {
        std::cout << names[i] << '\n';
    }

    return 0;
}