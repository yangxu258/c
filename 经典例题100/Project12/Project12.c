#define _CRT_SECURE_NO_WARNINGS 1
//题目：判断101 - 200之间有多少个素数，并输出所有素数。
//1.程序分析：判断素数的方法：用一个数分别去除2到sqrt(这个数)，如果能被整除，
							//则表明此数不是素数，反之是素数。
#include<stdio.h>
#include<math.h>
//判断是否为素数
int prime(int i)
{
	int j;
	for (j = 2; j <= sqrt(i); j++)
	{
		if (i % j == 0)
		{
			break;
		}
	}
	if (j > sqrt(i))
	{
		return 1;
	}
}
int main()
{
	int i,count=0;
	for (i = 101; i <= 200; i++)
	{
		int ret=prime(i);//返回1为素数0则不是
		if (ret == 1)
		{
			count++;
			printf("%d ", i);
		}
	}
	return 0;
}