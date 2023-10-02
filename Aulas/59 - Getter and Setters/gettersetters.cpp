#include <iostream>

class Stove {
    private:
        int temperature = 0;
    public:
        int getTemperature() {
            return temperature;
        }
        void setTemperature(int temperature) {
            if(temperature < 0) {
                std::cout << "The temperature cannot be below 0 degrees.\n";
            } else if (temperature > 200) {
                std::cout <<  "The temperature cannot be over 100 degress.\n";
            } else {
                this->temperature = temperature;
            }
        }
};

int main() {

    Stove stove;
    stove.setTemperature(201);

    std::cout << "The temperature is " << stove.getTemperature();

    return 0;
}