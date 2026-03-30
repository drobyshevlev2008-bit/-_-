#include "PersianCat.h"

PersianCat::PersianCat(string n, int a, string c, int wool)
    : Cat(n, a, c) {
    woolLength = wool;
    cout << "  Ўерсть у нее " << woolLength << " см длиной" << endl;
}

PersianCat::~PersianCat() {
    cout << "ѕерсидска€ кошка " << name << " гордо удал€етс€" << endl;
}

void PersianCat::sound() {
    cout << name << " м€укает очень тихо и нежно: м€у..." << endl;
}

void PersianCat::printInfo() {
    Cat::printInfo();
    cout << "ƒлина шерсти: " << woolLength << " см (персидска€ кошка)" << endl;
}

void PersianCat::groom() {
    cout << name << " нужно расчесывать каждый день!" << endl;
}