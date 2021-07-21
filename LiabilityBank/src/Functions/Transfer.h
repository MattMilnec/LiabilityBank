#pragma once

void toVector(std::vector<Account> &accounts)
{
	std::ifstream file;
	Account tempAccount;
	file.open("TextFiles/AccountData.txt");
	
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

void toFileDeposit(float &amount, std::string &fileName)
{
	std::ofstream file;
	file.open(fileName, std::ios::app);
	file << "Deposit: $" << amount << "\n";
}

void toFileWithdraw(float& amount, std::string& fileName)
{
	std::ofstream file;
	file.open(fileName, std::ios::app);
	file << "Withdraw: $" << amount << "\n";
}

void toFile(std::vector<Account>& accounts)
{
	std::ofstream file2;
	file2.open("TextFiles/AccountData.txt");
	for (int i = 0; i < accounts.size(); i++)
	{
		file2 << accounts[i].getNum() << "\t" << accounts[i].getName() << "\t" << accounts[i].getBalance() << "\t" << accounts[i].getAccountColor() << "\n";
	}
}