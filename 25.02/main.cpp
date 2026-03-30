#include "Book.h"
#include "Worker.h"

int main() {
    // ЗАДАНИЕ 1
    cout << "========== ЗАДАНИЕ 1: КЛАСС BOOK ==========" << endl << endl;

    const int BOOK_COUNT = 5;
    Book books[BOOK_COUNT] = {
        Book("Пушкин А.С.", "Евгений Онегин", "АСТ", 2005, 320),
        Book("Лермонтов М.Ю.", "Герой нашего времени", "Эксмо", 2010, 280),
        Book("Пушкин А.С.", "Капитанская дочка", "АСТ", 2015, 190),
        Book("Толстой Л.Н.", "Война и мир", "Эксмо", 2000, 1200),
        Book("Пушкин А.С.", "Руслан и Людмила", "Дрофа", 2020, 150)
    };

    cout << "Все книги в библиотеке:" << endl;
    for (int i = 0; i < BOOK_COUNT; i++) {
        books[i].display();
    }

    // поиск по автору
    string searchAuthor = "Пушкин А.С.";
    cout << "\n1. Книги автора " << searchAuthor << ":" << endl;
    bool foundBook = false;
    for (int i = 0; i < BOOK_COUNT; i++) {
        if (books[i].getAuthor() == searchAuthor) {
            books[i].display();
            foundBook = true;
        }
    }
    if (!foundBook) {
        cout << "Книг этого автора не найдено" << endl;
    }

    // поиск по издательству
    string searchPublisher = "АСТ";
    cout << "\n2. Книги издательства " << searchPublisher << ":" << endl;
    foundBook = false;
    for (int i = 0; i < BOOK_COUNT; i++) {
        if (books[i].getPublisher() == searchPublisher) {
            books[i].display();
            foundBook = true;
        }
    }
    if (!foundBook) {
        cout << "Книг этого издательства не найдено" << endl;
    }

    // поиск после года
    int afterYear = 2010;
    cout << "\n3. Книги, выпущенные после " << afterYear << " года:" << endl;
    foundBook = false;
    for (int i = 0; i < BOOK_COUNT; i++) {
        if (books[i].isAfterYear(afterYear)) {
            books[i].display();
            foundBook = true;
        }
    }
    if (!foundBook) {
        cout << "Книг после этого года не найдено" << endl;
    }

    cout << "\n\n========== ЗАДАНИЕ 2: КЛАСС WORKER ==========" << endl << endl;

    const int CURRENT_YEAR = 2026;
    const int WORKER_COUNT = 5;

    Worker workers[WORKER_COUNT] = {
        Worker("Иванов Иван Иванович", "Директор", 2010, 150000),
        Worker("Петров Петр Петрович", "Инженер", 2015, 80000),
        Worker("Сидорова Анна Сергеевна", "Бухгалтер", 2018, 70000),
        Worker("Кузнецов Алексей Викторович", "Инженер", 2020, 65000),
        Worker("Смирнова Елена Владимировна", "Менеджер", 2022, 60000)
    };

    cout << "Все сотрудники предприятия:" << endl;
    for (int i = 0; i < WORKER_COUNT; i++) {
        workers[i].display();
    }

    // стаж больше заданного
    int minExperience = 5;
    cout << "\n1. Сотрудники со стажем более " << minExperience << " лет:" << endl;
    bool foundWorker = false;
    for (int i = 0; i < WORKER_COUNT; i++) {
        int exp = workers[i].getExperience(CURRENT_YEAR);
        if (exp > minExperience) {
            workers[i].display();
            cout << "Стаж: " << exp << " лет" << endl;
            foundWorker = true;
        }
    }
    if (!foundWorker) {
        cout << "Сотрудников с таким стажем не найдено" << endl;
    }

    // зарплата больше заданной
    double minSalary = 70000;
    cout << "\n2. Сотрудники с зарплатой более " << minSalary << " руб.:" << endl;
    foundWorker = false;
    for (int i = 0; i < WORKER_COUNT; i++) {
        if (workers[i].getSalary() > minSalary) {
            workers[i].display();
            foundWorker = true;
        }
    }
    if (!foundWorker) {
        cout << "Сотрудников с такой зарплатой не найдено" << endl;
    }

    // поиск по должности
    string searchPosition = "Инженер";
    cout << "\n3. Сотрудники с должностью \"" << searchPosition << "\":" << endl;
    foundWorker = false;
    for (int i = 0; i < WORKER_COUNT; i++) {
        if (workers[i].getPosition() == searchPosition) {
            workers[i].display();
            foundWorker = true;
        }
    }
    if (!foundWorker) {
        cout << "Сотрудников с такой должностью не найдено" << endl;
    }

    cout << "\n========== КОНЕЦ ПРОГРАММЫ ==========" << endl;
    return 0;
}