#include <iostream>

int main() {

    const int SIZE = 9;
    std::string foods[SIZE];

    fill(foods, foods+SIZE/3, "pizza");
    fill(foods+SIZE/3, foods+SIZE/3*2, "hamburguer");
    fill(foods+SIZE/3*2, foods+SIZE, "coxinha");

    for(std::string food : foods) {
        std::cout << food << " ";
    }

    return 0;
}