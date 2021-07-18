#pragma once

unsigned short black = 0x0;
unsigned short blue = 0x1;
unsigned short green = 0x2;
unsigned short aqua = 0x3;
unsigned short red = 0x4;
unsigned short purple = 0x5;
unsigned short yellow = 0x6;
unsigned short white = 0x7;
unsigned short gray = 0x8;
unsigned short ltBlue = 0x9;
unsigned short ltGreen = 0xA;
unsigned short ltAqua = 0xB;
unsigned short ltRed = 0xC;
unsigned short ltPurple = 0xD;
unsigned short ltYellow = 0xE;
unsigned short btWhite = 0xF;

void setColor(unsigned short color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void clearConsole()
{
	std::cout << "\x1B[2J\x1B[H";
}

void changeColorMenu(Account& loginAccount)
{
	std::cout << "1. Blue\n";
	std::cout << "2. Green\n";
	std::cout << "3. Aqua\n";
	std::cout << "4. Red\n"; 
	std::cout << "5. Purple\n";
	std::cout << "6. Yellow\n";
	std::cout << "7. White\n";
	std::cout << "Select a color: ";
	unsigned short color;
	std::cin >> color;
	switch (color)
	{
	case 1:
		loginAccount.setAccountColor(ltBlue);
		setColor(loginAccount.getAccountColor());
		break;

	case 2:
		loginAccount.setAccountColor(ltGreen);
		setColor(loginAccount.getAccountColor());
		break;

	case 3:
		loginAccount.setAccountColor(ltAqua);
		setColor(loginAccount.getAccountColor());
		break;

	case 4:
		loginAccount.setAccountColor(ltRed);
		setColor(loginAccount.getAccountColor());
		break;
	case 5:
		loginAccount.setAccountColor(ltPurple);
		setColor(loginAccount.getAccountColor());
		break;

	case 6:
		loginAccount.setAccountColor(ltYellow);
		setColor(loginAccount.getAccountColor());
		break;

	case 7:
		loginAccount.setAccountColor(btWhite);
		setColor(loginAccount.getAccountColor());
		break;

	default:
		std::cout << "Sorry, your input was invalid. Please try again.";
		break;
	}
}