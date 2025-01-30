// Дано ціле чотиризначне число. Визначити, чи є сума його першої та останньої цифр двоцифровим числом.

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

    int sum = first_digit + last_digit;

    if (sum > 9 && sum < 100) {
        std::cout << "Сума першої та останньої цифр числа "<< number <<" є двоцифровим числом." << std::endl;
    } else {
        std::cout << "Сума першої та останньої цифр числа "<< number <<" не є двоцифровим числом." << std::endl;
    }

    return 0;
}