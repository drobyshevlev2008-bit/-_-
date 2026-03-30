#ifndef CAT_H
#define CAT_H

#include <iostream>
#include <string>

using namespace std; // студент любит using namespace std

class Cat {
protected:
    string name;     // имя кошки
    int age;         // возраст
    string color;    // цвет

private:
    static int count; // для подсчета кошек (вроде так надо)

public:
    // конструктор с параметрами
    Cat(string n, int a, string c);

    // деструктор
    ~Cat();

    // методы
    void printInfo();
    void sound();

    // геттеры (на всякий случай)
    string getName() { return name; }
    int getAge() { return age; }
    string getColor() { return color; }

    // статический метод для подсчета
    static int getCount();
};

#endif
