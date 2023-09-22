#include <iostream>

int Num = 0;

namespace defNum {
    int Num = 2;
}

int main() {

    int Num = 1;
    
    std::cout << Num << '\n';
    std::cout << ::Num << '\n';
    std::cout << defNum::Num;

    return 0;
}