#include <iostream>

int main() {

    int temp;
    int convTemp;
    char scale;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    std::cout << "C - Celsius\n";
    std::cout << "F - Fahrenheit\n";
    std::cout << "Enter the coverted scale [C/F]: ";
    std::cin >> scale;

    switch(scale) {
        case 'C':
            convTemp = (temp - 32) * 5/9;
            std::cout << "The converted temperature is: " << convTemp << " C";
            break;
        case 'F':
            convTemp = temp * 9/5 + 32;
            std::cout << "The converted temperature is: " << convTemp << " F";
            break;
    }
    
    return 0;
}