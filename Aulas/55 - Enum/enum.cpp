#include <iostream>

enum Day {
    sunday = 0,
    monday = 1,
    tuesday = 2,
    wednesday = 3,
    thursday = 4,
    friday = 5,
    saturday = 6,
};

int main() {

    Day today = tuesday;

    switch(today) {
        case monday:
        std::cout << "Hello! It's monday.";
        break;
        case tuesday:
        std::cout << "Hello! It's tuesday.";
        break;
        case wednesday:
        std::cout << "Hello! It's wednesday.";
        break;
        case thursday:
        std::cout << "Hello! It's thursday.";
        break;
        case friday:
        std::cout << "Hello! It's friday.";
        break;
        case saturday:
        std::cout << "Hello! It's saturday.";
        break;
        case sunday:
        std::cout << "Hello! It's sunday.";
        break;
    }

    return 0;
}