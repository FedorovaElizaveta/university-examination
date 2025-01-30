// Дано два цілих двоцифрових числа. Чи вірно, що цифри в першому числі впорядковані за зростанням, а в другому – за спаданням?

#include <iostream>

int main() {
    int num1, num2;

    std::cout << "Введіть перше двозначне число: ";
    std::cin >> num1;
    std::cout << "Введіть друге двозначне число: ";
    std::cin >> num2;

    if ((num1 < 10 || num1 > 99) || (num2 < 10 || num2 > 99)) {
        std::cout << "Помилка: одне чи обидва числа не є двозначними." << std::endl;
        return 1;
    }

    int first_digit1 = num1 / 10; 
    int second_digit1 = num1 % 10;

    int first_digit2 = num2 / 10; 
    int second_digit2 = num2 % 10;

    bool is_increasing = (first_digit1 < second_digit1);
    bool is_decreasing = (first_digit2 > second_digit2);

    if (is_increasing && is_decreasing) {
        std::cout << "Цифри в першому числі впорядковані за зростанням, а в другому - за спаданням." << std::endl;
    } else {
        std::cout << "Цифри не задовольняють задані умови." << std::endl;
    }

    return 0;
}
