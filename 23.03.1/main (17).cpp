#include <iostream>
#include <string>
#include <stdexcept>
#include "SafeDivision.h"
using namespace std;

int main(){
    setlocale(LC_ALL, "ru");

    SafeDivision safe_1;

    try{
        safe_1.divide(3.0, 0.0);
    }
    catch(const exception& e){
        cout << "Expection: " << e.what() << endl;  
    }

    return 0;
}