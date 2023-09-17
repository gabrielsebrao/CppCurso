#include <iostream>

int main() {

    // https://cplusplus.com/reference/string/string/

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    if(name.length() > 12) {
        std::cout << "You name cannot be over 12 characters!\n";
    } else if(name.empty()) {
        std::cout << "You did not enter a name.\n";
    } else {
        std::cout << "Welcome, " << name << "\n";
    }

    std::string gmail = name;
    gmail.append("@gmail.com");
    std::cout << "Your gmail is: " << gmail << "\n";

    std::cout << "Your first letter is: " << name.at(0) << "\n";

    std::cout << name.insert(0, "Sir ");

    name.clear();

    return 0;
}