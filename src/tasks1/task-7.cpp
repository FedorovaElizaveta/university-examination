// Дано ціле чотиризначне число. Визначити, чи однакові його цифри.

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

    bool is_equal = (digit1 == digit2) && (digit2 == digit3) && (digit3 == digit4);

    if (is_equal) {
        std::cout << "Усі цифри числа "<< number <<" є однаковими." << std::endl;
    } else {
        std::cout << "Не усі цифри цифра числа "<< number <<" є однаковими." << std::endl;
    }

    return 0;
}