#include <iostream>

int main() {

    for(int i = 1; i <= 10; i++) {

        // ignores the number five (break iteration "i==5")
        if(i==5) {
            continue;
        }

        // break completely the iteration
        if(i==0) {
            break;
        }
        
        std::cout << i << "\n";
    }
 
    return 0;
}