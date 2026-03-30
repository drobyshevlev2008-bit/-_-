#include <iostream>
#include "time.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    Time t1, t2;

    cout << "Введите первое время (ч:м:с): ";
    cin >> t1;

    cout << "Введите второе время (ч:м:с): ";
    cin >> t2;

    cout << endl;

    cout << "Первое время = " << t1 << endl;
    cout << "Второе время = " << t2 << endl;

    cout << "Первое время + 1 сек = "; ++t1; cout << t1 << endl;
    cout << "Первое время - 1 сек = "; --t1; cout << t1 << endl;

    cout << "Первое время == Второе время ? " << (t1 == t2 ? "да" : "нет") << endl;
    cout << "Первое время != Второе время ? " << (t1 != t2 ? "да" : "нет") << endl;

    cout << "Первое время > Второе время  ? " << (t1 > t2  ? "да" : "нет") << endl;
    cout << "Первое время < Второе время  ? " << (t1 < t2  ? "да" : "нет") << endl;

    return 0;
}