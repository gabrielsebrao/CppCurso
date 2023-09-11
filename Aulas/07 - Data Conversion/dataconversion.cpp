#include <iostream>


// Tranform a variable type
int main() {

    // Implict conversion
    char x = 100;
    std::cout << x << "\n";

    // Explict conversion
    int correct = 8;
    int questions = 10;
    double percentage = (double)correct/questions * 100;

    std::cout << percentage << "%";

    return 0;
}