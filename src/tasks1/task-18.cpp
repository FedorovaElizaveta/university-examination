// Дано ціле чотиризначне число. Чи вірно, що перша цифра числа більша за третю цифру?

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
    int third_digit = (number / 10) % 10;

    if (first_digit > third_digit) {
        std::cout << "Перша цифра числа "<< number <<" більша за третю цифру." << std::endl;
    } else if (first_digit < third_digit) {
        std::cout << "Перша цифра числа "<< number <<" меньша за третю цифру." << std::endl;
    } else {
        std::cout << "Перша цифра числа "<< number <<" рівна третій цифрі." << std::endl;
    }

    return 0;
}