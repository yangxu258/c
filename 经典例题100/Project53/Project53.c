#define _CRT_SECURE_NO_WARNINGS 1
//题目：学习使用按位异或^ 。　　　
//1.程序分析：0 ^ 0 = 0; 0 ^ 1 = 1; 1 ^ 0 = 1; 1 ^ 1 = 0
#include<stdio.h>
int main()
{
	int a = 5,b;
	b = a ^ 9;
	printf("%d ", b);
	return 0;
}