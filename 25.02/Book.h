#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>

using namespace std; // студент любит так делать

class Book {
private:
    string author;      // автор
    string title;       // название
    string publisher;   // издательство
    int year;           // год издания
    int pages;          // количество страниц

public:
    // explicit конструктор (я так понял надо)
    explicit Book(string a = "", string t = "", string p = "", int y = 0, int pg = 0);

    // константные методы для получения данных (я не очень понял зачем, но сказали сделать)
    string getAuthor() const { return author; }
    string getTitle() const { return title; }
    string getPublisher() const { return publisher; }
    int getYear() const { return year; }
    int getPages() const { return pages; }

    // константный метод для вывода (чтобы не менять ничего)
    void display() const;

    // метод для проверки года (тоже константный)
    bool isAfterYear(int yr) const { return year > yr; }
};

#endif