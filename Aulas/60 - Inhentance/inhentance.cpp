#include <iostream>

class Space {
    public:
        double area;
        double volume;
};

class Cube : public Space{
    public:
        double side;
    
    Cube(double side) {
        this->side = side;
        this->area = side * side * 6;
        this->volume = side * side * side;
    }
};

class Sphere : public Space{
    public:
        double radius;
    
    Sphere(double radius) {
        this->radius = radius;
        this->area = 4 * (radius * radius) * 3.14;
        this->volume = (4/3) * 3.14 * (radius * radius);
    }
};

int main() {
    
    Cube cube(2);

    std::cout << cube.side << '\n';
    std::cout << cube.area << '\n';
    std::cout << cube.volume << '\n';

    Sphere sphere(3);

    std::cout << sphere.radius << '\n';
    std::cout << sphere.area << '\n';
    std::cout << sphere.volume << '\n';

    return 0;
}