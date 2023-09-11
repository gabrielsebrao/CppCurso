#include <iostream>

namespace first() {
    int x = 1;
}

namespace second() {
    int x = 2;
}

// Namespace is useful to hand information
int main() {
    //using namespace std; // it is not necessary use "std" anymore
    using std::cout; // only calls one method

    int x = 0;
    
    cout << first::x;
    return 0;
}