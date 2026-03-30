#ifndef WILDCAT_H
#define WILDCAT_H

#include "Cat.h"

class WildCat : public Cat {
private:
    string habitat; // где живет

public:
    WildCat(string n, int a, string c, string h);
    ~WildCat();

    void sound();
    void printInfo();

    void hunt(); // дикие кошки охотятся
};

#endif
