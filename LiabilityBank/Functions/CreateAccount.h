#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "../Classes/Account.h"

void createAccount()
{
	Account account;
	std::ofstream file;
	std::string tempName;
	unsigned short tempPass;
	
	srand((unsigned)time(0));
	account.setNum((rand() % 999999) + 100000);
	std::cout << "Enter your name: ";
	std::cin >> tempName;
	account.setName(tempName);
	std::cout << "Enter a 4-digit password: ";
	std::cin >> tempPass;
	account.setPassword(tempPass);
	file.open("AccountData.txt");
	file << std::to_string(account.getNum()) << '\t' << account.getName() << '\t' << account.getBalance();
	std::cout << '\n' << "Congratulations " << account.getName() << " you have opened a new account!" << '\n';
	std::cout << "Your account number is: " << account.getNum() << '\n';
}