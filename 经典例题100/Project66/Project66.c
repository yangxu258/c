#define _CRT_SECURE_NO_WARNINGS 1
//题目：输入3个数a, b, c，按大小顺序输出。　　　
//1.程序分析：利用指针方法。
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