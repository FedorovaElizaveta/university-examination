#include <iostream>

int main() {
    int number;

    std::cout << "Введіть чотирьохзначне число: ";
    std::cin >> number;

    if (number < 1000 || number > 9999) {
        std::cout << "Помилка: введине число не є чотирьохзначним." << std::endl;
        return 1;
    }

    int firstDigit = number / 1000; 
    int lastDigit = number % 10;

    int product = firstDigit * lastDigit;

    if (product >= 10 && product <= 99) {
        std::cout << "Добуток першої та останньої цифр (" << product << ") є двозначним числом." << std::endl;
    } else {
        std::cout << "Добуток першої та останньої цифр (" << product << ") не є двозначним числом." << std::endl;
    }

    return 0;
}
