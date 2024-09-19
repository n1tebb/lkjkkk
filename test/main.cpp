#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    char ope;

    cout << "введи число: " << endl;
    cin >> a;
    cout << "введи второе число: : " << endl;
    cin >> b;

    cout << "введи операцию (+, -, *, /, %): ";
    cin >> ope;

    if (ope == '+') {
        c = a + b;
        cout << "результат: " << c << endl;
    }
    else if (ope == '-') {
        c = a - b;
        cout << "результат: " << c << endl;
    }
    else if (ope == '*') {
        c = a * b;
        cout << "результат: " << c << endl;
    }
    else if (ope == '/') {
        if (b != 0) {
            c = a / b;
            cout << "результат: " << c << endl;
        } else {
            cout << "ошибка: Деление на ноль!" << endl;
        }
    }
    else if (ope == '%') {
        if (b != 0) {
            c = a % b;
            cout << "результат: " << c << endl;
        } else {
            cout << "Ошибка: Деление на ноль!" << endl;
        }
    }
    else {
        cout << "ввыбрана не верная операция" << endl;
    }

    return 0;
}
