// Дано два цілих двоцифрових числа. Чи вірно, що всі цифри першого числа більші за відповідні цифри другого числа?

#include <iostream>

int main() {
    int firsNumber, secondNumber;

    std::cout << "Введіть перше двоцифрове число: ";
    std::cin >> firsNumber;
    std::cout << "Введіть друге двоцифрове число: ";
    std::cin >> secondNumber;

    if (firsNumber < 10 || firsNumber > 99 || secondNumber < 10 || secondNumber > 99) {
        std::cout << "Помилка: введене число не є двоцифровим." << std::endl;
        return 1;
    }

    int firstDigit1 = firsNumber / 10;
    int secondDigit1 = firsNumber % 10;

    int firstDigit2 = secondNumber / 10;
    int secondDigit2 = secondNumber % 10;

    if (firstDigit1 > firstDigit2 && secondDigit1 > secondDigit2) {
        std::cout << "Всі цифри першого числа ("<< firsNumber <<") більші за відповідні цифри другого числа ("<< secondNumber <<")." << std::endl;
    } else {
        std::cout << "Не всі цифри першого числа ("<< firsNumber <<") більші за відповідні цифри другого числа ("<< secondNumber <<")." << std::endl;
    }

    return 0;
}