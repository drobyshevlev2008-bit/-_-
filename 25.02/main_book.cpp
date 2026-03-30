#include "Book.h"

int main() {
    cout << "========== ЗАДАНИЕ 1: КЛАСС BOOK ==========" << endl << endl;

    // создаем массив книг (как просили)
    const int SIZE = 5;
    Book books[SIZE] = {
        Book("Пушкин А.С.", "Евгений Онегин", "АСТ", 2005, 320),
        Book("Лермонтов М.Ю.", "Герой нашего времени", "Эксмо", 2010, 280),
        Book("Пушкин А.С.", "Капитанская дочка", "АСТ", 2015, 190),
        Book("Толстой Л.Н.", "Война и мир", "Эксмо", 2000, 1200),
        Book("Пушкин А.С.", "Руслан и Людмила", "Дрофа", 2020, 150)
    };

    cout << "Все книги в библиотеке:" << endl;
    for (int i = 0; i < SIZE; i++) {
        books[i].display();
    }

    // 1. Список книг заданного автора
    string searchAuthor = "Пушкин А.С.";
    cout << "\n1. Книги автора " << searchAuthor << ":" << endl;
    bool found = false;
    for (int i = 0; i < SIZE; i++) {
        if (books[i].getAuthor() == searchAuthor) {
            books[i].display();
            found = true;
        }
    }
    if (!found) {
        cout << "Книг этого автора не найдено" << endl;
    }

    // 2. Список книг заданного издательства
    string searchPublisher = "АСТ";
    cout << "\n2. Книги издательства " << searchPublisher << ":" << endl;
    found = false;
    for (int i = 0; i < SIZE; i++) {
        if (books[i].getPublisher() == searchPublisher) {
            books[i].display();
            found = true;
        }
    }
    if (!found) {
        cout << "Книг этого издательства не найдено" << endl;
    }

    // 3. Список книг, выпущенных после заданного года
    int afterYear = 2010;
    cout << "\n3. Книги, выпущенные после " << afterYear << " года:" << endl;
    found = false;
    for (int i = 0; i < SIZE; i++) {
        if (books[i].isAfterYear(afterYear)) {
            books[i].display();
            found = true;
        }
    }
    if (!found) {
        cout << "Книг после этого года не найдено" << endl;
    }

    cout << "\n========== КОНЕЦ ЗАДАНИЯ 1 ==========" << endl;
    return 0;
}