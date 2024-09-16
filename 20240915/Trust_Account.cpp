#include "Trust_Account.h"
Trust_Account::Trust_Account(std::string name, double balance, double int_rate) : Savings_Account(name, balance, int_rate) {}

bool Trust_Account::deposit(double &des)
{
    if (des >= bonus_mark)
    {
        return Savings_Account::deposit(des + bonus);
    }
    else
    {
        return Savings_Account::deposit(des);
    }
}
bool Trust_Account::withdraw(double &withdrawn)
{
    if (withdrawn_time >= withdrawn_limit)
    {
        std::cout << "Hi " << name <<  ". You are trying to withdrawn more than 3 time." << std::endl;
        return false;
    }
    else if (withdrawn >= (balance / 5.0))
    {
        std::cout <<"Hi " <<name << ". The amount you want to without exceed 20% of your balance.\nYour current balance is: " << balance << std::endl;
        return false;
    }
    else
    {
        withdrawn_time++;
        balance -= withdrawn;
        return true;
    }
}
std::ostream &operator<<(std::ostream &os, const Trust_Account &account)
{
    os << "[Trust_Account: " << account.name << ": " << account.balance << ", " << account.int_rate << "%]. Times withdrawn: " << account.withdrawn_time;
    return os;
}
