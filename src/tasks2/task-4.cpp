// Дано дійсне число X (|X|<1) і ціле число N (>0). Знайти значення виразу X+X2/2+X3/3+…+XN/N. Для обчислення степеню використовувати функцію Power (число, степінь) (підключити бібліотеку Math).

#include <iostream>
#include <cmath>

int main() {
    double X;
    int N;

    std::cout << "Введіть число X (де |X| < 1): ";
    std::cin >> X;

    std::cout << "Введіть число N (>0): ";
    std::cin >> N;

    if (std::abs(X) >= 1) {
        std::cout << "Помилка: |X| повинно бути менше 1." << std::endl;
        return 1;
    }

    if (N <= 0) {
        std::cout << "Помилка: N повинно бути більше 0." << std::endl;
        return 1;
    }

    double sum = 0.0;
    for (int k = 1; k <= N; ++k) {
        sum += std::pow(X, k) / k;
    }

    std::cout << "Значення виразу: " << sum << std::endl;

    return 0;
}
