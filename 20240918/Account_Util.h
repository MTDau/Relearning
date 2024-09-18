#ifndef _ACCOUNT_UTIL_H_
#define _ACCOUNT_UTIL_H_
#include <vector>
#include <memory>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"

// Utility helper functions for Account class

void display(const std::vector<std::shared_ptr<Account>> &accounts);
void deposit(std::vector<std::shared_ptr<Account>> &accounts, double amount);
void withdraw(std::vector<std::shared_ptr<Account>> &accounts, double amount);

#endif