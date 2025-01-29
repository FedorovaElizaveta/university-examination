// Дано ціле число N (>1). Послідовність дійсних чисел АK визначається так: А1 = 1, А2 =3, АK = АK−2 /К+АK−1, де K = 3,4,… Вивести елементи А1, А2, ..., АN.

#include <iostream>

int main() {
    int N;

    std::cout << "Введіть число N (>1): ";
    std::cin >> N;

    if (N <= 1) {
        std::cout << "Помилка: N повинно бути більше 1." << std::endl;
        return 1;
    }

    double A1 = 1, A2 = 3;
    double A_prev2 = A1, A_prev1 = A2;

    std::cout << "A1 = " << A1 << std::endl;
    std::cout << "A2 = " << A2 << std::endl;

    for (int k = 3; k <= N; ++k) {
        double A_current = (A_prev2 / k) + A_prev1;
        std::cout << "A" << k << " = " << A_current << std::endl;

        A_prev2 = A_prev1;
        A_prev1 = A_current;
    }

    return 0;
}
