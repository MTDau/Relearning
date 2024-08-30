#include <iostream>
#include <string>
int main()
{
    std::cout << "Please enter your line for the pyramid: ";
    std::string base_line;
    std::getline(std::cin, base_line);

    // Need to get the size of the string for building.
    std::size_t heigh{base_line.size()}; // We have the heigh
    for (int i{0}; i < heigh; i++)
    {
        // print layer by layer first print the space then the char we need
        // the number of space is heigh minus i
        for (int k{heigh}; k > i; k--)
        {
            std::cout << " ";
        }
        for (int k{}; k <= i; k++)
        {
            std::cout << base_line.at(k);
        }
        for (int k{i - 1}; k >= 0; k--)
        {
            std::cout << base_line.at(k);
        }
        std::cout << std::endl;
    }

    return 0;
}
