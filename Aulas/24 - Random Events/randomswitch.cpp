#include <iostream>
#include <ctime>

int main() {

    srand(time(0));

    int randNum = rand() % 5;

    switch (randNum) {
    case 0:
        std::cout << "You won a hug!";
        break;
    case 1:
        std::cout << "You won a house!";
        break;
    case 2:
        std::cout << "You won a computer!";
        break;
    case 3:
        std::cout << "You won a cap!";
        break;
    case 4:
        std::cout << "You won a freege";
        break;
    }

    return 0;
}