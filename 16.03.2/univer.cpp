#include "univer.h"
using namespace std;

//С параметрами
Student::Student(const string& n, int a, const string& g) 
    : name(n), age(a), group(g) {
    cout << "Создан студент: " << name << endl;
}

//Метод вывода
void Student::print() const {
    cout << name << ", " << age << " лет, группа " << group << endl;
}

//Геттер
string Student::getName() const {
    return name;
}

///////////////////

//С параметрами через explicit
University::University(const string& univName) : name(univName), count(0) {
    for (int i = 0; i < MAX_STUDENTS; ++i) {
        students[i] = nullptr;
    }
    cout << "Создан университет: " << name << endl;
}

//Деструктор
University::~University() {

    for (int i = 0; i < count; ++i) {
        students[i] = nullptr;
    }

    count = 0;
    cout << "Университет " << name << " закрыт" << endl;
}

//Добавляем студента
bool University::addStudent(Student* stud) {
    if (!stud) {
        return false;
    }

    if (count >= MAX_STUDENTS) {
        cout << "Университет заполнен" << endl;
        return false;
    }

    students[count] = stud;
    count++;

    cout << "Зачислен студент: " << stud->getName() << endl;
    return true;
}

//Метод вывода
void University::print() const {
    cout << "Университет: " << name << endl;

    if (count == 0) {
        cout << "Студентов нет" << endl;
        return;
    }

    for (int i = 0; i < count; ++i) {
        cout << " ";
        students[i]->print();
    }
    cout << endl;
}