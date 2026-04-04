#include <iostream>
#include <string>
#include <stdexcept>
#include "geometry.h"
using namespace std;

int main(){
    setlocale(LC_ALL, "ru");

    //Площадь круга с радиусом 6.7
    cout << Geometry::circleArea(6.7);

    //Площадь прямоугольника с сторонами 4.5 и 2.0
    cout << Geometry::rectangleArea(4.5, 2.0);

    //Создание объекта
    Geometry::Shapes::Circle cir(4.0);
    //Вызов area
    cout << cir.area();

    return 0;
}