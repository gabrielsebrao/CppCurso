#include <iostream>
#include <ctime>
#include <unistd.h>

    int player;
    int computer;

    void initGame();
    void round();

int main() {

    initGame();
    round();

    return 0;
}

void initGame() {

    // player's choice
    std::cout << "Choice: \n";
    std::cout << "[1] - Rock\n";
    std::cout << "[2] - Paper\n";
    std::cout << "[3] - Scissors\n";
    std::cout << ">> ";

    std::cin >> player;
    std::cin.clear();
    fflush(stdin);

    // computer's choice
    srand(time(0));
    computer = rand() % 3 + 1;

}

void round() {

    std::cout << "LET'S PLAY!\n";

    sleep(1);
    std::cout << "Player's choice: ";
    sleep(1);
    switch(player) {
        case 1:
            std::cout << "ROCK\n";
            break;
        case 2:
            std::cout << "PAPER\n";
            break;
        case 3:
            std::cout << "SCISSORS\n";
            break;
    }

    sleep(1);
    std::cout << "Computer's choice: ";
    sleep(1);
    switch(computer) {
        case 1:
            std::cout << "ROCK\n";
            break;
        case 2:
            std::cout << "PAPER\n";
            break;
        case 3:
            std::cout << "SCISSORS\n";
            break;
    }
    
    sleep(1);
    if(player == 1 && computer == 2) {
        std::cout << "COMPUTER WINS!";
    } else if(player == 1 && computer == 3) {
        std::cout << "PLAYER WINS!";
    } else if(player == 2 && computer == 3) {
        std::cout << "COMPUTER WINS!";
    } else if(player == 2 && computer == 1) {
        std::cout << "PLAYER WINS!";
    } else if(player == 3 && computer == 1) {
        std::cout << "COMPUTER WINS!";
    } else if(player == 3 && computer == 2) {
        std::cout << "PLAYER WINS!";
    } else {
        std::cout << "DRAW!";
    }
 
}