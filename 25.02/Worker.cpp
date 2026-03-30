#include "Worker.h"

Worker::Worker(string name, string pos, int year, double sal)
    : fullName(name), position(pos), startYear(year), salary(sal) {
    // тут ничего не делаем
}

void Worker::display() const {
    cout << "-------------------------" << endl;
    cout << "ФИО: " << fullName << endl;
    cout << "Должность: " << position << endl;
    cout << "Год поступления: " << startYear << endl;
    cout << "Зарплата: " << salary << " руб." << endl;
    cout << "-------------------------" << endl;
}