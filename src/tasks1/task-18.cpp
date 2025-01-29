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

    int firstDigit = number / 1000;
    int thirdDigit = (number / 10) % 10;

    if (firstDigit > thirdDigit) {
        std::cout << "Перша цифра числа "<< number <<" більша за третю цифру." << std::endl;
    } else if (firstDigit < thirdDigit) {
        std::cout << "Перша цифра числа "<< number <<" меньша за третю цифру." << std::endl;
    } else {
        std::cout << "Перша цифра числа "<< number <<" рівна третій цифрі." << std::endl;
    }

    return 0;
}