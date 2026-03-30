#include "Cat.h"
#include "HouseCat.h"
#include "WildCat.h"
#include "PersianCat.h"

int main() {
    cout << "========== НАЧАЛО ПРОГРАММЫ ==========" << endl << endl;

    cout << "--- Создаем разных кошек ---" << endl;

    // обычная кошка
    Cat obichnaya("Мурка", 3, "серая");
    cout << endl;

    // домашняя кошка
    HouseCat domashnyaya("Барсик", 2, "рыжий", "Анна");
    cout << endl;

    // дикая кошка
    WildCat dikaya("Леопольд", 5, "пятнистый", "джунгли");
    cout << endl;

    // персидская кошка
    PersianCat persik("Снежок", 1, "белый", 12);
    cout << endl;

    // еще одна домашняя для примера
    HouseCat murzilka("Мурзик", 4, "черный", "Петр");
    cout << endl;

    cout << "--- Всего кошек создано: " << Cat::getCount() << " ---" << endl << endl;

    cout << "========== ВЫЗЫВАЕМ МЕТОДЫ ==========" << endl << endl;

    cout << "1. Обычная кошка:" << endl;
    obichnaya.printInfo();
    obichnaya.sound();
    cout << endl;

    cout << "2. Домашняя кошка:" << endl;
    domashnyaya.printInfo();
    domashnyaya.sound();
    domashnyaya.play();
    cout << endl;

    cout << "3. Дикая кошка:" << endl;
    dikaya.printInfo();
    dikaya.sound();
    dikaya.hunt();
    cout << endl;

    cout << "4. Персидская кошка:" << endl;
    persik.printInfo();
    persik.sound();
    persik.groom();
    cout << endl;

    cout << "========== ПОЛИМОРФИЗМ (пытаемся разобраться) ==========" << endl << endl;

    // создаем массив указателей (так вроде можно)
    Cat* kotiki[5];
    kotiki[0] = &obichnaya;
    kotiki[1] = &domashnyaya;
    kotiki[2] = &dikaya;
    kotiki[3] = &persik;
    kotiki[4] = &murzilka;

    cout << "Вызываем sound() через указатели:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Кошка " << i + 1 << ": ";
        kotiki[i]->sound(); // вызываем звук
    }
    cout << endl;

    cout << "Я не совсем понял почему так работает, но вроде правильно..." << endl << endl;

    cout << "========== ЦЕПОЧКА КОНСТРУКТОРОВ ==========" << endl << endl;

    cout << "Создаем временную кошку чтобы увидеть порядок:" << endl;
    {
        HouseCat vremennaya("Временная", 1, "белая", "Никто");
        cout << "  Временная кошка живет в этом блоке" << endl;
        vremennaya.sound();
    } // тут должна уничтожиться
    cout << "Временная кошка исчезла" << endl << endl;

    cout << "========== ПРОВЕРКА СРЕЗКИ (я слышал такое слово) ==========" << endl << endl;

    // пытаемся скопировать домашнюю кошку в обычную
    Cat kopiya = domashnyaya;
    cout << "Оригинал (домашняя кошка):" << endl;
    domashnyaya.printInfo();
    cout << endl;

    cout << "Копия в обычную кошку:" << endl;
    kopiya.printInfo();
    cout << "Звук копии: ";
    kopiya.sound(); // будет мяу, а не мррр-мяу
    cout << "Вот это интересно... копия потеряла информацию о том что она домашняя!" << endl << endl;

    cout << "========== ВСЕГО КОШЕК СЕЙЧАС: " << Cat::getCount() << " ==========" << endl << endl;

    cout << "========== КОНЕЦ ПРОГРАММЫ ==========" << endl;
    cout << "Сейчас все кошки будут уничтожаться (деструкторы вызовутся сами)" << endl << endl;

    return 0;
}