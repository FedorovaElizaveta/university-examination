// Дано ціле число N (>0). Знайти суму 13+(-2)333+(-4)3+...(N доданків).

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N;
    
    cout << "Введіть значення N (> 0): ";
    cin >> N;

    if (N <= 0) {
        cout << "Помилка: N повинно бути більше 0." << endl;
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

    cout << "Сума: " << sum << endl;

    return 0;
}
