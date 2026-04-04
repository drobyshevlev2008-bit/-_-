#pragma once
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

//Пространство имен 
namespace Geometry{
    //Константа PI
    const double PI = 3.14159;

    //Функция вычисления площади круга
    double circleArea(double radius);

    //Функция вычисления площади прямоугольника
    double rectangleArea(double width, double height);

    //Вложенное пространство
    namespace Shapes{
        class Circle{
    
        public:
            double area();
            double radius;
        };
    }
}
