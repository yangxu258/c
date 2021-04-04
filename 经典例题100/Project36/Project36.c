#define _CRT_SECURE_NO_WARNINGS 1
//题目：求100之内的素数
#include<stdio.h>
#include<math.h>
int prime(int i)
{
	int j;
	for (j = 2; j <= sqrt(i); j++)
	{
		if (i % j == 0)
		{
			return 0;
		}
	}
	if (j > sqrt(i))
		return 1;
}
int main()
{
	int i;
	for (i = 1; i <= 100; i++)
	{
		int ret=prime(i);
		if (ret == 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}