#include <iostream>
#include "avg.h"
using namespace std;


int main(){
    setlocale(LC_ALL, "ru");

    //Линейное уравнение
    Linear_Uravnennyue(1,7);
    cout << endl;
    
    //Квадратное уравнение
    Square_Uravnennyue(4,8,1);

    return 0;
}
