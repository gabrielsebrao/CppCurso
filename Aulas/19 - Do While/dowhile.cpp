#include <iostream>

int main() {
    
    int number;

    // first do some block of code, then repeat it again based on while condition
    do {
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    } while(number<0);

    return 0;
}