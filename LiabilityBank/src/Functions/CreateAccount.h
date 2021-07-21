#pragma once

void createAccount()
{
	Account account;
	std::ofstream file;
	std::ofstream customerFile;
	unsigned int tempNum;
	unsigned int randNum;
	std::string tempName;
	float tempBalance;
	unsigned short tempColor;
	
	srand((unsigned)time(0));
	std::ifstream readFile;
	readFile.open("TextFiles/AccountData.txt");
	bool different = false;
	if (readFile.peek() == std::ifstream::traits_type::eof())
	{
		different = true;
		randNum = rand() % 999999 + 100000;
	}
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
	account.setBalance(0);
	account.setAccountColor(btWhite);
	file.open("TextFiles/AccountData.txt", std::ios::app);
	std::string fileName = "TextFiles/" + std::to_string(account.getNum()) + ".txt";
	customerFile.open(fileName);
	file << account.getNum() << "\t" << account.getName() << "\t" << account.getBalance() << "\t" << account.getAccountColor() << "\n";
	std::cout << "\nCongratulations " << account.getName() << " you have opened a new account!\n";
	std::cout << "Your account number is: " << account.getNum() << "\n";
}