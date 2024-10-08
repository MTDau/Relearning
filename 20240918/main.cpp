#include <iostream>
#include "Account_Util.h"

int main()
{
    // test your code here

    try
    {
        auto p1 = std::make_shared<Savings_Account>("Harry", 50000);
        std::cout << *p1 << std::endl;
        p1->withdraw(6000);
        std::cout << "=========After Withdrawn=============" <<std::endl;
        std::cout << *p1 << std::endl;
        p1->withdraw(60000);
        std::cout << "=========After Withdrawn=============" <<std::endl;
        std::cout << *p1 << std::endl;
    }
    catch (const IllegalBalanceException &ex)
    {
        std::cout << ex.what() << std::endl;
    }
    catch (const Insufficent_Funds_Exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }

    try
    {
        auto p1 = std::make_shared<Savings_Account>("Harry", 50000);
        auto p2 = std::make_shared<Checking_Account>("Ron", 30000);
        auto p3 = std::make_shared<Trust_Account>("Hermione", 20000);
        std::vector<std::shared_ptr<Account>> accounts{p1, p2, p3};
        withdraw(accounts, 3000);

        auto p4 = std::make_unique<Savings_Account>("Harry", 50000);
        auto p5 = std::make_unique<Checking_Account>("Ron", 30000);
        auto p6 = std::make_unique<Trust_Account>("Hermione", 20000);
        std::vector<std::unique_ptr<Account>> account2s;
        account2s.push_back(std::move(p4));
        account2s.push_back(std::move(p5));
        account2s.push_back(std::move(p6));
        withdraw(accounts, 30000);
    }
    catch (const IllegalBalanceException &ex)
    {
        std::cout << ex.what() << std::endl;
    }
    catch (const Insufficent_Funds_Exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << "Program completed successfully" << std::endl;
    return 0;
}
