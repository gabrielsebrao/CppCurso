#include <iostream>

void sort(int sizeNums, int array[]);

int main() {

    int nums[] = {4,5,8,2,7,3,10,1,6,9};
    int sizeNums = sizeof(nums) / sizeof(int);

    sort(sizeNums, nums);

    for(int num : nums) {
        std::cout << num << '\n';
    }

    return 0;
}

void sort(int sizeNums, int *array) {

    int temp;

    for(int i = 0; i < sizeNums-1; i++) {
        for(int j = 0; j < sizeNums-1; j++) {
            if(array[j] > array[j+1]) {
                temp = array[j+1];
                array[j+1] = array[j];
                array[j] = temp;
            }
        }
    }

}