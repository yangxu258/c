#define _CRT_SECURE_NO_WARNINGS 1
//题目：输出特殊图案，请在c环境中运行，看一看，Very Beautiful!
//1.程序分析：字符共有256个。不同字符，图形不一样。　　　　　　
#include<stdio.h>
int main()
{
	char a = '*', b = '^';
	printf("%c%c%c%c%c\n", b, a, a, a, b);
	printf("%c%c%c%c%c\n", a, b, a, b, a);
	printf("%c%c%c%c%c\n", a, a, b, a, a);
	printf("%c%c%c%c%c\n", a, b, a, b, a);
	printf("%c%c%c%c%c\n", b, a, a, a, b);
	return 0;
}
