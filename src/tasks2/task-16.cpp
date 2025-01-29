// Дано ціле число N (>0). Послідовність дійсних чисел AK визначається так: A1 = 1, A2 =2, AK = (АК-2+AK−1 + 1)/K, де K = 3,4, … Вивести елементи A1, A2, …, AN.

#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Введіть значення N (> 0): ";
    cin >> N;

    if (N <= 0) {
        cout << "Помилка: N повинно бути більше 0." << endl;
        return 1;
    }

    double A1 = 1.0, A2 = 2.0;

    cout << "A1 = " << A1 << endl;
    if (N >= 2) {
        cout << "A2 = " << A2 << endl;
    }

    double prev1 = A1, prev2 = A2, current;
    for (int k = 3; k <= N; ++k) {
        current = (prev1 + prev2 + 1) / k;
        cout << "A" << k << " = " << current << endl;

        prev1 = prev2;
        prev2 = current;
    }

    return 0;
}
