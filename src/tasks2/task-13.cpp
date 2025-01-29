// Дано ціле число N (>0) та ціле число k (<N). Знайти суму 12/(2N-1) + 22/(2N-2) + … +k2/(2N-N).

#include <iostream>

int main() {
    int N, k;

    std::cout << "Введіть значення N (> 0): ";
    std::cin >> N;

    std::cout << "Введіть значення k (< N): ";
    std::cin >> k;

    if (N <= 0 || k >= N) {
        std::cout << "Помилка: k повинно бути менше за N, а N більше 0." << std::endl;
        return 1;
    }

    double sum = 0.0;

    for (int i = 1; i <= k; ++i) {
        sum += (i * i) / (2.0 * N - i);
    }

    std::cout << "Сума: " << sum << std::endl;

    return 0;
}
