#define _CRT_SECURE_NO_WARNINGS 1
//题目：输入两个正整数m和n，求其最大公约数和最小公倍数。
//1.程序分析：利用辗除法。

#include<stdio.h>
int main()
{
	int num1, num2, temp, a, b;
	scanf("%d%d", &num1, &num2);
	if (num1 < num2)
	{
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
	a = num1; b = num2;
	while (b != 0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}
	printf("%d\n", a);//最大公约数
	printf("%d\n", num1 * num2 / a);//最小公倍数
	return 0;
}
