#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);

private:
    char *str; // pointer to a char[] that holds a C-style string
public:
    Mystring();                       // No-args constructor
    Mystring(const char *s);          // Overloaded constructor
    Mystring(const Mystring &source); // Copy constructor
    Mystring(Mystring &&source);      // Move constructor
    ~Mystring();                      // Destructor

    Mystring &operator=(const Mystring &rhs);      // Copy assignment
    Mystring &operator=(Mystring &&rhs);           // Move assignment
    bool operator==(const Mystring &rhs) const;    // Compare if equal
    bool operator!=(const Mystring &rhs) const;    // Compare if not equal
    bool operator>(const Mystring &rhs) const;     // Lexically greater
    bool operator<(const Mystring &rhs) const;     // Lexically Smaller
    Mystring operator-() const;                    // make lowercase
    Mystring operator+(const Mystring &rhs) const; // Concatenate
    Mystring &operator+=(const Mystring &rhs);      // Join string

    Mystring operator*(const std::size_t);  // Mutiply string
    Mystring &operator*=(const std::size_t); // Mutiply string then reassign
    Mystring &operator++(); //Make Upercase. Pre-increasement
    Mystring operator++(int); //Make Upercase. Post-increasement

    void display() const;

    int get_length() const; // getters
    const char *get_str() const;
};

#endif // _MYSTRING_H_
