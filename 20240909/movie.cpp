#include "movie.h"

movie::movie(std::string new_name, std::string new_rate, unsigned int new_views) : name{new_name}, rate{new_rate}, views{new_views} {}
movie::movie(const movie &source) : movie(source.name, source.rate, source.views) {}
movie::~movie() {}
std::string movie::get_name() const
{
    return name;
}
std::string movie::get_rate() const
{
    return rate;
}
unsigned int movie::get_view() const
{
    return views;
}
void movie::get_info() const
{
    std::cout << "( " << name << " " << rate << " " << views << " )" <<std::endl;
}
void movie::set_name(std::string name) { this->name = name; }
void movie::set_rate(std::string rate) { this->rate = rate; }
void movie::set_view(unsigned int views) { this->views = views; }
