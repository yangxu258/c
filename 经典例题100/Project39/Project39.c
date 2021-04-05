#define _CRT_SECURE_NO_WARNINGS 1
//题目：有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。
//1. 程序分析：首先判断此数是否大于最后一个数，然后再考虑插入中间的数的情况，插入后此元素之后的数，依次后移一个位置。
#include<stdio.h>
int main()
{
	int arr[11] = { 1,10,20,30,40,50,60,70,80,100 };
	int n,i=10;
	scanf("%d", &n);
	arr[10] = n;
	while (n < arr[i-1])
	{
		int temp = arr[i];
		arr[i] = arr[i-1];
		arr[i-1] = temp;
		i--;
	}
	for(i=0;i<11;i++)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;
}