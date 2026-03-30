#ifndef WORKER_H
#define WORKER_H

#include <iostream>
#include <string>

using namespace std;

class Worker {
private:
    string fullName;    // ‘»ќ
    string position;    // должность
    int startYear;      // год поступлени€
    double salary;      // зарплата

public:
    // explicit конструктор (оп€ть explicit...)
    explicit Worker(string name = "", string pos = "", int year = 0, double sal = 0.0);

    // константные методы (чтобы не мен€ли ничего)
    string getFullName() const { return fullName; }
    string getPosition() const { return position; }
    int getStartYear() const { return startYear; }
    double getSalary() const { return salary; }

    // метод дл€ вычислени€ стажа (константный)
    int getExperience(int currentYear) const { return currentYear - startYear; }

    // константный метод дл€ вывода
    void display() const;
};

#endif