#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ��ѧϰʹ�ð�λ�� | ��
//1.���������0 | 0 = 0; 0 | 1 = 1; 1 | 0 = 1; 1 | 1 = 1
#include<stdio.h>
int main()
{
	int a, b;
	a = 5;
	b = a | 9;
	printf("%d ", b);
	return 0;
}