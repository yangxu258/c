#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ����һ��������5λ����������Ҫ��һ�������Ǽ�λ�������������ӡ����λ���֡�
//1. ���������ѧ��ֽ��ÿһλ�������½��ͣ�
#include<stdio.h>
int main()
{
	int n,count=0;
	scanf("%d", &n);
	while (n)//123
	{
		count++;
		printf("%d ", n % 10);
		n /= 10;
	}
	printf("count=%d\n", count);
	return 0;
}