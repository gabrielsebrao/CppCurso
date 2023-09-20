#include <iostream>

int power(int number, int power) {

    int result = 1;

    for(int i = 0; i < power; i++) {
        result *= number;
    }

    return result;
}

int main() {

    int num = 4;

    std::cout << power(num, 3);

    return 0;
}