#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ�����õݹ麯�����÷�ʽ�����������5���ַ������෴˳���ӡ������
//1.���������
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
	printf("�������ַ�:>");
	palin(i);
	return 0;
}