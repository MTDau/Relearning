#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);
    friend bool operator==(const Mystring &lhs, const Mystring &rhs);    // Compare if equal
    friend bool operator!=(const Mystring &lhs, const Mystring &rhs);    // Compare if not equal
    friend bool operator>(const Mystring &lhs, const Mystring &rhs);     // Lexically greater
    friend bool operator<(const Mystring &lhs, const Mystring &rhs);     // Lexically Smaller
    friend Mystring operator-(const Mystring &lhs);                      // make lowercase
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs); // Concatenate
    friend Mystring &operator+=(Mystring &lhs, const Mystring &rhs);     // Join string

    friend Mystring operator*(const Mystring &lhs, const std::size_t i); // Mutiply string
    friend Mystring &operator*=(Mystring &lhs, const std::size_t i);     // Mutiply string then reassign
    friend Mystring &operator++(Mystring &lhs);                        // Make Upercase. Pre-increasement
    friend Mystring operator++(Mystring &lhs, int);                                   // Make Upercase. Post-increasement
private:
    char *str; // pointer to a char[] that holds a C-style string
public:
    Mystring();                       // No-args constructor
    Mystring(const char *s);          // Overloaded constructor
    Mystring(const Mystring &source); // Copy constructor
    Mystring(Mystring &&source);      // Move constructor
    ~Mystring();                      // Destructor

    Mystring &operator=(const Mystring &rhs); // Copy assignment
    Mystring &operator=(Mystring &&rhs);      // Move assignment

    void display() const;

    int get_length() const; // getters
    const char *get_str() const;
};

#endif // _MYSTRING_H_
