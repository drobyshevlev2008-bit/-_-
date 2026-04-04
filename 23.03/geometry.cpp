#include <iostream>
#include <string>
#include <stdexcept>
#include "geometry.h"
using namespace std;

//Функция вычисления площиди круга
double Geometry::circleArea(double radius){
    return PI * radius * radius;
}

//Функция вычисления площади прямоугольника
double Geometry::rectangleArea(double width, double height){
    return width * height;
}

//Тот же circleArea
double Geometry::Shapes::Circle::area(){
    Geometry::circleArea(radius);
}
