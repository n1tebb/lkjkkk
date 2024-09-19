#include <iostream>

using namespace std;

int main() {
    // Объявление переменных
    double firstNumber, secondNumber, result;
    char operation;

    // Ввод данных от пользователя
    cout << "Введите первое число: ";
    cin >> firstNumber;

    cout << "Введите операцию (+, -, *, /, %): ";
    cin >> operation;

    cout << "Введите второе число: ";
    cin >> secondNumber;

    // Выполнение выбранной операции
    if (operation == '+') {
        result = firstNumber + secondNumber;
        cout << "Результат: " << firstNumber << " + " << secondNumber << " = " << result << endl;
    }
    else if (operation == '-') {
        result = firstNumber - secondNumber;
        cout << "Результат: " << firstNumber << " - " << secondNumber << " = " << result << endl;
    }
    else if (operation == '*') {
        result = firstNumber * secondNumber;
        cout << "Результат: " << firstNumber << " * " << secondNumber << " = " << result << endl;
    }
    else if (operation == '/') {
        if (secondNumber != 0) {
            result = firstNumber / secondNumber;
            cout << "Результат: " << firstNumber << " / " << secondNumber << " = " << result << endl;
        } else {
            cout << "Ошибка: Деление на ноль запрещено!" << endl;
        }
    }
    else if (operation == '%') {
        // Нахождение процента от числа
        result = (firstNumber / 100) * secondNumber;
        cout << "Резульат: " << secondNumber << "% of " << firstNumber << " = " << result << endl;
    }
    else {
        cout << "Ошибка! Неверная операция!" << endl;
    }

    return 0;
}
