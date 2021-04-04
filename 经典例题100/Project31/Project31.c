#define _CRT_SECURE_NO_WARNINGS 1
//题目：Press any key to change color, do you want to try it.Please hurry up!
//1.程序分析：　
#include<stdio.h>
#include<conio.h>
void main(void)
{
	int color;
	for (color = 0; color < 8; color++)
	{
		int ret=textbackground(color);/*设置文本的背景颜色*/
		cprintf("This is color %d\r\n", color);
		cprintf("Press any key to continue\r\n");
		getch();/*输入字符看不见*/
	}
}
