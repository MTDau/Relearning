#pragma once
#include "Savings_Account.h"


class Trust_Account : public Savings_Account
{
    friend std::ostream &operator<<(std::ostream &os, const Trust_Account &account);

private:
    unsigned int bonus_mark{5000};
    unsigned int bonus{50};
    const unsigned int withdrawn_limit{3};
    int withdrawn_time{0};
    static constexpr const char *def_name = "Unnamed Savings Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;

public:
    
    Trust_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
    bool deposit(double &des);
    bool withdraw(double &withdraw);
};
