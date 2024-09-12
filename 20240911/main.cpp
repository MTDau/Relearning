// Section 14
// Challenge
#include <iostream>
#include "Mystring.h"

int main()
{

    std::cout << std::boolalpha << std::endl;
    Mystring a{"frank"};
    Mystring b{"frank"};

    std::cout << (a == b) << std::endl; // true
    std::cout << (a != b) << std::endl; // false

    b = "george";
    std::cout << (a == b) << std::endl; // false
    std::cout << (a != b) << std::endl; // true
    std::cout << (a < b) << std::endl;  // true
    std::cout << (a > b) << std::endl;  // false

    Mystring s1{"FRANK"};
    std::cout << s1 << std::endl; // FRANK
    s1 = -s1;
    std::cout << s1 << std::endl; // frank

    s1 = s1 + "*****";
    std::cout << s1 << std::endl; // frank*****

    s1 += "-----"; // frank*****-----
    std::cout << s1 << std::endl;

    Mystring s2{"12345"};
    s1 = s2 * 3;
    std::cout << s1 << std::endl; // 123451234512345

    Mystring s3{"abcdef"};
    s3 *= 5;
    std::cout << s3 << std::endl; // abcdefabcdefabcdefabcdefabcdef

    std::cout << "===============================" << std::endl;

    Mystring repeat_string;
    int repeat_times;
    std::cout << "Enter a string to repeat: " << std::endl;
    std::cin >> repeat_string;
    std::cout << "How many times would you like it repeated? " << std::endl;
    std::cin >> repeat_times;
    repeat_string *= repeat_times;
    std::cout << "The resulting string is: " << repeat_string << std::endl;

    std::cout << (repeat_string * 12) << std::endl;

    repeat_string = "RepeatMe";
    std::cout << (repeat_string + repeat_string + repeat_string) << std::endl;

    repeat_string += (repeat_string * 3);
    std::cout << repeat_string << std::endl;

    repeat_string = "RepeatMe";
    repeat_string += (repeat_string + repeat_string + repeat_string);

    std::cout << "===============================" << std::endl;

    Mystring s = "Frank";
    ++s;
    std::cout << s << std::endl; // FRANK

    s = -s;
    std::cout << s << std::endl; // frank

    Mystring result;
    result = ++s;
    std::cout << s << std::endl;      // FRANK
    std::cout << result << std::endl; // FRANK
    std::cout << "===============================" << std::endl;

    s = "Frank";
    s++;
    std::cout << s << std::endl; // FRANK

    s = -s;
    std::cout << s << std::endl; // frank
    result = s++;
    std::cout << s << std::endl;      // FRANK
    std::cout << result << std::endl; // frank

    return 0;
}
