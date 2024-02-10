#include <iostream>
#include <conio.h>
#include <chrono>
#include <thread>
#include "gotoxy.h"
using namespace std;

void Effect(string text, int delay) {
	for (char c : text) {
		cout << c << flush;
		this_thread::sleep_for(chrono::milliseconds(delay));
	}
}
void setConsoleFontSize(int width, int height, int weight) {
	
	HWND console = GetConsoleWindow();
	CONSOLE_FONT_INFOEX fontInfo;
	fontInfo.cbSize = sizeof(fontInfo);
	GetCurrentConsoleFontEx(console, false, &fontInfo);
	fontInfo.FontWeight = weight;
	fontInfo.dwFontSize.X = width;  
	fontInfo.dwFontSize.Y = height;

	SetCurrentConsoleFontEx(console, false, &fontInfo);
}
int main()
{
	setConsoleFontSize(9999999, 33,20 );

	char border = 219;
	char border1 = 220;
	for (int i = 0; i < 117; i++)
	    {
		gotoxy(i + 1, 0); cout << border1;
		gotoxy(i + 1, 28); cout << border1;
		}

	for (int i = 0; i < 28; i++)
	{
		gotoxy(117, i + 1); cout << border;
		gotoxy(1, i + 1); cout << border;
	}
	for (int i = 17; i >= 9; --i) 
	{
		gotoxy(27, i); Sleep(1); cout << border << border << border ;
		gotoxy(47, i); Sleep(1); cout << border << border << border;
		gotoxy(67, i); Sleep(1); cout << border << border << border;
	}
	for (int i = 26; i < 43; i++) 
	{
		gotoxy(i + 1, 8); Sleep(1); cout << border;
		gotoxy(i + 1, 11); Sleep(1); cout << border;
		gotoxy(i + 1, 17); Sleep(1); cout << border;
	}
	for (int i = 72; i < 89; i++)

	{
		gotoxy(i + 1, 17); Sleep(1); cout << border;
		gotoxy(i + 1, 8); Sleep(1); cout << border;
		gotoxy(i + 1, 11); Sleep(1); cout << border;
	}
	
	
	for (int i = 0; i < 3; i++)
	{
		gotoxy(73,i + 9); Sleep(1); cout << border << border << border;
	
	}
	for (int i = 0; i < 6; i++)
	{
		gotoxy(87, i + 11); Sleep(1); cout << border << border << border;

	}
	for (int i = 0; i < 1; i++)
	{
		gotoxy(73, i + 16); Sleep(1); cout << border << border;
		gotoxy(88, i + 9); Sleep(1); cout << border << border;
	}
	for (int i = 0; i < 5; i++)
	{
		gotoxy(58 + -i, 13 + -i); Sleep(30); cout << border;
		gotoxy(58 + i, 13 -i); Sleep(30); cout << border;
		
	}
	for (int i = 6; i >= 3; --i)
	{
		gotoxy(47 + i, 9); Sleep(1); cout << border;

	}
	for (int i = 1; i < 5; i++)
	{
	gotoxy(62+i, 9); Sleep(1); cout << border;
	}

	gotoxy(27, 20); Effect(  " E n r o l l m e n t     M a n a g e n e n t         S y s t e m", 100);
	gotoxy(47, 29); system("pause");
