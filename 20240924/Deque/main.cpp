// Section 20
// Challenge 1
// Identifying palindrome strings using a deque
#include <cctype>
#include <deque>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

bool is_palindrome(const std::string &s)
{
    std::deque<char> pal;
    for (const auto &word : s)
    {
        if (std::isalpha(word))
        {
            pal.push_back(std::toupper(word));
        }
    }
    // Front and back
    while (pal.size() > 1)
    {
        if (pal.front() != pal.back())
        {
            return false;
        }
        pal.pop_back();
        pal.pop_front();
    }

    // Iterator style
    //  auto it_begin = pal.begin();
    //  auto it_end = pal.end() - 1;
    //  for (; it_begin < it_end; it_begin++, it_end--)
    //  {
    //      if (*it_begin != *it_end)
    //      {
    //          return false;
    //      }
    //  }
    return true;
}

int main()
{
    std::vector<std::string> test_strings{"a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
                                          "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
                                          "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome"};

    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    for (const auto &s : test_strings)
    {
        std::cout << std::setw(8) << std::left << is_palindrome(s) << s << std::endl;
    }
    std::cout << std::endl;
    return 0;
}
