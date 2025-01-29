// Дано ціле число N (>0). Знайти суму Sin(x) + Sin(2x) + … + Sin(Nx).

#include <iostream>
#include <cmath>

int main() {
    double x;
    int N;

    std::cout << "Введіть значення x: ";
    std::cin >> x;

    std::cout << "Введіть значення N (> 0): ";
    std::cin >> N;

    if (N <= 0) {
        std::cout << "Помилка: N повинно бути більше 0." << std::endl;
        return 1;
    }

    double sum = 0.0;

    for (int k = 1; k <= N; ++k) {
        sum += sin(k * x);
    }

    std::cout << "Сума sin(x) + sin(2x) + ... + sin(Nx) = " << sum << std::endl;

    return 0;
}
