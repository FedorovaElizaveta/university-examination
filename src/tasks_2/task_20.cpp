// Дано ціле число N (>0). Знайти суму (-1) N2+2 (N-1) 2+ (-3) (N-2) 2+ … + 12.

#include <iostream>
#include <cmath>

int main() {
    int N;
    
    std::cout << "Введіть значення N (> 0): ";
    std::cin >> N;

    if (N <= 0) {
        std::cout << "Помилка: N повинно бути більше 0." << std::endl;
        return 1;
    }

    double sum = 0;

    for (int k = 1; k <= N; ++k) {
        int sign = pow(-1, k+1);
        sum += sign * pow(N - k + 1, 2);
    }

    std::cout << "Сума: " << sum << std::endl;

    return 0;
}
