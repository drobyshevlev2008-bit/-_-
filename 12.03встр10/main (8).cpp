#include <iostream>
#include "complex.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    Complex a, b;

    cout << "Первое число: ";
    cin >> a;

    cout << "Второе число: ";
    cin >> b;

    cout << endl;
    cout << "a     = " << a << endl;
    cout << "b     = " << b << endl;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a == b  " << (a == b ? "да" : "нет") << endl;
    cout << "a != b  " << (a != b ? "да" : "нет") << endl;

    return 0;
}