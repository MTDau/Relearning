// Section 16
// Challenge
// #include <iostream>
// #include <vector>
#include "Account_Util.h"

int main()
{
    //    Account joe;
    Checking_Account c;
    std::cout << c << std::endl;

    Savings_Account s{"Frank", 5000, 2.6};
    std::cout << s << std::endl;
    s.deposit(10000);
    std::cout << s << std::endl;
    s.withdraw(10000);
    std::cout << s << std::endl;

    Account *ptr = new Trust_Account("Leo", 10000, 2.6);
    std::cout << *ptr << std::endl;

    // Account frank{"Frank", 5000}; // should not compile
    // std::cout << frank << std::endl;

    // Checking_Account frank{"Frank", 5000};
    // std::cout << frank << std::endl;
    Account *trust = new Trust_Account("James");
    std::cout << *trust << std::endl;
    Account *p1 = new Checking_Account("Larry", 10000);
    Account *p2 = new Savings_Account("Moe", 1000);
    Account *p3 = new Trust_Account("Curly");

    std::vector<Account *> accounts{p1, p2, p3};

    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);
    display(accounts);
    delete p1;
    delete p2;
    delete p3;
    return 0;
    return 0;
}
