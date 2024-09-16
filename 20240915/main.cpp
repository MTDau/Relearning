// Section 15
// Challenge
#include <iostream>
#include <vector>
#include "Account_Util.h"

using namespace std;

int main()
{
    cout.precision(2);
    cout << fixed;

    // // Accounts
    // vector<Account> accounts;
    // accounts.push_back(Account {});
    // accounts.push_back(Account {"Larry"});
    // accounts.push_back(Account {"Moe", 2000} );
    // accounts.push_back(Account {"Curly", 5000} );

    // display(accounts);
    // deposit(accounts, 1000);
    // withdraw(accounts,2000);

    // std::cout << "<====================================================================================>" <<std::endl;
    // // Savings

    // vector<Savings_Account> sav_accounts;
    // sav_accounts.push_back(Savings_Account {} );
    // sav_accounts.push_back(Savings_Account {"Superman"} );
    // sav_accounts.push_back(Savings_Account {"Batman", 2000} );
    // sav_accounts.push_back(Savings_Account {"Wonderwoman", 5000, 5.0} );

    // display(sav_accounts);
    // deposit(sav_accounts, 1000);
    // withdraw(sav_accounts, 2000);

    // std::cout << "<====================================================================================>" <<std::endl;

    vector<Checking_Account> checking_Accounts;
    checking_Accounts.push_back(Checking_Account{});
    checking_Accounts.push_back(Checking_Account{"Thor"});
    checking_Accounts.push_back(Checking_Account{"Black Widow", 12000});
    checking_Accounts.push_back(Checking_Account{"Iron Man", 1000000});
    
    display(checking_Accounts);
    deposit(checking_Accounts, 1000);
    withdraw(checking_Accounts, 2000);

    
    // std::cout << "<====================================================================================>" <<std::endl;

    // display(trust_Accounts);
    // deposit(trust_Accounts, 1000);
    // withdraw(trust_Accounts, 2000);

    // vector<Trust_Account> trust_Accounts;
    // trust_Accounts.push_back(Trust_Account{});
    // trust_Accounts.push_back(Trust_Account{"Thor"});
    // trust_Accounts.push_back(Trust_Account{"Black Widow", 12000});
    // trust_Accounts.push_back(Trust_Account{"Iron Man", 1000000, 5.0});

    // display(trust_Accounts);
    // deposit(trust_Accounts, 1000);
    // withdraw(trust_Accounts, 2000);
    return 0;
}
