#include "Book.h"

// explicit конструктор (вроде так)
Book::Book(string a, string t, string p, int y, int pg)
    : author(a), title(t), publisher(p), year(y), pages(pg) {
    // пустое тело конструктора
}

void Book::display() const {
    cout << "=========================" << endl;
    cout << "Автор: " << author << endl;
    cout << "Название: " << title << endl;
    cout << "Издательство: " << publisher << endl;
    cout << "Год: " << year << endl;
    cout << "Страниц: " << pages << endl;
    cout << "=========================" << endl;
}