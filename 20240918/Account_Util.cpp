#include <iostream>
#include "Account_Util.h"

// Displays Account objects in a  vector of Account objects pointer
void display(const std::vector<std::shared_ptr<Account>> &accounts)
{
    std::cout << "\n=== Accounts===========================================" << std::endl;
    for (const auto &acc : accounts)
        std::cout << *acc << std::endl;
}
void display(const std::vector<std::unique_ptr<Account>> &accounts)
{
    std::cout << "\n=== Accounts===========================================" << std::endl;
    for (const auto &acc : accounts)
        std::cout << *acc << std::endl;
}

// Deposits supplied amount to each Account object pointer in the vector
void deposit(std::vector<std::shared_ptr<Account>> &accounts, double amount)
{
    std::cout << "\n=== Depositing =================================" << std::endl;
    for (auto &acc : accounts)
    {
        if (acc->deposit(amount))
            std::cout << "Deposited " << amount << " to " << *acc << std::endl;
        else
            std::cout << "Failed Deposit of " << amount << " to " << *acc << std::endl;
    }
}
void deposit(std::vector<std::unique_ptr<Account>> &accounts, double amount)
{
    std::cout << "\n=== Depositing =================================" << std::endl;
    for (auto &acc : accounts)
    {
        if (acc->deposit(amount))
            std::cout << "Deposited " << amount << " to " << *acc << std::endl;
        else
            std::cout << "Failed Deposit of " << amount << " to " << *acc << std::endl;
    }
}

// Withdraw amount from each Account object pointer in the vector
void withdraw(std::vector<std::shared_ptr<Account>> &accounts, double amount)
{
    std::cout << "\n=== Withdrawing ==============================" << std::endl;
    for (auto &acc : accounts)
    {
        if (acc->withdraw(amount))
            std::cout << "Withdrew " << amount << " from " << *acc << std::endl;
        else
            std::cout << "Failed Withdrawal of " << amount << " from " << *acc << std::endl;
    }
}
void withdraw(std::vector<std::unique_ptr<Account>> &accounts, double amount)
{
    std::cout << "\n=== Withdrawing ==============================" << std::endl;
    for (auto &acc : accounts)
    {
        if (acc->withdraw(amount))
            std::cout << "Withdrew " << amount << " from " << *acc << std::endl;
        else
            std::cout << "Failed Withdrawal of " << amount << " from " << *acc << std::endl;
    }
}
