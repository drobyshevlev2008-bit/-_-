#include "Fraction.h"
#include <iostream>

int main() {
    std::cout << "=== Демонстрация работы класса Дробь ===" << std::endl;

    // Конструктор по умолчанию (делегирование)
    Fraction f1;
    std::cout << "f1 (по умолчанию): " << f1 << std::endl;

    // Конструктор с параметрами
    Fraction f2(3, 4);
    std::cout << "f2 (3/4): " << f2 << std::endl;

    Fraction f3(5, 6);
    std::cout << "f3 (5/6): " << f3 << std::endl;

    Fraction f4(2, 4); // Будет сокращена до 1/2
    std::cout << "f4 (2/4 после сокращения): " << f4 << std::endl;

    Fraction f5(6, -8); // Будет приведена к -3/4
    std::cout << "f5 (6/-8 после сокращения): " << f5 << std::endl;

    std::cout << "\n=== Цепочечные вызовы с дробями ===" << std::endl;
    Fraction result1(1, 2);
    std::cout << "Начальная дробь: " << result1 << std::endl;

    // Цепочечные вызовы: (1/2 + 3/4) * 5/6 - 1/3
    result1.add(Fraction(3, 4))
        .multiply(Fraction(5, 6))
        .subtract(Fraction(1, 3));
    std::cout << "Результат цепочечных операций: " << result1 << std::endl;
    std::cout << "Вещественное значение: " << result1.getValue() << std::endl;

    std::cout << "\n=== Цепочечные вызовы с целыми числами ===" << std::endl;
    Fraction result2(2, 3);
    std::cout << "Начальная дробь: " << result2 << std::endl;

    // Цепочечные вызовы: (2/3 + 2) * 3 - 1
    result2.add(2)
        .multiply(3)
        .subtract(1);
    std::cout << "Результат цепочечных операций: " << result2 << std::endl;
    std::cout << "Вещественное значение: " << result2.getValue() << std::endl;

    std::cout << "\n=== Смешанные цепочечные вызовы ===" << std::endl;
    Fraction result3(1, 4);
    std::cout << "Начальная дробь: " << result3 << std::endl;

    // Смешанные вызовы: (1/4 + 1/2) * 3 + 2/3
    result3.add(Fraction(1, 2))
        .multiply(3)
        .add(Fraction(2, 3));
    std::cout << "Результат смешанных операций: " << result3 << std::endl;
    std::cout << "Вещественное значение: " << result3.getValue() << std::endl;

    std::cout << "\n=== Отдельные операции ===" << std::endl;
    Fraction a(1, 3);
    Fraction b(1, 6);
    Fraction c(2, 5);

    std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;

    Fraction sum = a;
    sum.add(b);
    std::cout << "a + b = " << sum << std::endl;

    Fraction diff = a;
    diff.subtract(b);
    std::cout << "a - b = " << diff << std::endl;

    Fraction prod = a;
    prod.multiply(b);
    std::cout << "a * b = " << prod << std::endl;

    Fraction withInt(2, 3);
    std::cout << "2/3 + 2 = " << withInt.add(2) << std::endl;

    return 0;
}