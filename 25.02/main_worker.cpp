#include "Worker.h"

int main() {
    cout << "========== ЗАДАНИЕ 2: КЛАСС WORKER ==========" << endl << endl;

    const int CURRENT_YEAR = 2026; // текущий год для расчета стажа

    // создаем массив работников
    const int SIZE = 5;
    Worker workers[SIZE] = {
        Worker("Иванов Иван Иванович", "Директор", 2010, 150000),
        Worker("Петров Петр Петрович", "Инженер", 2015, 80000),
        Worker("Сидорова Анна Сергеевна", "Бухгалтер", 2018, 70000),
        Worker("Кузнецов Алексей Викторович", "Инженер", 2020, 65000),
        Worker("Смирнова Елена Владимировна", "Менеджер", 2022, 60000)
    };

    cout << "Все сотрудники предприятия:" << endl;
    for (int i = 0; i < SIZE; i++) {
        workers[i].display();
    }

    // 1. Список работников, стаж которых больше заданного
    int minExperience = 5;
    cout << "\n1. Сотрудники со стажем более " << minExperience << " лет:" << endl;
    bool found = false;
    for (int i = 0; i < SIZE; i++) {
        int exp = workers[i].getExperience(CURRENT_YEAR);
        if (exp > minExperience) {
            workers[i].display();
            cout << "Стаж: " << exp << " лет" << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "Сотрудников с таким стажем не найдено" << endl;
    }

    // 2. Список работников, зарплата которых больше заданной
    double minSalary = 70000;
    cout << "\n2. Сотрудники с зарплатой более " << minSalary << " руб.:" << endl;
    found = false;
    for (int i = 0; i < SIZE; i++) {
        if (workers[i].getSalary() > minSalary) {
            workers[i].display();
            found = true;
        }
    }
    if (!found) {
        cout << "Сотрудников с такой зарплатой не найдено" << endl;
    }

    // 3. Список работников, занимающих заданную должность
    string searchPosition = "Инженер";
    cout << "\n3. Сотрудники с должностью \"" << searchPosition << "\":" << endl;
    found = false;
    for (int i = 0; i < SIZE; i++) {
        if (workers[i].getPosition() == searchPosition) {
            workers[i].display();
            found = true;
        }
    }
    if (!found) {
        cout << "Сотрудников с такой должностью не найдено" << endl;
    }

    cout << "\n========== КОНЕЦ ЗАДАНИЯ 2 ==========" << endl;
    return 0;
}