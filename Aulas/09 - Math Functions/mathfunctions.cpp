#include <iostream>
#include <cmath>

int main() {

    // https://cplusplus.com/reference/cmath/ >> see more cath functions 

    double x = 1.3;
    double y = 5;
    double z = 13;

    std::cout << "Max: " << std::max(x,y) << "\n"; // max number between two numbers
    std::cout << "Min: " << std::min(z,x) << "\n"; // min number between two numbers
    std::cout << "Power: " << pow(y, 2) << "\n"; // power of a number
    std::cout << "Sqrt: " << sqrt(25) << "\n"; // sqrt of a number
    std::cout << "Absolute Value: " << abs(-3) << "\n"; // absolute value of a number

    std::cout << "Round: " << round(x) << "\n";
    std::cout << "Ceil: " << ceil(x) << "\n";
    std::cout << "Floor: " << floor(x); 

    return 0;
}