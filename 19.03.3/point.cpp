#include <iostream>
#include <math.h>
#include "point.h"
#include <string>
using namespace std;

//По умолчанию
Point::Point(){
    x = 0;
    y = 0;
    pointCount++;
}

//С параметрами
Point::Point(int xx, int yy) : x(xx), y(yy) {
    pointCount++;
}

//Копирование
Point::Point(const Point& other){
    x = other.x;
    y = other.y;
    pointCount++;
}

//Деструктор
Point::~Point(){
    pointCount--;
}

//Геттеры
int Point::getX() const{ return x; }
int Point::getY() const{ return y; }

//Метод для расстояния от начала координат
int Point::distance() const{
    //Формула для нахождения
    return sqrt(x * x + y * y);
}

//Перегрузки операторов
//==
bool Point::operator==(const Point &other){
    return x == other.x;
    return y == other.y;
}

//!=
bool Point::operator!=(const Point& other){
    return x != other.x;
    return y != other.y;
}

//<<
ostream& operator<<(ostream& os, const Point& point){
    os << "x: " << point.x << endl;
    os << "y: " << point.y << endl;
}

//>>
istream& operator>>(istream& is, Point& point){
    is >> point.x >> point.y;
}

///////////////////////////////////////

//С параметрами
Vehicle::Vehicle(const string& m, int y, const Point& p) : model(m), year(y), position(p){
    totalVehicles++;
}

//Копирование
Vehicle::Vehicle(const Vehicle& other){
    model = other.model;
    year = other.year;
    position = other.position;
    
    totalVehicles++;
}

//Виртуальный деструктор
Vehicle::~Vehicle(){
    totalVehicles--;
}

//Виртуальные методы
//Геттер

//Вывод
void Vehicle::print() const{
    cout << model << endl;
    cout << year << endl;
    cout << position << endl;
}

//Меняет позицию на новую точку
void Vehicle::move(const Point& new_p){

}

//Явный конструктор
explicit Vehicle::Vehicle(const string& m) : model(model), year(2020), position(Point(0,0)) {
    totalVehicles++;
} 