#include "Cat.h"

int Cat::count = 0; // инициализаци€ статической переменной

Cat::Cat(string n, int a, string c) {
    name = n;
    age = a;
    color = c;
    count++;
    cout << "—оздана кошка " << name << " (всего кошек: " << count << ")" << endl;
}

Cat::~Cat() {
    count--;
    cout << "”ничтожена кошка " << name << " (осталось кошек: " << count << ")" << endl;
}

void Cat::printInfo() {
    cout << " ошка: " << name << ", возраст: " << age << ", окрас: " << color << endl;
}

void Cat::sound() {
    cout << "ћ€у!" << endl;
}

int Cat::getCount() {
    return count;
}