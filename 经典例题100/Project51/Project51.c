#define _CRT_SECURE_NO_WARNINGS 1
//题目：学习使用按位与& 。　　　
//1.程序分析：0 & 0 = 0; 0 & 1 = 0; 1 & 0 = 0; 1 & 1 = 1 二进制位存储的位补码
#include<stdio.h>
int main()
{
	int a, b;
	a = 7;
	b = a & 3;
	printf("%d ", b);
	return 0;
}