#include <tutorial/math.h>
#include <cmath>
#include <iostream>

namespace tutorial
{
    double Sqrt(double value)
    {
        std::cout << "tutorial::Sqrt()" << std::endl;
        return std::pow(value, 0.5);
    }
}