// Програма запитує у користувача число, потім на вибір користувача зводить його в степінь 2, 3, 4 або 5 і виводить на екран.

#include <iostream>
#include <cmath>

int main() {
    double number;
    int power;

    std::cout << "Введіть число: ";
    std::cin >> number;

    std::cout << "Виберіть степінь (2, 3, 4 або 5): ";
    std::cin >> power;

    if (power == 2 || power == 3 || power == 4 || power == 5) {
        double result = pow(number, power);
        std::cout << "Результат: " << result << std::endl;
    } else {
        std::cout << "Помилка: введено неправильний степінь!" << std::endl;
    }

    return 0;
}
