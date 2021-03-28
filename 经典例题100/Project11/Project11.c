#define _CRT_SECURE_NO_WARNINGS 1
//题目：古典问题：有一对兔子，从出生后第3个月起每个月都生一对兔子，
// 小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？
//1.程序分析：　兔子的规律为数列1, 1, 2, 3, 5, 8, 13, 21....
//斐波那契数列！！！！

#include<stdio.h>
int main()
{
	long long f1, f2,i;
	f1 = f2 = 1;
	printf("%-lld %-lld ", f1, f2);
	for (i = 2; i < 20; i++)
	{
		f1 = f1 + f2;
		f2 = f1 + f2;
		printf("%-lld %-lld ", f1, f2);
		if (i % 4 == 0)
		{
			printf("\n");
		}
	}
	return 0;
}