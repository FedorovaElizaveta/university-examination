// Дано ціле число N (>0). Послідовність дійсних чисел AK визначається так: A1 = 1, A2 =2, AK = (АК-2+AK−1 + 1)/K, де K = 3,4, … Вивести елементи A1, A2, …, AN.

#include <iostream>

int main() {
    int N;

    std::cout << "Введіть значення N (> 0): ";
    std::cin >> N;

    if (N <= 0) {
        std::cout << "Помилка: N повинно бути більше 0." << std::endl;
        return 1;
    }

    double A1 = 1.0, A2 = 2.0;

    std::cout << "A1 = " << A1 << std::endl;
    if (N >= 2) {
        std::cout << "A2 = " << A2 << std::endl;
    }

    double prev1 = A1, prev2 = A2, current;
    for (int k = 3; k <= N; ++k) {
        current = (prev1 + prev2 + 1) / k;
        std::cout << "A" << k << " = " << current << std::endl;

        prev1 = prev2;
        prev2 = current;
    }

    return 0;
}
