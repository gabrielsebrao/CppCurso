#include <iostream>

int main() {

    std::string message = "Gabriel";
    std::cout << sizeof(message) << '\n';

    char carac = 'A';
    std::cout << sizeof(carac) << '\n';

    char name[] = "Gabriel";
    std::cout << sizeof(name) << '\n';

    char names[][8] = {"Gabriel", "Daniel"};
    std::cout << sizeof(names);

    return 0;
}