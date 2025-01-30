// Дано ціле чотиризначне число. Визначити, яка сума більша – першої пари цифр чи числа другої пари.

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

    int sum1 = digit1 + digit2;
    int sum2 = digit3 + digit4;

    if (sum1 > sum2) {
        std::cout << "Сума першої пари цифр (" << sum1 << ") більша за суму другої пари цифр (" << sum2 << ")." << std::endl;
    } else if (sum1 < sum2) {
        std::cout << "Сума першої пари цифр (" << sum1 << ") менша за суму другої пари цифр (" << sum2 << ")." << std::endl;
    } else {
        std::cout << "Сума першої пари цифр (" << sum1 << ") рівна сумі другої пари цифр (" << sum2 << ")." << std::endl;
    }

    return 0;
}