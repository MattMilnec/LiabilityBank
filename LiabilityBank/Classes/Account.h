#pragma once
#include <iostream>

class Account
{
private:
	unsigned int accNum;
	std::string accName;
	unsigned short password;

public:
	void setNum()
	{
		srand((unsigned)time(0));
		accNum = (rand() % 999999) + 100000;
	}
	unsigned int getNum()
	{
		return accNum;
	}

	void setName()
	{
		std::cin >> accName;
	}
	std::string getName()
	{
		return accName;
	}
	
	void setPassword()
	{
		std::cin >> password;
	}
};