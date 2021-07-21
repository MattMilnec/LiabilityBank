#pragma once

void customerMenu(Account &loginAccount)
{
	std::vector<Account> accounts;
	std::string fileName = "src/TextFiles/" + std::to_string(loginAccount.getNum()) + ".txt";
	std::ifstream file(fileName);
	std::string temp;
	char c;
	toVector(accounts);
	clearConsole();
	setColor(loginAccount.getAccountColor());
	std::cout << "Welcome Back " << loginAccount.getName() << "!\n";

	bool quit = false;
	while (!quit)
	{
		std::cout << "\nYour current account balance is: $" << loginAccount.getBalance() << "\n";

		std::cout << "\n1. Deposit\n";
		std::cout << "2. Withdraw\n";
		std::cout << "3. Display transaction history\n";
		std::cout << "4. Change text color\n";
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
			toFileDeposit(deposit, fileName, loginAccount);
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
			toFileWithdraw(withdraw, fileName, loginAccount);
			toFile(accounts);
			break;

		case 3:
			clearConsole();
			while (file >> temp)
			{
				
				std::cout << temp << " ";
				file.get(c);
				if (c == '\n')
					std::cout << "\n";
			}
			std::cout << "------------------------------------------";
			break;

		case 4: 
			changeColorMenu(loginAccount);
			for (int i = 0; i < accounts.size(); i++)
			{
				if (accounts[i].getNum() == loginAccount.getNum())
					accounts[i].setAccountColor(loginAccount.getAccountColor());
			}
			toFile(accounts);
			clearConsole();
			break;

		case 0:
			quit = true;
			break;

		default:
			std::cout << "\nSorry, your input was invalid. Please try again.\n";
			break;
		}
	}
}