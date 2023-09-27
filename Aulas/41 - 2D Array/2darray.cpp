#include <iostream>

int main() {

    std::string cars[][3] = {{"Gabriel", "Giulia", "Nicolas"},
                             {"Nicolas", "Gabriel", "Daniel"},
                             {"Daniel", "Nicolas", "Giulia"}};

    int rows = sizeof(cars)/sizeof(*cars);
    int colums = sizeof(*cars)/sizeof(**cars);

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < colums; j++) {
            std::cout << cars[i][j] << " ";
        }
        std::cout << '\n';
    }

    return 0;
}