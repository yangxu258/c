#define _CRT_SECURE_NO_WARNINGS 1
//题目：一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同。　　　
//1.程序分析：同29例
#include<stdio.h>
int main()
{
	int ge, shi, qian, wan,n;
	scanf("%d", &n);
	ge = n % 10;
	shi = n / 10 % 10;
	qian = n / 1000 % 10;
	wan = n / 10000;
	if (ge == wan && shi == qian)
	{
		printf("%d是回文数\n",n);
	}
	else
	{
		printf("%d不是回文数\n", n);
	}
	return 0;
}