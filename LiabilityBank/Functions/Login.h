#pragma once

bool login(Account &loginAccount)
{
	std::ifstream file;
	unsigned int inputNum;
	unsigned int tempNum;
	std::string tempName;
	float tempBalance;

	file.open("AccountData.txt");
	bool quit = false;
	while (!quit)
	{
		std::cout << "\n1. Enter an account number\n";
		std::cout << "0. Back to home menu\n";
		std::cout << "\nSelect an option: ";

		int choice;
		std::cin >> choice;
		switch (choice)
		{
		case 1:
			std::cout << "\nEnter your account number: ";
			std::cin >> inputNum;

			while (file >> tempNum >> tempName >> tempBalance)
			{
				if (inputNum == tempNum)
				{
					loginAccount.setNum(tempNum);
					loginAccount.setName(tempName);
					loginAccount.setBalance(tempBalance);
					quit = true;
					return true;
					break;
				}
			}
			std::cout << "Sorry, it appears you do not have an account with that number.\n";
			return false;
			break;
		case 0:
			quit = true;
			return false;
			break;
		}
	}
	return false;
}