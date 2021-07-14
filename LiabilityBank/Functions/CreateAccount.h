#pragma once

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
	account.setBalance(0);
	file.open("AccountData.txt", std::ios::app);
	file << account.getNum() << "\t" << account.getName() << "\t" << account.getBalance() << "\n";
	std::cout << "\nCongratulations " << account.getName() << " you have opened a new account!\n";
	std::cout << "Your account number is: " << account.getNum() << "\n";
}