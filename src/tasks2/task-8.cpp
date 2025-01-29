// Дано ціле число N (>0). Знайти суму 1(2N-1) + 2(2N-2) + … + N(2N-1). Для обчисленнястепеню використовувати функцію Power (число, степінь); підключити бібліотеку Math

#include <iostream>
#include <cmath>

int main() {
    int N;
    
    std::cout << "Введіть число N (> 0): ";
    std::cin >> N;

    if (N <= 0) {
        std::cout << "Помилка: N повинно бути більше 0." << std::endl;
        return 1;
    }

    int sum = 0;

    for (int k = 1; k <= N; ++k) {
        sum += k * (2 * N - k);
    }

    std::cout << "Сума = " << sum << std::endl;

    return 0;
}
