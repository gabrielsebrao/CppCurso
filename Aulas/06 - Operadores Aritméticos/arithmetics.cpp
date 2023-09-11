#include <iostream>

int main() {

    // parenthesis 
    // multiplication & divison
    // addition & subtraction

    int students = 20;

    students += 10; // students = students + 10;
    students++; // students += 1;

    students -= 10; // students = students - 10;
    students--; // students -= 1;
    
    students *= 10; // students = students * 10;

    students /= 10; // students = students / 10;

    // 20 / 3 (int) = 18 (rests 2)
    int remainder = students % 3;

    std::cout << "Students: " << students << "\n";
    std::cout << "Remainder: " << remainder;

    return 0;
}