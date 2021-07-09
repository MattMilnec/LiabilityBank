#pragma once
#include <iostream>

class Account
{
private:
	unsigned int accNum;
	std::string accName;
	float balance;
	unsigned short password;

public:

	Account()
	{
		accNum = NULL;
		balance = NULL;
		password = NULL;
		balance = 0.00f;
	}

	void setNum(unsigned int num)
	{
		accNum = num;
	}
	unsigned int getNum()
	{
		return accNum;
	}

	void setName(std::string name)
	{
		accName = name;
	}
	std::string getName()
	{
		return accName;
	}

	void deposit(float amount)
	{
		balance += amount;
	}

	void withdrawal(float amount)
	{
		balance -= amount;
	}

	void setBalance(float num)
	{
		balance = num;
	}

	float getBalance()
	{
		return balance;
	}
	
	void setPassword(unsigned short pass)
	{
		password = pass;
	}
};