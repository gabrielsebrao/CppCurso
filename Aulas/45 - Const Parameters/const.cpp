#include <iostream>

void printInfo(const std::string &name, const int &age);

int main() {

    int age = 20;
    std::string name = "Gabriel";

    printInfo(name, age);


    return 0;
}

void printInfo(const std::string &name, const int &age) {
    std::cout << name << '\n';
    std::cout << age;
}