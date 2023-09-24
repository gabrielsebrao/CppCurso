#include <iostream>

double getTotal(double prices[], int size);

int main() {

    double prices[] = {14.05, 50.41, 89.76, 27.85};
    int size = sizeof(prices)/sizeof(double);

    double total = getTotal(prices, size);

    std::cout << '$' << total;

    return 0;
}

double getTotal(double prices[], int size) {

    double total = 0;

    for(int i = 0; i < size; i++) {
        total += prices[i];
    }

    return total;
}