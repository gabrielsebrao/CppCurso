#include <iostream>

int main() {
    using std::cout, std::cin;

    char op;
    double n1;
    double n2;
    double result;

    cout << "-----------------CALCULATOR------------------";
    
    // define variables 
    
    cout << "\nChoose a operator (+ - x /): ";
    cin >> op;

    cout << "Enter number 1: ";
    cin >> n1;

    cout << "Enter number 2: ";
    cin >> n2;

    // define result based on op value
    switch(op) {
        case '+':
            result = n1+n2;
            break;
        case '-':
            result = n1-n2;
            break;
        case 'x':
            result = n1*n2;
            break;
        case '/':
            result = n1/n2;
            break;
        default:
            cout << "[ERROR] Enter a VALID number!";
            cout << "\n---------------------------------------------";
            std::abort();
    }

    // print result
    cout << n1 << " " << op << " " << n2 << " = " << result;

    cout << "\n---------------------------------------------";

    return 0;
}