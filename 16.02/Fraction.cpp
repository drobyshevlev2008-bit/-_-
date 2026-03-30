#include "Fraction.h"
#include <cmath>
#include <iostream>

// Нахождение наибольшего общего делителя
int Fraction::gcd(int a, int b) const {
    a = std::abs(a);
    b = std::abs(b);
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Сокращение дроби
void Fraction::reduce() {
    if (denominator == 0) {
        std::cerr << "Ошибка: знаменатель не может быть равен 0!" << std::endl;
        denominator = 1;
    }

    if (denominator < 0) {
        numerator = -numerator;
        denominator = -denominator;
    }

    int divisor = gcd(numerator, denominator);
    numerator /= divisor;
    denominator /= divisor;
}

// Конструктор с параметрами (использует список инициализаторов)
Fraction::Fraction(int num, int den) : numerator(num), denominator(den) {
    if (denominator == 0) {
        std::cerr << "Ошибка: знаменатель не может быть равен 0! Устанавливаем знаменатель = 1" << std::endl;
        denominator = 1;
    }
    reduce(); // Сокращаем дробь при создании
}

// Метод для вывода дроби на экран
void Fraction::display() const {
    std::cout << numerator;
    if (denominator != 1) {
        std::cout << "/" << denominator;
    }
}

// Перегрузка оператора вывода
std::ostream& operator<<(std::ostream& os, const Fraction& frac) {
    os << frac.numerator;
    if (frac.denominator != 1) {
        os << "/" << frac.denominator;
    }
    return os;
}

// Сложение дроби с дробью (возвращает ссылку для цепочечных вызовов)
Fraction& Fraction::add(const Fraction& other) {
    // a/b + c/d = (a*d + c*b) / (b*d)
    numerator = numerator * other.denominator + other.numerator * denominator;
    denominator = denominator * other.denominator;
    reduce();
    return *this; // Возвращаем ссылку на текущий объект для цепочечных вызовов
}

// Вычитание дроби с дробью (возвращает ссылку для цепочечных вызовов)
Fraction& Fraction::subtract(const Fraction& other) {
    // a/b - c/d = (a*d - c*b) / (b*d)
    numerator = numerator * other.denominator - other.numerator * denominator;
    denominator = denominator * other.denominator;
    reduce();
    return *this;
}

// Умножение дроби с дробью (возвращает ссылку для цепочечных вызовов)
Fraction& Fraction::multiply(const Fraction& other) {
    // a/b * c/d = (a*c) / (b*d)
    numerator = numerator * other.numerator;
    denominator = denominator * other.denominator;
    reduce();
    return *this;
}

// Сложение дроби с целым числом (возвращает ссылку для цепочечных вызовов)
Fraction& Fraction::add(int num) {
    // a/b + c = (a + c*b) / b
    numerator = numerator + num * denominator;
    reduce();
    return *this;
}

// Вычитание дроби с целым числом (возвращает ссылку для цепочечных вызовов)
Fraction& Fraction::subtract(int num) {
    // a/b - c = (a - c*b) / b
    numerator = numerator - num * denominator;
    reduce();
    return *this;
}

// Умножение дроби с целым числом (возвращает ссылку для цепочечных вызовов)
Fraction& Fraction::multiply(int num) {
    // a/b * c = (a*c) / b
    numerator = numerator * num;
    reduce();
    return *this;
}

// Получение вещественного значения дроби
double Fraction::getValue() const {
    return static_cast<double>(numerator) / denominator;
}