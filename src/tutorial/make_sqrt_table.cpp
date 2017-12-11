
#include <cmath>
#include <cstdio>
#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
    int result = 0;

    // make sure we have enough arguments
    if (argc < 2)
    {
        result = 1;
    }

    if (0 == result)
    {
        // open the output file
        std::fstream file_stream(argv[1], std::ios::out);

        // create a source file with a table of square roots
        file_stream << "#pragma once" << std::endl;
        file_stream << "namespace tutorial" << std::endl;
        file_stream << "{" << std::endl;

        file_stream << "const double kSqrtTable[] = {" << std::endl;
        for (auto i = 0U; i < 10U; ++i)
        {
            file_stream << "    " << std::sqrt(i) << "," << std::endl;
        }

        // close the table with a zero
        file_stream << "    0};" << std::endl;
        file_stream << "}" << std::endl;
        file_stream.close();
    }

    return result;
}