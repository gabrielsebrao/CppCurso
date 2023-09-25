#include <iostream>

int getIndex(int array[], int size, int num);

int main() {

    int codes[] = {1, 2, 6, 14, 5, 23, 17};
    int sizeOfCodes = sizeof(codes)/sizeof(codes[0]);
    int index;
    int myNum;

    std::cout << "What number do you want to find?\n";
    std::cin >> myNum;

    index = getIndex(codes, sizeOfCodes, myNum);

    if(index != -1) {
        std::cout << myNum<< " is at index " << index;
    } else {
        std::cout << myNum << " is not in array.";
    }

    return 0;
}

int getIndex(int array[], int size, int num) {

    int index;

    for(index = 0; index < size; index++) {
        if(array[index] == num) {
            return index;
        } 
    }

    return -1;
}