#include <iostream>

struct Person {
    std::string name;
    int age;
    double height;
    char genre;
};

void setName(Person &person, std::string name);
void setAge(Person &person, int age);
void setHeight(Person &person, double height);
void setGenre(Person &person, char genre);

int main() {

    Person person1;
    
    setName(person1, "Gabriel");
    setAge(person1, 20);
    setHeight(person1, 80.5);
    setGenre(person1, 'M');

    std::cout << person1.name << '\n';
    std::cout << person1.age << '\n';
    std::cout << person1.height << '\n';
    std::cout << person1.genre;

    return 0;
}

void setName(Person &person, std::string name) {
    person.name = name;
}

void setAge(Person &person, int age) {
    person.age = age;
}

void setHeight(Person &person, double height) {
    person.height = height;;
}

void setGenre(Person &person, char genre) {
    person.genre = genre;
}