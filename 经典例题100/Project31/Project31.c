#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ��Press any key to change color, do you want to try it.Please hurry up!
//1.�����������
#include<stdio.h>
#include<conio.h>
void main(void)
{
	int color;
	for (color = 0; color < 8; color++)
	{
		int ret=textbackground(color);/*�����ı��ı�����ɫ*/
		cprintf("This is color %d\r\n", color);
		cprintf("Press any key to continue\r\n");
		getch();/*�����ַ�������*/
	}
}
