// Дано ціле число N (>0). Знайти суму N2+(N-1)2+(N-2)2+…+12.

#include <iostream>

int main() {
    int N;

    std::cout << "Введіть значення N (> 0): ";
    std::cin >> N;

    if (N <= 0) {
        std::cout << "Помилка: N повинно бути більше 0." << std::endl;
        return 1;
    }

    long long sum = 0;

    for (int i = N; i >= 1; --i) {
        sum += i * i;
    }

    std::cout << "Сума: " << sum << std::endl;

    return 0;
}
