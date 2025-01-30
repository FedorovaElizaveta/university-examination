// Дано ціле число N (>0) та ціле число k (<N). Знайти суму (k)2/N + (2k)2/N + … + ((N1)*k)2/N.

#include <iostream>

int main() {
    int N, k;
    double sum = 0;

    std::cout << "Введіть число N (>0): ";
    std::cin >> N;
    std::cout << "Введіть число k (<N): ";
    std::cin >> k;

    if (N <= 0 || k >= N) {
        std::cout << "Помилка: N повинно бути більше 0, а k повинно бути менше N." << std::endl;
        return 1;
    }

    for (int i = 1; i < N; ++i) {
        sum += (i * k) * (i * k) / (double)N;
    }

    std::cout << "Сума: " << sum << std::endl;

    return 0;
}
