// Дано ціле чотиризначне число. Чи правильно, що його цифри впорядковані за зростанням?

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

    bool isOrdered = (digit1 < digit2) && (digit2 < digit3) && (digit3 < digit4);

    if (isOrdered) {
        std::cout << "Цифри числа "<< number <<" є впорядкованими за зростанням." << std::endl;
    } else {
        std::cout << "Цифри числа "<< number <<" не є впорядкованими за зростанням." << std::endl;
    }

    return 0;
}