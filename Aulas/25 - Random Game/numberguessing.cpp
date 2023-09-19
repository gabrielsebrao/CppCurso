#include <iostream>
#include <ctime>

int main() {

    srand(time(0));

    int num = rand() % 100;
    int userNum;
    int tries = 0;

    std::cout << "=============GUESSING NUMBER===========\n";
    do{
        std::cout << "Enter a guess between (0 - 100): ";
        std::cin >> userNum;
        tries++;
        if(userNum>num) {
            std::cout << "Less!\n";
        } else if (userNum<num) {
            std::cout << "More!\n";
        }
    } while(num!=userNum);

    std::cout << "\nCongratulations! The random number is " << num << ".\n";
    std::cout << "You have tried " << tries << " times.\n";
    std::cout << "========================================";

    return 0;
}