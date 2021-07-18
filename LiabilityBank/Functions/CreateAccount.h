#pragma once

void createAccount()
{
	Account account;
	std::ofstream file;
	unsigned int tempNum;
	unsigned int randNum;
	std::string tempName;
	float tempBalance;
	unsigned short tempColor;
	unsigned short tempPass;
	
	srand((unsigned)time(0));
	std::ifstream readFile;
	readFile.open("AccountData.txt");
	bool different = false;;
	while (!different)
	{
		randNum = rand() % 999999 + 100000;
		while (readFile >> tempNum >> tempName >> tempBalance >> tempColor)
		{
			if (randNum == tempNum)
				different = false;
			else different = true;
		}
	}
	account.setNum(randNum);
	std::cout << "Enter your name: ";
	std::cin >> tempName;
	account.setName(tempName);
	std::cout << "Enter a 4-digit password: ";
	std::cin >> tempPass;
	account.setPassword(tempPass);
	account.setBalance(0);
	account.setAccountColor(btWhite);
	file.open("AccountData.txt", std::ios::app);
	file << account.getNum() << "\t" << account.getName() << "\t" << account.getBalance() << "\t" << account.getAccountColor() << "\n";
	std::cout << "\nCongratulations " << account.getName() << " you have opened a new account!\n";
	std::cout << "Your account number is: " << account.getNum() << "\n";
}