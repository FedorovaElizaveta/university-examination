// Дано ціле чотиризначне число. Визначити, сума якої пари цифр більша за задане число А – перша чи друга.

#include <iostream>

int main() {
    int number, A;

    std::cout << "Введіть чотиризначне число: ";
    std::cin >> number;
    std::cout << "Введіть число A: ";
    std::cin >> A;

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

    if (sum1 > A && sum2 > A) {
        std::cout << "Обидві суми більше, ніж A." << std::endl;
    } else if (sum1 > A) {
        std::cout << "Сума першої та другої цифри більша, ніж A." << std::endl;
    } else if (sum2 > A) {
        std::cout << "Сума третьої та четвертої цифри більша, ніж A." << std::endl;
    } else {
        std::cout << "Жодна із сум не більше, ніж A." << std::endl;
    }

    return 0;
}
