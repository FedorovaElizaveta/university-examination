// Дано ціле число N (>1). Послідовність дійсних чисел AK визначається так: A1 = 1, A2 =2, AK = (AK−2 + 2·AK−1)/3, де K = 3,4,… Вивести елементи A1, A2,…, AN.

#include <iostream>

int main() {
    int N;

    std::cout << "Введіть число N (> 1): ";
    std::cin >> N;

    if (N <= 1) {
        std::cout << "Помилка: N повинно бути більше 1." << std::endl;
        return 1;
    }

    double A1 = 1.0;
    double A2 = 2.0;

    std::cout << "A1 = " << A1 << std::endl;
    std::cout << "A2 = " << A2 << std::endl;

    double A_prev2 = A1, A_prev1 = A2;
    for (int K = 3; K <= N; ++K) {
        double A_current = (A_prev2 + 2 * A_prev1) / 3;
        std::cout << "A" << K << " = " << A_current << std::endl;
        A_prev2 = A_prev1;
        A_prev1 = A_current;
    }

    return 0;
}
