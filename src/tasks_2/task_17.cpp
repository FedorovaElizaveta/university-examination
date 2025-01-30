// Дано ціле число N (>0). Знайти суму 13+(-2)333+(-4)3+...(N доданків).

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

    double sum = 0.0;

    for (int k = 1; k <= N; ++k) {
        double term = pow(3, k) * (2 * k - 1);
        if (k % 2 == 0) {
            term = -term;
        }
        sum += term;
    }

    std::cout << "Сума: " << sum << std::endl;

    return 0;
}
