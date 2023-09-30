#include <iostream>
template <typename T, typename U>

auto max(T num1, U num2) {
    return (num1 > num2) ? num1 : num2;
}

int main() {

    std::cout << max(2.1, 3) << '\n';

    return 0;
}