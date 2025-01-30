// Дано ціле чотиризначне число. Визначити, чи є сума його другої та третьої цифр двозначним числом.

#include <iostream>

int main() {
    int number;

    std::cout << "Введіть чотиризначне число: ";
    std::cin >> number;

    if (number < 1000 || number > 9999) {
        std::cout << "Помилка: введене число не є чотиризначним." << std::endl;
        return 1;
    }

    
    int digit2 = (number / 100) % 10;
    int digit3 = (number / 10) % 10;

    int sum = digit2 + digit3;

    if (sum > 9 && sum < 100) {
        std::cout << "Сума другої та третьої цифр числа "<< number <<" є двозначним числом." << std::endl;
    } else {
        std::cout << "Сума другої та третьої цифр числа "<< number <<" не є двозначним числом." << std::endl;
    }

    return 0;
}