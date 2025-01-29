// Дано ціле число N (>1). Послідовність дійсних чисел АK визначається так: А1 = 0, А2 =1, АK = АK−22/К+АK−1, де K = 3,4, … Вивести елементи А1, А2, ..., АN.

#include <iostream>

int main() {
    int N;

    std::cout << "Введіть число N (> 1): ";
    std::cin >> N;

    if (N <= 1) {
        std::cout << "Помилка: N повинно бути більше 1." << std::endl;
        return 1;
    }

    double A[N];

    A[0] = 0;
    A[1] = 1;

    for (int k = 3; k <= N; ++k) {
        A[k-1] = A[k-3] / k + A[k-2];
    }

    std::cout << "Послідовність A: ";
    for (int i = 0; i < N; ++i) {
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
