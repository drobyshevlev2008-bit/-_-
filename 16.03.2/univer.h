#pragma once
#include <string>
#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
    string group;

public:
    //С параметрами
    Student(const string& n, int a, const string& g);

    //Метод вывода
    void print() const;

    //Геттер 
    string getName() const;
};

///////////////////

class University {
private:
    string name;
    static const int MAX_STUDENTS = 100;
    Student* students[MAX_STUDENTS];
    int count;

    //Запрет копирования
    University(const University&) = delete;

public:
    //С параметрами через explicit
    explicit University(const string& univName);

    //Деструктор
    ~University();

    //Добавляем студента
    bool addStudent(Student* stud);

    //Метод вывода
    void print() const;
};