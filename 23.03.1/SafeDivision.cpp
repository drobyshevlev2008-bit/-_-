#include <iostream>
#include <string>
#include <stdexcept>
#include "SafeDivision.h"
using namespace std;

//Статический метод деления
int SafeDivision::divide(double a, double b){
    if (b == 0){
        throw exception("DivisionByZeroException ");
    }
    return a / b;
}
