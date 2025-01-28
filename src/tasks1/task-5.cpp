#include <iostream>

int main() {
    int number;

    std::cout << "Введіть чотирьохзначне число: ";
    std::cin >> number;

    if (number < 1000 || number > 9999) {
        std::cout << "Помилка: введине число не є чотирьохзначним." << std::endl;
        return 1;
    }

    int digit1 = number / 1000;
    int digit2 = (number / 100) % 10;
    int digit3 = (number / 10) % 10;
    int digit4 = number % 10;

    if (digit1 > digit2 && digit1 > digit3 && digit1 > digit4) {
        std::cout << "Перша цифра числа "<< number <<" є найбільшою." << std::endl;
    } else if (digit2 > digit1 && digit2 > digit3 && digit2 > digit4) {
        std::cout << "Друга цифра числа "<< number <<" є найбільшою." << std::endl;
    } else if (digit3 > digit1 && digit3 > digit2 && digit3 > digit4) {
        std::cout << "Третя цифра числа "<< number <<" є найбільшою." << std::endl;
    } else if (digit4 > digit1 && digit4 > digit2 && digit4 > digit3) {
        std::cout << "Четверта цифра числа "<< number <<" є найбільшою." << std::endl;
    } else {
        std::cout << "Всі цифри рівні між собою." << std::endl;
    }

    return 0;
}
