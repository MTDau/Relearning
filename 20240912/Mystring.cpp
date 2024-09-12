#include <iostream>
#include <cstring>
#include "Mystring.h"

// No-args constructor
Mystring::Mystring()
    : str{nullptr}
{
    str = new char[1];
    *str = '\0';
}

// Overloaded constructor
Mystring::Mystring(const char *s)
    : str{nullptr}
{
    if (s == nullptr)
    {
        str = new char[1];
        *str = '\0';
    }
    else
    {
        str = new char[std::strlen(s) + 1];
        strcpy(str, s);
    }
}

// Copy constructor
Mystring::Mystring(const Mystring &source)
    : str{nullptr}
{
    str = new char[std::strlen(source.str) + 1];
    strcpy(str, source.str);
    //       std::cout << "Copy constructor used" << std::endl;
}

// Move constructor
Mystring::Mystring(Mystring &&source)
    : str(source.str)
{
    source.str = nullptr;
    //        std::cout << "Move constructor used" << std::endl;
}

// Destructor
Mystring::~Mystring()
{
    delete[] str;
}

// Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs)
{
    //    std::cout << "Using copy assignment" << std::endl;

    if (this == &rhs)
        return *this;
    delete[] str;
    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(str, rhs.str);
    return *this;
}

// Move assignment
Mystring &Mystring::operator=(Mystring &&rhs)
{
    //   std::cout << "Using move assignment" << std::endl;
    if (this == &rhs)
        return *this;
    delete[] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

// Compare operator
bool operator==(const Mystring &lhs, const Mystring &rhs) 
{
    return (std::strcmp(lhs.str, rhs.str) == 0);
}

// Not equality
bool operator!=(const Mystring &lhs, const Mystring &rhs) 
{
    return (std::strcmp(lhs.str, rhs.str) != 0);
}

// Lexically greater
bool operator>(const Mystring &lhs, const Mystring &rhs) 
{
    return (std::strcmp(lhs.str, rhs.str) > 0);
}

// Lexically Smaller
bool operator<(const Mystring &lhs, const Mystring &rhs) 
{
    return (std::strcmp(lhs.str, rhs.str) < 0);
}

// Lower case operator
Mystring operator-(const Mystring &lhs)
{
    char *buff = new char[std::strlen(lhs.str) + 1];
    for (std::size_t i = 0; i < std::strlen(lhs.str) + 1; i++)
    {
        buff[i] = std::tolower(lhs.str[i]);
    }
    Mystring temp{buff};
    delete[] buff;
    return temp;
}

// Concatenate
Mystring operator+(const Mystring &lhs, const Mystring &rhs)
{
    char *buff = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff, lhs.str);
    std::strcat(buff, rhs.str);
    Mystring temp{buff};
    delete[] buff;
    return temp;
}

// Join string
Mystring &operator+=(Mystring &lhs, const Mystring &rhs)
{
    lhs = lhs + rhs;
    return lhs;
}

// Mutiply string
Mystring operator*(const Mystring &lhs, const std::size_t i)
{
    Mystring temp;
    for (int k = 0; k < i; k++)
        temp = temp + lhs;
    return temp;
}

// Mutiply string then reassign
Mystring &operator*=(Mystring &lhs, const std::size_t i)
{
    lhs = lhs * i;
    return lhs;
}

// Make Upercase. Pre-increasment
Mystring &operator++(Mystring &lhs)
{
    for (std::size_t i = 0; i < std::strlen(lhs.str); i++)
    {
        lhs.str[i] = std::toupper(lhs.str[i]);
    }
    return lhs;
}
// Make Upercase. Post-increasement
Mystring operator++(Mystring &lhs, int)
{
    Mystring temp{lhs};
    ++lhs;
    return temp;
}

// Display method
void Mystring::display() const
{
    std::cout << str << " : " << get_length() << std::endl;
}

// getters
int Mystring::get_length() const { return strlen(str); }
const char *Mystring::get_str() const { return str; }

// overloaded insertion operator
std::ostream &operator<<(std::ostream &os, const Mystring &rhs)
{
    os << rhs.str;
    return os;
}

// overloaded extraction operator
std::istream &operator>>(std::istream &in, Mystring &rhs)
{
    char *buff = new char[1000];
    in.getline(buff, 1000);
    rhs = Mystring{buff};
    delete[] buff;
    return in;
}
