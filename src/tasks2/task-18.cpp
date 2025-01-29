// Дано ціле число N (>1). Послідовність дійсних чисел АK визначається так: А1 = 1, А2 =3, АK = АK−2 /К+АK−1, де K = 3,4,… Вивести елементи А1, А2, ..., АN.

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

    double A1 = 1, A2 = 3;

    cout << "A1 = " << A1 << endl;
    cout << "A2 = " << A2 << endl;

    double A_prev = A1, A_curr = A2;
    for (int K = 3; K <= N; ++K) {
        double A_next = (A_prev / K) + A_curr;
        cout << "A" << K << " = " << A_next << endl;

        A_prev = A_curr;
        A_curr = A_next;
    }

    return 0;
}
