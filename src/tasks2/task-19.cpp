// Дано ціле число N (>1). Послідовність дійсних чисел AK визначається так: A1 = 0, A2 =1, AK = (AK−2 + 2·AK−1)/3, де K = 3,4,… Вивести елементи A1, A2,…, AN.

#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Введіть значення N (> 1): ";
    cin >> N;

    if (N <= 1) {
        cout << "Помилка: N повинно бути більше 1." << endl;
        return 1;
    }

    double A1 = 0, A2 = 1;

    cout << "A1 = " << A1 << endl;
    cout << "A2 = " << A2 << endl;

    double A_prev = A1, A_curr = A2;
    for (int K = 3; K <= N; ++K) {
        double A_next = (A_prev + 2 * A_curr) / 3;
        cout << "A" << K << " = " << A_next << endl;

        A_prev = A_curr;
        A_curr = A_next;
    }

    return 0;
}
