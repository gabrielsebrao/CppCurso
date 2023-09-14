#include <iostream>

int main() {

    // ternary operator ? >> substitutes if/else statement
    // condition ? true code : false code

    std::string name;
    int age;

    // defining variable name
    std::cout << "Enter your name: ";
    std::cin >> name;

    // name condition 
    name == "Gabriel" ? std::cout << "Hello, dear!\n" : std::cout << ";-;\n";

    // defining variable age
    std::cout << "Enter your age: ";
    std::cin >> age;

    // defininf variable age
    age < 18 ? std::cout << "You are a Minor!" : std::cout << "You are an adult!";

    return 0;
}