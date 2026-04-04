#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    //Инициализация
    vector<string> name = { "Алексей", "Вадим", "Олег", "Юра" };

    //Алгоритм
    sort(name.begin(), name.end(), [](string a, string b) {
        return a.size() < b.size();});

    //Вывод имен
    for (string n : name) {
        cout << n << endl;
    }

    //Новая инициализация для списка после удаления
    vector<string> new_name;
    //Удаление имен короче 4 символов через цикл
    for (string n : name) {
        if (n.size() >= 4) {
            new_name.push_back(n);
        }
    }

    cout << endl;

    //Вывод имен
    for (string n : new_name) {
        cout << n << endl;
    }

    return 0;
}
