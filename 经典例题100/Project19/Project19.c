#define _CRT_SECURE_NO_WARNINGS 1
//题目：一个数如果恰好等于它的因子之和，这个数就称为“完数”。
//		例如6 = 1＋2＋3.编程　　　找出1000以内的所有完数。
//1. 程序分析：请参照程序 < --上页程序14.
#include<stdio.h>
#include<math.h>
int if_numbers(int i)
{
	int sum = 0, j;
	for (j = 1; j < i; j++)
	{
		if (i % j == 0)
		{
			sum += j;
		}
	}
	if (sum == i)
	{
		return 1;
	}
	return 0;
}
int main()
{
	int i=6;
	for (i = 2; i <= 1000; i++)
	{
		int ret=if_numbers(i);
		if (ret == 1)
		{
			printf("%d ", i);
		}
	}
	//printf("%d",if_numbers(i));
	return 0;
}