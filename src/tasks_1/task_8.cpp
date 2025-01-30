// Дано ціле чотиризначне число. Визначити, чи сума його цифр є двозначним числом.

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

    int sum = digit1 + digit2 + digit3 + digit4;

    if (sum > 9 && sum < 100) {
        std::cout << "Сума цифр числа "<< number <<" є двозначним числом." << std::endl;
    } else {
        std::cout << "Сума цифр числа "<< number <<" не є двозначним числом." << std::endl;
    }

    return 0;
}