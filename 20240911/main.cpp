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
