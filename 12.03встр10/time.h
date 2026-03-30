#pragma once
#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // По умолчанию 
    Time();

    //С параметрами 
    Time(int h, int m, int s);

    //Копирования
    Time(const Time& other);

    //Деструктор
    ~Time();

    //Прибавить секунду
    void tick();

    //Геттеры 
    int getHours()   const;
    int getMinutes() const;
    int getSeconds() const;

    //Операторы
    Time operator+(const Time& other) const;   
    Time operator-(const Time& other) const;     
    bool operator==(const Time& other) const;
    bool operator!=(const Time& other) const;
    bool operator>(const Time& other) const;
    bool operator<(const Time& other) const;

    Time& operator++();              
    Time& operator--();               
    Time& operator+=(int sec);
    Time& operator-=(int sec);

    int operator()() const;      

    friend ostream& operator<<(ostream& os, const Time& t);
    friend istream& operator>>(istream& is, Time& t);
};