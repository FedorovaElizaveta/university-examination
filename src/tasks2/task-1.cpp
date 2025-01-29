// Дано ціле число N (>0). Знайти суму cos(x) + (- cos (2x)) + cos (3x) + (- cos (4x)) ... + cos(Nx).

#include <iostream>
#include <cmath>

int main() {
    int N;
    double x, sum = 0;

    std::cout << "Введіть число N (>0): ";
    std::cin >> N;
    std::cout << "Введіть число x: ";
    std::cin >> x;

    if (N <= 0) {
        std::cout << "Помилка: N повинно бути більше 0." << std::endl;
        return 1;
    }

    for (int i = 1; i <= N; ++i) {
        if (i % 2 != 0) {
            sum += cos(i * x);
        } else {
            sum -= cos(i * x);
        }
    }

    std::cout << "Сума: " << sum << std::endl;

    return 0;
}
