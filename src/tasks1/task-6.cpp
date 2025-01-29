// Дано ціле чотиризначне число. Чи правильно, що ці цифри числа парні?

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

    bool isEven = (digit1 % 2 == 0) && (digit2 % 2 == 0) && (digit3 % 2 == 0) && (digit4 % 2 == 0);

    if (isEven) {
        std::cout << "Усі цифри числа "<< number <<" є парними." << std::endl;
    } else {
        std::cout << "Хоча б одна цифра числа "<< number <<" є непарною." << std::endl;
    }

    return 0;
}