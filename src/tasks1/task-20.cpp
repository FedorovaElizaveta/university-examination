// Дано ціле чотиризначне число. Перевірити, чи перша пара його цифр є дзеркальним відображенням другої пари.

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


    if (digit1 == digit4 && digit2 == digit3) {
        std::cout << "Перша пара цифр числа " << number << " є дзеркальним відображенням другої пари." << std::endl;
    } else {
        std::cout << "Перша пара цифр числа " << number << " не є дзеркальним відображенням другої пари." << std::endl;
    }

    return 0;
}