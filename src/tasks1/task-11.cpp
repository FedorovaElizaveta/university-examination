// Дано ціле чотиризначне число. Визначити, скільки цифр у числі є парними.

#include <iostream>

int main() {
    int number;

    std::cout << "Введіть чотиризначне число: ";
    std::cin >> number;

    if (number < 1000 || number > 9999) {
        std::cout << "Помилка: введене число не є чотиризначним." << std::endl;
        return 1;
    }

    int even_count = 0;
   
    for (int i = 0; i < 4; ++i) {
        int digit = number % 10;

        if (digit % 2 == 0) {    
            ++even_count;
        }

        number /= 10;
    }

    std::cout << "Кількість парних цифр у числі: "<< even_count <<"." << std::endl;

    return 0;
}