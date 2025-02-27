// Дано ціле чотиризначне число. Визначити, чи є добуток першої та останньої цифр двозначним числом.

#include <iostream>

int main() {
    int number;

    std::cout << "Введіть чотиризначне число: ";
    std::cin >> number;

    if (number < 1000 || number > 9999) {
        std::cout << "Помилка: введене число не є чотиризначним." << std::endl;
        return 1;
    }

    int first_digit = number / 1000; 
    int last_digit = number % 10;

    int product = first_digit * last_digit;

    if (product >= 10 && product <= 99) {
        std::cout << "Добуток першої та останньої цифр (" << product << ") є двозначним числом." << std::endl;
    } else {
        std::cout << "Добуток першої та останньої цифр (" << product << ") не є двозначним числом." << std::endl;
    }

    return 0;
}
