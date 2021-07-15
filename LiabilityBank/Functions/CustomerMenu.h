#pragma once

void customerMenu(Account &loginAccount)
{
	std::vector<Account> accounts;
	toVector(accounts);
	clearConsole();
	std::cout << "Welcome Back " << loginAccount.getName() << "!\n";

	bool quit = false;
	while (!quit)
	{
		std::cout << "\nYour current account balance is: $" << loginAccount.getBalance() << "\n";

		std::cout << "\n1. Deposit\n";
		std::cout << "2. Withdraw\n";
		std::cout << "0. Back to home menu\n";
		std::cout << "\nSelect an option: ";
		short choice;
		std::cin >> choice;
		switch (choice)
		{
		case 1:
			float deposit;
			std::cout << "\nEnter an amount to deposit: $";
			std::cin >> deposit;
			loginAccount.deposit(deposit);
			for (int i = 0; i < accounts.size(); i++)
			{
				if (accounts[i].getNum() == loginAccount.getNum())
					accounts[i].setBalance(loginAccount.getBalance());
			}
			toFile(accounts);
			break;

		case 2:
			float withdraw;
			std::cout << "\nEnter an amount to withdraw: $";
			std::cin >> withdraw;
			if (withdraw > loginAccount.getBalance())
			{
				std::cout << "\nSorry, you do not have the required funds to withdraw that amount.\n";
				break;
			}
			else loginAccount.withdraw(withdraw);
			for (int i = 0; i < accounts.size(); i++)
			{
				if (accounts[i].getNum() == loginAccount.getNum())
					accounts[i].setBalance(loginAccount.getBalance());
			}
			toFile(accounts);
			break;

		case 0:
			quit = true;
			break;
		}
	}
}