#include "WildCat.h"

WildCat::WildCat(string n, int a, string c, string h)
    : Cat(n, a, c) {
    habitat = h;
    cout << "  Эта кошка живет в " << habitat << endl;
}

WildCat::~WildCat() {
    cout << "Дикая кошка " << name << " убегает в лес..." << endl;
}

void WildCat::sound() {
    cout << name << " рычит: РРРРРРР!!!" << endl;
}

void WildCat::printInfo() {
    Cat::printInfo();
    cout << "Среда обитания: " << habitat << " (дикая кошка)" << endl;
}

void WildCat::hunt() {
    cout << name << " охотится на мышей!" << endl;
}