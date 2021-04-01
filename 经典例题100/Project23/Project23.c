#define _CRT_SECURE_NO_WARNINGS 1
//题目：打印出如下图案（菱形）
//
//   *
//  ***
// *****
//*******
// *****
//  ***
//   *
//1.程序分析：先把图形分成两部分来看待，前四行一个规律，后三行一个规律，利用双重for循环，第一层控制行，第二层控制列。

#include<stdio.h>
int main()
{
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3-i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < i + 1; j++)
		{
			printf(" ");
		}
		for (j = 0; j <=6-2 * (i + 1); j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}