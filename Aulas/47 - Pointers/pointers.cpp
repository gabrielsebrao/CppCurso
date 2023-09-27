#include <iostream>

int main() {

    std::string name = "Gabriel";
    int num = 30;
    bool conditions[] = {true, false, true};

    std::string *pName = &name;
    int *pNum = &num;
    bool *pCondition = conditions;

    std::cout << *pName << '\n';
    std::cout << *pNum << '\n';
    std::cout << *pCondition;

    return 0;
}