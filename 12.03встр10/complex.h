#pragma once
#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    //По умолчанию
    Complex();                        

    //С параметрами
    Complex(double r, double i);

    //Копирования
    Complex(const Complex& other); 

    //Деструктор
    ~Complex();

    //Геттеры
    double getReal() const;
    double getImag() const;

    //Операторы
    //+
    Complex operator+(const Complex& other) const;
    
    //-
    Complex operator-(const Complex& other) const;
    
    //==
    bool operator==(const Complex& other) const;
    
    //!=
    bool operator!=(const Complex& other) const;

    //()
    double operator()() const;

    //<<
    friend ostream& operator<<(ostream& os, const Complex& z);
    
    //>>
    friend istream& operator>>(istream& is, Complex& z);
};