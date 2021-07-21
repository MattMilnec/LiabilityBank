#pragma once

void toVector(std::vector<Account> &accounts)
{
	std::ifstream file;
	Account tempAccount;
	file.open("src/TextFiles/AccountData.txt");
	
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

void toFileDeposit(float &amount, std::string &fileName, Account &loginAccount)
{
	std::ofstream file;
	file.open(fileName, std::ios::app);
	std::time_t time = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
	file << "Deposit:   $" << amount << "\t--- " << std::ctime(&time);
	file << "\t\tBalance: $" << loginAccount.getBalance() << "\n";
}

void toFileWithdraw(float &amount, std::string &fileName, Account& loginAccount)
{
	std::ofstream file;
	file.open(fileName, std::ios::app);
	std::time_t time = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
	file << "Withdraw: -$" << amount << "\t--- " << std::ctime(&time);
	file << "\t\tBalance: $" << loginAccount.getBalance() << "\n";
}

void toFile(std::vector<Account> &accounts)
{
	std::ofstream file2;
	file2.open("src/TextFiles/AccountData.txt");
	for (int i = 0; i < accounts.size(); i++)
	{
		file2 << accounts[i].getNum() << "\t" << accounts[i].getName() << "\t" << accounts[i].getBalance() << "\t" << accounts[i].getAccountColor() << "\n";
	}
}