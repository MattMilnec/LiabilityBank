#include "Headers.h"

int main(int argc, char* argv[])
{
	Account loginAccount;

	setColor(yellow);
	std::cout << "Welcome to the Liability Bank.\n";

	bool quit = false;
	while (!quit)
	{
		homeMenu();
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
		}
	}
	setColor(yellow);
	std::cout << "\nThank you for choosing Liability Bank. Have a nice day!\n";
	setColor(btWhite);
	return 0;
}