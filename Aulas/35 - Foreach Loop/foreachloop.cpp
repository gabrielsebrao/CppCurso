#include <iostream>

int main() {

    char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};

    for(char grade : grades) {
        std::cout << grade << '\n';
    }

    return 0;
}