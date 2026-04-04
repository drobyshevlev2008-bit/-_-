#include <iostream>
#include <string>
#include <stdexcept>
#include "utils.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    
    cout << Utils::clamp(1.7, 0.0, 1.0) << endl;
    cout << Utils::clamp(-0.5, 0.0, 1.0) << endl;

    return 0;
}