#include <iostream>

int main() {
    int number;

    std::cout << "Введіть чотирьохзначне число: ";
    std::cin >> number;

    if (number < 1000 || number > 9999) {
        std::cout << "Помилка: введине число не є чотирьохзначним." << std::endl;
        return 1;
    }

    bool hasOddDigit = false;

    while (number > 0) {
        int digit = number % 10;  
        if (digit % 2 != 0) { 
            hasOddDigit = true;
            break;
        }
        number /= 10; 
    }

    if (hasOddDigit) {
        std::cout << "Число має хоча б одну непарну цифру." << std::endl;
    } else {
        std::cout << "Число не має непарних цифр." << std::endl;
    }

    return 0;
}
