#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ������3����a, b, c������С˳�������������
//1.�������������ָ�뷽����
#include<stdio.h>
void swap(int* x, int* y)
{
	if (*x < *y)
	{
		int temp = *x;
		*x = *y;
		*y = temp;
	}
}
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	swap(&a, &b);
	swap(&a, &c);
	swap(&b, &c);
	printf("%d>%d>%d\n", a, b, c);
	return 0;
}