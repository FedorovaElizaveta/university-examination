// Дано ціле число N (>0). Знайти суму (-1) N2+2 (N-1) 2+ (-3) (N-2) 2+ … + 12.

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

    double sum = 0;

    for (int k = 1; k <= N; ++k) {
        int sign = pow(-1, k+1);
        sum += sign * pow(N - k + 1, 2);
    }

    cout << "Сума: " << sum << endl;

    return 0;
}
