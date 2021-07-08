#pragma once
#include <iostream>
#include "../Functions/ConsoleSettings.h"

void menu()
{
	setColor(ltGreen);
	std::cout << '\n' << " -$$$$- Home Menu -$$$$-" << '\n';
	std::cout <<         " -----------------------" << '\n';
	setColor(ltPurple);
	std::cout << "1. Create a new Account" << '\n';
	setColor(ltBlue);
	std::cout << "2. Login to Existing Account" << '\n';
	setColor(ltRed);
	std::cout << "0. Quit Application" << '\n';
	setColor(btWhite);
	std::cout << '\n' << "Select an option: ";

}
