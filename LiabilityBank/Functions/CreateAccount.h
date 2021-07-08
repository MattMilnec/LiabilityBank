#pragma once
#include <cstdlib>
#include <ctime>
#include "../Classes/Account.h"

void createAccount()
{
	Account account;
	account.setNum();
	std::cout << "Enter your name: ";
	account.setName();
	std::cout << "Enter a 4-digit password: ";
	account.setPassword();
	std::cout << '\n' << "Congratulations " << account.getName() << " you have opened a new account!" << '\n';
	std::cout << "Your account number is: " << account.getNum() << '\n';
}