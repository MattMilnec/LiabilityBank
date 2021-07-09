#include <iostream>
#include "Functions/HomeMenu.h"
#include "Functions/CreateAccount.h"
#include "Functions/Login.h"

int main(int argc, char* argv[])
{
	setColor(yellow);
	std::cout << "Welcome to the Liability Bank." << '\n';

	bool quit = false;
	while (!quit)
	{
		menu();
		short choice;
		std::cin >> choice;
		switch (choice)
		{
		case 1:
			createAccount();
			quit = true;
			break;

		case 2:
			if (login())
			{
				std::cout << "You logged in successfully";
			}
			break;

		case 0:
			quit = true;
			break;
		}
		std::cout << '\n' << "Thank you for choosing Liability Bank. Have a nice day!" << '\n';
	}
	return 0;
}