#include "movies.h"
#include <iostream>

bool movies::add_movie(std::string new_name, std::string new_rate, unsigned int new_views)
{

    for (auto &i : movies_list) //use reference to reduce copy
    {
        if (i.get_name() == new_name)
            return false;
    }
    
    movies_list.push_back(movie{new_name,new_rate,new_views});//provide a temp object and push it to the vector
    return true;
}

bool movies::views_increase(std::string new_name)
{
    for (auto &i : movies_list)//use reference to change data from the vector
    {
        if (i.get_name() == new_name)
        {
            i.watched();
            return true;
        }
    }
    return false;
}
void movies::display(){
    for (auto &i : movies_list)
    {
        i.get_info();
    }
}
