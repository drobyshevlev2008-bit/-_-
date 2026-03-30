#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>

class Fraction {
private:
    int numerator;   // числитель
    int denominator; // знаменатель

    // Вспомогательный метод для нахождения НОД
    int gcd(int a, int b) const;

    // Метод для сокращения дроби
    void reduce();

public:
    // Конструктор с параметрами (использует список инициализаторов)
    Fraction(int num = 0, int den = 1);

    // Конструктор копирования (по умолчанию, но добавим для ясности)
    Fraction(const Fraction& other) = default;

    // Деструктор (по умолчанию)
    ~Fraction() = default;

    // Метод для вывода дроби на экран
    void display() const;

    // Операции с дробью и дробью (возвращают ссылку для цепочечных вызовов)
    Fraction& add(const Fraction& other);
    Fraction& subtract(const Fraction& other);
    Fraction& multiply(const Fraction& other);

    // Операции с дробью и целым числом (возвращают ссылку для цепочечных вызовов)
    Fraction& add(int num);
    Fraction& subtract(int num);
    Fraction& multiply(int num);

    // Метод для получения значения дроби (для отладки)
    double getValue() const;

    // Перегрузка оператора вывода для удобства
    friend std::ostream& operator<<(std::ostream& os, const Fraction& frac);
};

#endif 