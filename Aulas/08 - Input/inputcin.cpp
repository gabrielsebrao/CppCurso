#include <iostream>

// Console In (cin) >> input information
int main() {

    std::string name;
    int age;

    std::cout << "What is your name: ";
    std::getline(std::cin >> std::ws , name); // permits use space on input
                /*prevents \n and white spaces*/

    std::cout << "How old are you: ";
    std::cin >> age;

    std::cout << "Hello, " << name << "!\n";
    std::cout << "You are " << age << " years old.";

    return 0;
}