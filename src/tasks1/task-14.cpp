// Дано ціле чотиризначне число. Визначити, чи є добуток його цифр парним числом.

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

    int product = digit1 * digit2 * digit3 * digit4;

    bool is_even = product % 2 == 0;

    if (is_even) {
        std::cout << "Добуток цифр числа "<< number <<" ("<< product <<") є парним числом." << std::endl;
    } else {
        std::cout << "Добуток цифр числа "<< number <<" ("<< product <<") не є парним числом." << std::endl;
    }

    return 0;
}