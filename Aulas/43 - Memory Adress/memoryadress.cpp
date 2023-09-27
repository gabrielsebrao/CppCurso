#include <iostream>

int main() {

    std::string name = "Bro";
    int num = 4;
    bool condition = true;

    std::cout << &name << '\n'; // 6422260 em decimal
    std::cout << &num << '\n'; // 6422256 em decimal
    std::cout << &condition << '\n'; // 6422255 em decimal
    return 0;
}