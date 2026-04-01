#pragma once
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class Point{
private:
    int x;
    int y;
    static int pointCount;

public:
    //По умолчанию
    Point();

    //С параметрами
    Point(int xx, int yy);
    
    //Копирование
    Point(const Point& other);

    //Деструктор
    ~Point();

    //Геттеры
    int getX() const;
    int getY() const;

    //Получения количества точек
    static int getPointCount(){
        return pointCount;
    }

    //Метод для расстояния от начала координат
    int distance() const;

    //Перегрузки операторов
    //==
    bool operator==(const Point& other);

    //!=
    bool operator!=(const Point& other);

    //<<
    friend ostream& operator<<(ostream& os, const Point& point);
    
    //>>
    friend istream& operator>>(istream& is, Point& point);
};

///////////////////////////////////////

class Vehicle{
private:
    string model;
    int year;
    Point position;
    static int totalVehicles;

public:
    //С параметрами
    Vehicle(const string& m, int y, const Point& p);

    //Копирование
    Vehicle(const Vehicle& other);

    //Виртуальный деструктор
    virtual ~Vehicle();

    //Виртуальные методы
    //Геттер
    virtual double getMaxSpeed() const;

    //Вывод
    virtual void print() const;

    //Меняет позицию на новую точку
    void move(const Point& new_p);

    //Явный конструктор
    explicit Vehicle(const string& m);
};

///////////////////////////////////////

class Car : public Vehicle {
private:
    int doors;

public:
    //С параметрами
    Car(const string& m, int y, const string &p, int d);

    //Методы
    double getMaxSpeed() const;

    void print() const;
    
};