#include "timer.h"
#include <iostream>
#include <memory>
using namespace std;

//Конструктор
Timer::Timer() {
	cout << "Таймер запущен" << endl;
}

//Деструктор
Timer::~Timer() {
	cout << "Таймер остановлен" << endl;
}


