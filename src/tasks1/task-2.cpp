// Дано ціле чотиризначне число. Визначити, чи серед цифр числа є хоча б одна непарна.

#include <iostream>

int main() {
    int number;

    std::cout << "Введіть чотиризначне число: ";
    std::cin >> number;

    if (number < 1000 || number > 9999) {
        std::cout << "Помилка: введене число не є чотиризначним." << std::endl;
        return 1;
    }

    bool has_odd_digit = false;

    while (number > 0) {
        int digit = number % 10;  
        if (digit % 2 != 0) { 
            has_odd_digit = true;
            break;
        }
        number /= 10; 
    }

    if (has_odd_digit) {
        std::cout << "Число має хоча б одну непарну цифру." << std::endl;
    } else {
        std::cout << "Число не має непарних цифр." << std::endl;
    }

    return 0;
}
