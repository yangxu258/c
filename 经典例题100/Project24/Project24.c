#define _CRT_SECURE_NO_WARNINGS 1
//题目：有一分数序列：2 / 1，3 / 2，5 / 3，8 / 5，13 / 8，21 / 13...求出这个数列的前20项之和。
//1.程序分析：请抓住分子与分母的变化规律。
#include<stdio.h>
int main()
{
	int n;
	float s = 0, a = 2, b = 1,t;
	for (n = 1; n <= 20; n++)
	{
		s = s + a / b;
		t = a;
		a = a + b;
		b = a;
	}
	printf("%f\n", s);
	return 0;
}