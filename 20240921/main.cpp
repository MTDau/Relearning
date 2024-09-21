// Section 19
// Challenge 4
// Copy Romeo and Juliet with line numbers
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

int main()
{
    std::ifstream in_file{"./romeoandjuliet"};
    std::ofstream out_file{"./romeoandjuliet_output.txt"};
    if (!in_file.is_open())
    {
        std::cerr << "There is not input file that opened." << std::endl;
        return 1;
    }
    if (!out_file.is_open())
    {
        std::cerr << "There is not output file that opened." << std::endl;
        return 1;
    }
    std::string line{};
    unsigned int line_count{1};

    // //Version 1: Number everyline include blank line
    // while(std::getline(in_file,line))
    // {
    //     out_file << line_count << std::setw(8) << "" << line << "\n";
    //     line_count++;
    // }

    // Version2: Number only line that has word:
    while (std::getline(in_file, line))
    {
        if (line.empty())
        {
            out_file << "\n";
        }
        else
        {
            out_file << line_count << std::setw(8) << "" << line << "\n";
            line_count++;
        }
    }

    std::cout << "Copy was completed" << std::endl;
    return 0;
}
