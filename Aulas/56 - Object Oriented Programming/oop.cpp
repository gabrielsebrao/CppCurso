#include <iostream>

class Human {

    public:

        std::string name;
        int age;
        char genre;

        void sayName() {
            std::cout << "\nHello! My name is " << name;
        }

        void sayAge() {
            std::cout << "\nHello! My age is " << age;
        }
};

int main() {
    
    Human human1;
    human1.name = "Gabriel";

    human1.sayAge();

    return 0;
}