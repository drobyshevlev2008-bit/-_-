#include <iostream>
#include <string>
#include "point.h"
using namespace std;

int main(){
    setlocale(LC_ALL, "ru");

    //Создание точек
    //По умолчанию
    Point point_1; 
    cout << point_1 << endl;

    //С параметрами
    Point point_2(5,4);
    cout << point_2 << endl;

    //Копирование
    Point point_3(point_1);
    cout << point_3 << endl; 

    //Кол-во точек
    Point::getPointCount();
    cout << endl;

    //Расстояние от начала
    point_1.distance();
    cout << endl;
    
    point_2.distance();
    cout << endl;
    
    point_3.distance();
    cout << endl;

    // == !=
    cout << (point_1 == point_2 ? "yes" : "no") << endl;
    cout << (point_2 != point_2 ? "yes" : "no") << endl;

    // << >>
    Point point_4;
    cout << point_4 << endl;

    Point point_5;
    cin >> point_5;






    return 0;
}