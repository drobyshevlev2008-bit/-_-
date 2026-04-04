#include "utils.h"
#include <fstream>
using namespace std;

namespace { 

    void normalize(double& value) {
        if (value < 0.0) value = 0.0;
        if (value > 1.0) value = 1.0;
    }

    int counter = 0;
}

namespace Utils {

    double clamp(double val, double min, double max) {
        double temp = val;
        normalize(temp);
        
        if (temp < min) temp = min;
        if (temp > max) temp = max;
        
        counter++;         
        return temp;
    }
}