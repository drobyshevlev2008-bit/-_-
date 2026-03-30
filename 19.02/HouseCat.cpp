#include "HouseCat.h"

HouseCat::HouseCat(string n, int a, string c, string owner)
    : Cat(n, a, c) { // вызываем конструктор родител€ (€ так пон€л надо)
    ownerName = owner;
    cout << "  ƒобавлена инфа о хоз€ине: " << ownerName << endl;
}

HouseCat::~HouseCat() {
    cout << "ƒомашн€€ кошка " << name << " уходит..." << endl;
}

void HouseCat::sound() {
    // звук домашней кошки другой
    cout << name << " говорит: ћррр-м€у-муррр" << endl;
}

void HouseCat::printInfo() {
    // сначала выводим то что у всех кошек есть
    Cat::printInfo();
    // потом добавл€ем свое
    cout << "’оз€ин: " << ownerName << " (это домашн€€ кошка)" << endl;
}

void HouseCat::play() {
    cout << name << " играет с клубком ниток!" << endl;
}