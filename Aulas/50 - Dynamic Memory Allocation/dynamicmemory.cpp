#include <iostream>

int main() {

    int size;
    char *array = NULL;

    std::cout << "How many grades to entender in?\n";
    std::cin >> size; 

    array = new char[size];

    for(int i = 0; i < size; i++) {
        std::cout << "Enter the index " << i << ":\n";
        std::cin >> array[i];
    }

    for(int i = 0; i < size; i++) {
        std::cout << array[i] << ' ';
    }

    delete[] array;

    return 0;
}