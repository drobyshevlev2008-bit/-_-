#include <iostream>
#include "car.h"
#include <string>
using namespace std;

int main(){
    setlocale(LC_ALL, "ru");

    Vehicle* v1 = new Car();
    Vehicle* v2 = new ElectricCar();

    v1->startEngine();
    cout << "Max speed: " << v1->getMaxSpeed() << endl;
    v1->info();

    cout << endl;

    v2->startEngine();
    cout << "Max speed: " << v2->getMaxSpeed() << endl;
    v2->info();

    delete v1;
    delete v2;

    return 0;
}