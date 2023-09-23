#include <iostream>

void introduction();
void showBalance(double balance);
double depositMoney(double balance);
double withdrawMoney(double balance);

int main() {

    int choice;
    double balance = 1000;

    introduction();
    std::cin >> choice;
    std::cin.clear();
    fflush(stdin);

    while(choice != 4) {
        switch(choice) {
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance = depositMoney(balance);
                break;
            case 3:
                balance = withdrawMoney(balance);
                break;
            default:
                std::cout << "Please, enter a valid option!\n";
        }

    std::cout << "Enter another choice:\n";
    std::cout << ">> ";    
    std::cin >> choice;
    std::cin.clear();

    }
        
    std::cout << "Thank you! See you next time.";

    return 0;
}

void introduction() {
    std::cout << "--------BANK-------\n";
    std::cout << "      Welcome!   \n";
    std::cout << "-------------------\n";

    std::cout << "Enter your choice:\n";
    std::cout << "*******************\n";
    std::cout << "[1] - Show Balance\n[2] - Deposit Money\n[3] - Withdraw Money\n[4] - Exit\n>> ";
}

void showBalance(double balance) {
    std::cout << "Your balance: US$ " << balance << ".00\n";
}

double depositMoney(double balance) {

    double deposit;

    std::cout << "How much do you want to deposit?\n>> US$ ";
    std::cin >> deposit ;

    balance += deposit;

    return balance;
}

double withdrawMoney(double balance) {

    double withdraw;

    std::cout << "How much do you want to withdraw?\n>> US$ ";
    std::cin >> withdraw ;

    balance -= withdraw;

    return balance;
}