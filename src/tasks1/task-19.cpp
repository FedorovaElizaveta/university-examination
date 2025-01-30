// Дано два цілих двоцифрових числа. Чи вірно, що всі цифри першого числа більші за відповідні цифри другого числа?

#include <iostream>

int main() {
    int firs_number, second_number;

    std::cout << "Введіть перше двоцифрове число: ";
    std::cin >> firs_number;
    std::cout << "Введіть друге двоцифрове число: ";
    std::cin >> second_number;

    if (firs_number < 10 || firs_number > 99 || second_number < 10 || second_number > 99) {
        std::cout << "Помилка: введене число не є двоцифровим." << std::endl;
        return 1;
    }

    int first_digit1 = firs_number / 10;
    int second_digit1 = firs_number % 10;

    int first_digit2 = second_number / 10;
    int second_digit2 = second_number % 10;

    if (first_digit1 > first_digit2 && second_digit1 > second_digit2) {
        std::cout << "Всі цифри першого числа ("<< firs_number <<") більші за відповідні цифри другого числа ("<< second_number <<")." << std::endl;
    } else {
        std::cout << "Не всі цифри першого числа ("<< firs_number <<") більші за відповідні цифри другого числа ("<< second_number <<")." << std::endl;
    }

    return 0;
}