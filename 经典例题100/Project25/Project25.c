#define _CRT_SECURE_NO_WARNINGS 1
//题目：求1! + 2!+ 3!+ ... + 20!的和
//1.程序分析：此程序只是把累加变成了累乘。
#include<stdio.h>
int main()
{
	double ret = 1, sum = 0;
	int  i = 0;
	for (i = 1; i <= 20; i++)
	{
		ret *= i;
		sum += ret;
	}
	printf("%e\n", sum);
	return 0;
}




//int main()
//{
//	float n, s = 0, t = 1;
//	for (n = 1; n <= 20; n++)
//	{
//		t *= n;
//		s += t;
//	}
//	printf("1+2!+3!...+20!=%e\n", s);
//}
