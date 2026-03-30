#ifndef HOUSECAT_H
#define HOUSECAT_H

#include "Cat.h"

class HouseCat : public Cat {
private:
    string ownerName; // имя хозяина

public:
    HouseCat(string n, int a, string c, string owner);
    ~HouseCat();

    void sound(); // переопределяем звук
    void printInfo(); // переопределяем вывод

    void play(); // свой метод
};

#endif
