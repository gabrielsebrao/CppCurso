#include <iostream>

double square(double lenght);
double cube(double lenght);

    int main() {

        double lenght = 5;
        double area;
        double volume;

        area = square(lenght);
        volume = cube(lenght);

        std::cout << "Area: " << area << '\n';
        std::cout << "Volume: " << volume;

        return 0;
    }

    double square(double lenght) {

        double result = lenght * lenght;

        return result;
    }

    double cube(double lenght) {

        double result =  lenght * lenght * lenght;

        return result;
    }