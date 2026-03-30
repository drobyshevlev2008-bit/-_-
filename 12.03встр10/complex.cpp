#include <iostream>
#include "complex.h"

//По умолчанию
Complex::Complex() : real(0.0), imag(0.0) {
}

//С параметрами
Complex::Complex(double r, double i) : real(r), imag(i) {
}

//Копирования
Complex::Complex(const Complex& other) : real(other.real), imag(other.imag) {
}

//Деструктор
Complex::~Complex() {
}

//Геттеры
double Complex::getReal() const {
    return real;
}
double Complex::getImag() const {
    return imag;
}

//Операторы
//+
Complex Complex::operator+(const Complex& other) const {
    return Complex(real + other.real, imag + other.imag);
}

//-
Complex Complex::operator-(const Complex& other) const {
    return Complex(real - other.real, imag - other.imag);
}

//==
bool Complex::operator==(const Complex& other) const {
    return (real == other.real) && (imag == other.imag);
}

//!=
bool Complex::operator!=(const Complex& other) const {
    return !(*this == other);
}

//()
double Complex::operator()() const {
    return real * real + imag * imag; 
}

//<<
ostream& operator<<(ostream& os, const Complex& z) {
    os << z.real;
    if (z.imag >= 0)
        os << "+";
    else
        os << "-";
    os << abs(z.imag) << "i";
    return os;
}

//>>
istream& operator>>(istream& is, Complex& z) {
    is >> z.real >> z.imag;
    return is;
}