#include <iostream>

void swap(std::string &x, std::string &y);

int main() {

    std::string x = "Gabriel";
    std::string y = "Daniel";

    std::cout << "Before swap: \n";
    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n';

    swap(x, y);

    std::cout << "After swap: \n";
    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y;

    return 0;
}

void swap(std::string &x, std::string &y) {
    std::string temp;
    temp = x;
    x = y;
    y = temp;
}