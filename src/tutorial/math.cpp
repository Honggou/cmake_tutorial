#include <cmath>
#include <iostream>
#include <sqrt_table.h>
#include <tutorial/math.h>

namespace tutorial
{
double Sqrt(double value)
{
    double result = 0.0;
    if (value < 10.0)
    {
        std::cout << "tutorial::Sqrt(), call kSqrtTable" << std::endl;
        result = kSqrtTable[static_cast<int>(value)];
    }
    else
    {
        std::cout << "tutorial::Sqrt(), call std::pow" << std::endl;
        result = std::pow(value, 0.5);
    }

    return result;
}
}  // namespace tutorial