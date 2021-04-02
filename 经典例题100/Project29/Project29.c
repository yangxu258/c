#define _CRT_SECURE_NO_WARNINGS 1
//题目：给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。
//1. 程序分析：学会分解出每一位数，如下解释：
#include<stdio.h>
int main()
{
	int n,count=0;
	scanf("%d", &n);
	while (n)//123
	{
		count++;
		printf("%d ", n % 10);
		n /= 10;
	}
	printf("count=%d\n", count);
	return 0;
}