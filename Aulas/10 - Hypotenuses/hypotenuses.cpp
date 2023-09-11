#include <iostream>
#include <cmath>

int main() {

    double a;
    double b;
    double hypt;

    std::cout << "Value of side A (cm): ";
    std::cin >> a;

    std::cout << "Value of side B (cm): ";
    std::cin >> b;

    hypt = sqrt(pow(a,2) + pow(b,2));
    std::cout << "The hypotenuse is " << hypt << " cm.";

    return 0;
}