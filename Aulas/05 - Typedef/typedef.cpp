#include <iostream>

//typedef std::string string_t;
using string_t = std::string; // more current nowadays and functional for templates

// Typedef costumizes a type
int main() {
    using std::cout;

    string_t name = "Gabriel"; // substitutes "std::string"
    cout << name;

    return 0;
}