#pragma once

void toVector(std::vector<Account> &accounts)
{
	std::ifstream file;
	Account tempAccount;
	file.open("AccountData.txt");
	
	unsigned int tempNum;
	std::string tempName;
	float tempBalance;
	unsigned short tempColor;

	while (file >> tempNum >> tempName >> tempBalance >> tempColor)
	{
		tempAccount.setNum(tempNum);
		tempAccount.setName(tempName);
		tempAccount.setBalance(tempBalance);
		tempAccount.setAccountColor(tempColor);
		accounts.push_back(tempAccount);
	}
}

void toFile(std::vector<Account> &accounts)
{
	std::ofstream file;
	file.open("AccountData.txt");
	for (int i = 0; i < accounts.size(); i++)
	{
		file << accounts[i].getNum() << "\t" << accounts[i].getName() << "\t" << accounts[i].getBalance() << "\t" << accounts[i].getAccountColor() << "\n";
	}
}