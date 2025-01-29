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

    int firstDigit1 = num1 / 10; 
    int secondDigit1 = num1 % 10;

    int firstDigit2 = num2 / 10; 
    int secondDigit2 = num2 % 10;

    bool isIncreasing = (firstDigit1 < secondDigit1);
    bool isDecreasing = (firstDigit2 > secondDigit2);

    if (isIncreasing && isDecreasing) {
        std::cout << "Цифри в першому числі впорядковані за зростанням, а в другому - за спаданням." << std::endl;
    } else {
        std::cout << "Цифри не задовольняють задані умови." << std::endl;
    }

    return 0;
}
