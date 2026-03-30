#include "Time.h"
#include <iostream>
using namespace std;

//Конструкторы
Time::Time() : hours(0), minutes(0), seconds(0) {
}

Time::Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {
    // нормализация сразу в конструкторе
    int total = hours * 3600 + minutes * 60 + seconds;
    if (total < 0) total = 0;
    hours   = total / 3600;
    minutes = (total % 3600) / 60;
    seconds = total % 60;
}

Time::Time(const Time& other) : hours(other.hours), minutes(other.minutes), seconds(other.seconds) {}

Time::~Time() {}

//Геттеры
int Time::getHours()   const { return hours;   }
int Time::getMinutes() const { return minutes; }
int Time::getSeconds() const { return seconds; }

//Прибавить секунду
void Time::tick() {
    seconds++;
    int total = hours * 3600 + minutes * 60 + seconds;
    if (total < 0) total = 0;
    hours   = total / 3600;
    minutes = (total % 3600) / 60;
    seconds = total % 60;
}

//Операторы
Time& Time::operator++() {
    seconds++;
    int total = hours * 3600 + minutes * 60 + seconds;
    if (total < 0) total = 0;
    hours   = total / 3600;
    minutes = (total % 3600) / 60;
    seconds = total % 60;
    return *this;
}

Time& Time::operator--() {
    seconds--;
    int total = hours * 3600 + minutes * 60 + seconds;
    if (total < 0) total = 0;
    hours   = total / 3600;
    minutes = (total % 3600) / 60;
    seconds = total % 60;
    return *this;
}

Time& Time::operator+=(int sec) {
    seconds += sec;
    int total = hours * 3600 + minutes * 60 + seconds;
    if (total < 0) total = 0;
    hours   = total / 3600;
    minutes = (total % 3600) / 60;
    seconds = total % 60;
    return *this;
}

Time& Time::operator-=(int sec) {
    seconds -= sec;
    int total = hours * 3600 + minutes * 60 + seconds;
    if (total < 0) total = 0;
    hours   = total / 3600;
    minutes = (total % 3600) / 60;
    seconds = total % 60;
    return *this;
}

bool Time::operator==(const Time& other) const {
    return hours == other.hours && minutes == other.minutes && seconds == other.seconds;
}

bool Time::operator!=(const Time& other) const {
    return !(*this == other);
}

bool Time::operator>(const Time& other) const {
    return (hours * 3600 + minutes * 60 + seconds) >
           (other.hours * 3600 + other.minutes * 60 + other.seconds);
}

bool Time::operator<(const Time& other) const {
    return (hours * 3600 + minutes * 60 + seconds) <
           (other.hours * 3600 + other.minutes * 60 + other.seconds);
}

int Time::operator()() const {
    return hours * 3600 + minutes * 60 + seconds;
}

ostream& operator<<(ostream& os, const Time& t) {
    if (t.hours < 10) os << "0";
    os << t.hours << ":";
    if (t.minutes < 10) os << "0";
    os << t.minutes << ":";
    if (t.seconds < 10) os << "0";
    os << t.seconds;
    return os;
}

istream& operator>>(istream& is, Time& t) {
    char c1, c2;
    is >> t.hours >> c1 >> t.minutes >> c2 >> t.seconds;

    return is;
}