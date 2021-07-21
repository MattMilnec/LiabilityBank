#pragma once

class Account
{
private:
	unsigned int accNum;
	std::string accName;
	float balance;
	unsigned short textColor;

public:
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

	void withdraw(float amount)
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

	void setAccountColor(unsigned short color)
	{
		textColor = color;
	}

	unsigned short getAccountColor()
	{
		return textColor;
	}
};