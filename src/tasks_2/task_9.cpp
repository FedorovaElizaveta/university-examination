// Дано ціле число N (>0). Знайти суму N2+(-2)(N-1)2+3(N-2)2+(-4)(N-3)2 … + 12.

#include <iostream>
#include <cmath>

int main() {
    int N;

    std::cout << "Введіть число N (> 0): ";
    std::cin >> N;

    if (N <= 0) {
        std::cout << "Помилка: N повинно бути більше 0." << std::endl;
        return 1;
    }

    int sum = 0;

    for (int k = 0; k < N; ++k) {
        int coefficient = (k % 2 == 0) ? (k + 1) : -(k + 1);
        sum += coefficient * pow(N - k, 2);
    }

    std::cout << "Сума = " << sum << std::endl;

    return 0;
}
