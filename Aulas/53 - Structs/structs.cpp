#include <iostream>

struct student {
    std::string name;
    double gpa;
    bool enroled = true;
};

int main() {

    student student1;
    student student2;

    student1.name = "Gabriel";
    student1.gpa = 3.9;
    student1.enroled = true;

    student2.name = "Maria";
    student2.gpa = 4.2;
    student2.enroled = false;

    return 0;
}