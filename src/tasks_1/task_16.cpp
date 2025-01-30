// Дано ціле чотиризначне число. Визначити, чи серед цифр числа є хоча б один 0.

#include <iostream>

int main() {
    int number;

    std::cout << "Введіть чотиризначне число: ";
    std::cin >> number;

    if (number < 1000 || number > 9999) {
        std::cout << "Помилка: введене число не є чотиризначним." << std::endl;
        return 1;
    }

    int digit1 = number / 1000;
    int digit2 = (number / 100) % 10;
    int digit3 = (number / 10) % 10;
    int digit4 = number % 10;

    if (digit1 == 0 || digit2 == 0 || digit3 == 0 || digit4 == 0) {
        std::cout << "Серед цифр числа "<< number <<" є хоча б один 0." << std::endl;
    } else {
        std::cout << "Серед цифр числа "<< number <<" не є 0." << std::endl;
    }

    return 0;
}