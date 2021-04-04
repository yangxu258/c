#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	clrscr();
	textbackground(2);
	goxy(1, 5);
	cprintf("Output at row 5 column 1\n");
	textbackground(3);
	goxy(20, 10);
	cprintf("Output at row 10 column 20\n");
	system("pause");
	return 0;
}