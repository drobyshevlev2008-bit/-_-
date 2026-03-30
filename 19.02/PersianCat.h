#ifndef PERSIANCAT_H
#define PERSIANCAT_H

#include "Cat.h"

class PersianCat : public Cat {
private:
    int woolLength; // длина шерсти в см

public:
    PersianCat(string n, int a, string c, int wool);
    ~PersianCat();

    void sound();
    void printInfo();

    void groom(); // персидским кошкам нужен груминг
};

#endif
