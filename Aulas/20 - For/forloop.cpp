#include <iostream>
#include <unistd.h>

int main() {

    std::string message = "Hello";

    for(int i = 0; i < message.length(); i++) {
        std::cout << message.at(i) << "\n";
        sleep(1);
    }

    return 0;
}