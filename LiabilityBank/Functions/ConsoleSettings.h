#pragma once
#include <iostream>
#include <Windows.h>

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