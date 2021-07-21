#include "Headers.h"

int main(int argc, char* argv[])
{
	Account loginAccount;

	setColor(yellow);
	std::cout << "Welcome to the Liability Bank.\n";

	bool quit = false;
	while (!quit)
	{
		setColor(ltGreen);
		std::cout << "\n -$$$$- Home Menu -$$$$-\n";
		std::cout << " -----------------------\n";
		setColor(ltPurple);
		std::cout << "1. Create a new Account\n";
		setColor(ltBlue);
		std::cout << "2. Login to Existing Account\n";
		setColor(ltRed);
		std::cout << "0. Quit Application\n";
		setColor(btWhite);
		std::cout << "\nSelect an option: ";

		short choice;
		std::cin >> choice;
		switch (choice)
		{
		case 1:
			createAccount();
			break;

		case 2:
			if (login(loginAccount))
			{
				customerMenu(loginAccount);
			}
			break;

		case 0:
			quit = true;
			break;

		default:
			std::cout << "\nSorry, your input was invalid. Please try again.\n";
			break;
		}
	}
	setColor(yellow);
	std::cout << "\nThank you for choosing Liability Bank. Have a nice day!\n";
	setColor(btWhite);
	return 0;
}