// Section 19
// Challenge 3
// Word counter
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    std::ifstream in_file;
    in_file.open("./romeoandjuliet.txt");

    if (!in_file)
    {
        std::cerr << "Problem opening file" << std::endl;
        return 1;
    }
    std::string key_word{}, word{};
    std::cout << "Please enter the word that you want to search for: ";
    std::cin >> key_word;

    std::size_t count{}, found{}, total{};
    while (in_file >> word)
    {
        found = word.find(key_word);
        if (found != std::string::npos)
        {
            count++;
        }
        total++;
    }

    std::cout << "There is total " << total << " words were searched..." << std::endl
              << "The number of time that the word " << key_word << " found is: " << count << std::endl;

    return 0;
}
