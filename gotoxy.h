#pragma once
#include <windows.h>
using namespace std;

void gotoxy(int x, int y) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	_COORD pos;
	pos.X = x;
	pos.Y = y;
	
	SetConsoleCursorPosition(hConsole, pos);

}