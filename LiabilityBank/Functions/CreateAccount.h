#pragma once
#include <cstdlib>
#include <ctime>
#include "../Classes/Account.h"

void createAccount()
{
	Account account;
	srand((unsigned)time(0));
	account.accNum = (rand() % 999999) + 100000;
	std::cout << "Enter your name: ";
	std::cin >> account.accName;
	std::cout << "Enter a 4-digit password: ";
	std::cin >> account.password;
	std::cout << '\n' << "Congratulations " << account.accName << " you have opened a new account!" << '\n';
	std::cout << "Your account number is: " << account.accNum << '\n';
}