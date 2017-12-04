/// 
/// @brief cmake tutorial test cpp files

#include <cstdlib>
#include <cmath>
#include <iostream>

int main(int argc, char* argv[])
{
    int result = 0;
    if (argc < 2)
    {
        std::cout << "Usage: ./Tutorial xxx" << std::endl;
        result = 2;
    }

    if (0 == result)
    {
        double input_value = std::atof(argv[1]);
        double output_value = std::sqrt(input_value);

        std::cout << "The square root of " << input_value
        << " is " << output_value << std::endl;
    }

    return result;
}
