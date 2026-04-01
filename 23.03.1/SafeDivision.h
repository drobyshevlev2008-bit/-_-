#pragma once
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

class SafeDivision{
private:
    int b;
public:
    //Статический метод деления
    static int divide(double a, double b);

};
