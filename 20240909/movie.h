#include <iostream>
#include <string>

#pragma once

class movie
{
private:
    std::string name;
    std::string rate;
    unsigned int views;

public:
    movie(std::string name, std::string rate, unsigned int views);
    movie(const movie &source);
    ~movie();
    std::string get_name() const;
    std::string get_rate() const;
    unsigned int get_view() const;
    void get_info() const;
    void set_name(std::string);
    void set_rate(std::string);
    void set_view(unsigned int);
    void watched() { views++; };
};
