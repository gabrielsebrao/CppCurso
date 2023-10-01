#include <iostream>

class Student {
    public:
        std::string name;
        int age;
        double gpa;

    Student(std::string name, int age, double gpa) {
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
};

int main() {
    
    Student student("Gabriel",20,4.0);

    std::cout << student.name << '\n';
    std::cout << student.age << '\n';
    std::cout << student.gpa << '\n';

    return 0;
}