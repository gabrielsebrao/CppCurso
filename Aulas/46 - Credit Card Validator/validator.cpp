#include <iostream>

int getDigit(const int number);
int sumOddNumber(const std::string &creditNumber);
int sumEvenNumber(const std::string &creditNumber);
int* sum = new int(0);
int* sum2 = new int(0);

int main()
{   
    std::string* creditNumber = new std::string();
    std::cout << "Enter a credit number: \n";
    std::cin >> *creditNumber;
    
    int result = 0;

    result += sumOddNumber(*creditNumber) + sumEvenNumber(*creditNumber);
    delete sum;
    delete sum2;
    delete creditNumber;

    std::cout << result << '\n';
    std::cin.get();
}

int sumOddNumber(const std::string& creditNumber) 
{
    for(int i = creditNumber.size()-2; i >= 0; i -= 2)
    {
        *sum += getDigit((creditNumber[i] - '0')*2);
    }

    return *sum;
}

int sumEvenNumber(const std::string& creditNumber) 
{
    for(int i = creditNumber.size()-1; i > 0; i -= 2)
    {
        *sum2 += getDigit((creditNumber[i] - '0')*2);
    }

    return *sum2;
}

int getDigit(const int number)
{
    return number % 10 + (number / 10 % 10);
}