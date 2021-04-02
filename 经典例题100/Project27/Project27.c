#define _CRT_SECURE_NO_WARNINGS 1
//题目：利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。
//1.程序分析：
#include<stdio.h>
void palin(int i)
{
	char ch;
	if (i <= 1)
	{
		ch = getchar();
		putchar(ch);
	}
	else
	{
		ch = getchar();
		palin(i - 1);
		putchar(ch);
	}
}
int main()
{
	int i = 5;
	printf("请输入字符:>");
	palin(i);
	return 0;
}