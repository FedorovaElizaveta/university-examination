// Програма запитує у користувача число, потім на вибір користувача зводить його в степінь 2, 3, 4 або 5 і виводить на екран.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double number;
    int exponent;

    cout << "Введіть число: ";
    cin >> number;

    cout << "Виберіть степінь (2, 3, 4 або 5): ";
    cin >> exponent;

    if (exponent == 2 || exponent == 3 || exponent == 4 || exponent == 5) {
        double result = pow(number, exponent);
        cout << "Результат: " << result << endl;
    } else {
        cout << "Помилка: введено неправильний степінь!" << endl;
    }

    return 0;
}
