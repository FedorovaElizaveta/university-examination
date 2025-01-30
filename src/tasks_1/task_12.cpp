// Дано ціле чотиризначне число. Чи вірно, що сума його цифр більша за задане число А?

#include <iostream>

int main() {
    int number, A;

    std::cout << "Введіть чотиризначне число: ";
    std::cin >> number;
    std::cout << "Введіть число А: ";
    std::cin >> A;

    if (number < 1000 || number > 9999) {
        std::cout << "Помилка: введене число не є чотиризначним." << std::endl;
        return 1;
    }

    int digit1 = number / 1000;
    int digit2 = (number / 100) % 10;
    int digit3 = (number / 10) % 10;
    int digit4 = number % 10;

    int sum = digit1 + digit2 + digit3 + digit4;

    if (sum > A) {
        std::cout << "Сума цифр числа "<< number <<" є більшою за задане число A ("<< A <<")." << std::endl;
    } else if (sum < A) {
        std::cout << "Сума цифр числа "<< number <<" є меншою за задане число A ("<< A <<")." << std::endl;
    } else {
        std::cout << "Сума цифр числа "<< number <<" є рівною заданому числу A ("<< A <<")." << std::endl;
    }

    return 0;
}