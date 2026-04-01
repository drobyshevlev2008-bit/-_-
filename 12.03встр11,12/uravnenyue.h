#pragma once
#include <iostream>
#include <cmath>
using namespace std;

template<typename T>

void Linear_Uravnennyue(T a, T b){
    if(a == 0){
        if(b == 0){
            cout << "Бесконечное решение!" << endl;
        }
        else{
            cout << "Нет решения!" << endl;
        }
    }
    else{
        T x = -b/a;
        cout << "x = " << x << endl;
    }
}

template<typename T>
void Square_Uravnennyue(T a, T b, T c){
    if (a == 0 ){
        Linear_Uravnennyue(b,c);
        return;
    }

    T disc = b * b - 4 * a * c;

    if(disc > 0){
        T x1 = (-b + sqrt(disc)) / (2 * a);
        T x2 = (-b - sqrt(disc)) / (2 * a);
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if(disc == 0){
        T x = -b / (2 * a);
        cout << "x = " << x << endl;
    }
    else{
        cout << "Нет корней" << endl;
    }
}
