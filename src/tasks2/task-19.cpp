// Дано ціле число N (>1). Послідовність дійсних чисел AK визначається так: A1 = 0, A2 =1, AK = (AK−2 + 2·AK−1)/3, де K = 3,4,… Вивести елементи A1, A2,…, AN.

#include <iostream>

int main() {
    int N;

    std::cout << "Введіть значення N (> 1): ";
    std::cin >> N;

    if (N <= 1) {
        std::cout << "Помилка: N повинно бути більше 1." << std::endl;
        return 1;
    }

    double A1 = 0, A2 = 1;

    std::cout << "A1 = " << A1 << std::endl;
    std::cout << "A2 = " << A2 << std::endl;

    double A_prev = A1, A_curr = A2;
    for (int K = 3; K <= N; ++K) {
        double A_next = (A_prev + 2 * A_curr) / 3;
        std::cout << "A" << K << " = " << A_next << std::endl;

        A_prev = A_curr;
        A_curr = A_next;
    }

    return 0;
}
