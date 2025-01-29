// Дано ціле число N (>0). Знайти суму N2+ (N+2)2+ (N+4)2+ … + (2·N)2.

#include <iostream>

int main() {
    int N;

    std::cout << "Введіть число N (>0): ";
    std::cin >> N;

    if (N <= 0) {
        std::cout << "Помилка: N повинно бути більше 0." << std::endl;
        return 1;
    }

    int sum = 0;
    for (int i = N; i <= 2 * N; i += 2) {
        sum += i * i;
    }

    std::cout << "Сума: " << sum << std::endl;

    return 0;
}
