// Дано ціле число N (>0). Знайти суму (1+2)2+ (2+3)2+(3+4)2+ … + (2N)2.

#include <iostream>

int main() {
    int N;

    std::cout << "Введіть число N (> 0): ";
    std::cin >> N;

    if (N <= 0) {
        std::cout << "Помилка: N повинно бути більше 0." << std::endl;
        return 1;
    }

    int sum = 0;
    for (int i = 1; i <= N; ++i) {
        sum += (i + (i + 1)) * (i + (i + 1));
    }

    std::cout << "Сума: " << sum << std::endl;

    return 0;
}
