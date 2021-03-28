#define _CRT_SECURE_NO_WARNINGS 1
//题目：打印出所有的“水仙花数”，所谓“水仙花数”是指一个三位数，其各位数字立方和等于该数本身。
//		例如：153是一个“水仙花数”，因为153 = 1的三次方＋5的三次方＋3的三次方。
//1.程序分析：利用for循环控制100 - 999个数，每个数分解出个位，十位，百位。
#include<stdio.h>
int Daffodil_number(int n)
{
	int i, j, k;
	i = n % 10;
	j = n / 10 % 10;
	k = n / 100;
	if (n == i * i * i + k * k * k + j * j * j)
	{
		return 1;
	}
	return 0;
}
int main()
{
	int i;
	for (i = 100; i <= 999; i++)
	{
		int ret=Daffodil_number(i);
		if (ret == 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}