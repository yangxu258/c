#define _CRT_SECURE_NO_WARNINGS 1
//题目：对10个数进行排序
//1.程序分析：可以利用选择法，即从后9个比较过程中，选择一个最小的与第一个元素交换，
//下次类推，即用第二个元素与后8个进行比较，并进行交换。
#include<stdio.h>
int main()
{
	int arr[] = { 2,1,3,5,4,6,8,7,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i, j,flag=0;
	for (i = 0; i < sz - 1; i++)
	{
		flag = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag++;
			}
		}
		if(flag==0)
		break;
	}
	for(i=0;i<sz;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
