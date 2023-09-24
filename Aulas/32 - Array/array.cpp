#include <iostream>

int main() {

    std::string foods[] = {"Apple", "Banana", "Chicken"};
    foods[0] = "Rice";
    std::cout << foods[0];
 
    return 0;
}