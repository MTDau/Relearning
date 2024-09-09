#include "movie.h"
#include <vector>
#pragma once
class movies{
    private:
    std::vector<movie> movies_list;
    public:
    movies(){};
    ~movies(){};
    bool add_movie(std::string, std::string, unsigned int);
    bool views_increase(std::string);
    void display();
};
