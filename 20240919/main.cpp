// Section 19
// Challenge 1
// Formatting output
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

struct City
{
    std::string name;
    long population;
    double cost;
};

// Assume each country has at least 1 city
struct Country
{
    std::string name;
    std::vector<City> cities;
};

struct Tours
{
    std::string title;
    std::vector<Country> countries;
};

void ruler()
{
    std::cout << "\n1234567890123456789012345678901234567890123456789012345678901234567890\n"
              << std::endl;
}
int main()
{
    Tours tours{"Tour Ticket Prices from Miami",
                {
                    {
                        "Colombia",
                        {{"Bogota", 8778000, 400.98},
                         {"Cali", 2401000, 424.12},
                         {"Medellin", 2464000, 350.98},
                         {"Cartagena", 972000, 345.34}},
                    },
                    {
                        "Brazil",
                        {{"Rio De Janiero", 13500000, 567.45},
                         {"Sao Paulo", 11310000, 975.45},
                         {"Salvador", 18234000, 855.99}},
                    },
                    {
                        "Chile",
                        {{"Valdivia", 260000, 569.12},
                         {"Santiago", 7040000, 520.00}},
                    },
                    {"Argentina", {{"Buenos Aires", 3010000, 723.77}}},
                }};

    // Format data
    const int total_width{70};
    const int width1{20}, width2{20}, width3{15}, width4{15};
    ruler();
    std::cout << std::setw((total_width - tours.title.length()) / 2) << "" << tours.title << "\n\n"
              << std::endl
              << std::setw(width1) << std::left << "Country"
              << std::setw(width2) << "City"
              << std::setw(width3) << std::right << "Population"
              << std::setw(width4) << "Price" << std::endl
              << std::setfill('-') << std::setw(total_width) << "" << std::endl
              << std::setfill(' ') << std::setprecision(2) << std::fixed;
    for (bool first_loop{true}; const auto &country : tours.countries)
    { // loop through the countries

        for (const auto &city : country.cities)
        { // loop through the cities for each country
            // check for the first loop for the country name.
            std::cout << std::setw(width1) << std::left << ((first_loop) ? country.name : "")
                      << std::setw(width2) << city.name
                      << std::setw(width3) << std::right << city.population
                      << std::setw(width4) << city.cost << std::endl;
            first_loop = false;
        }

        // reset for new country name
        first_loop = true;
    }

    std::cout << std::endl
              << std::endl;
    return 0;
}
