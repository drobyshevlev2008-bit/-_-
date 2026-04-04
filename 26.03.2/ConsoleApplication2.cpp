#include <iostream>
#include <memory>
#include "timer.h"
using namespace std;

//Функция которая возвращает unique_ptr
std::unique_ptr<Timer> createTimer() {
	//Создается объект Timer с динамической памятью 
	return std::make_unique<Timer>();
}

int main()
{
	setlocale(LC_ALL, "ru");

	//Вызов функции 
	std::unique_ptr<Timer> timer = createTimer();



	return 0;
}
