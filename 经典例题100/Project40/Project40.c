#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ����һ���������������
//1.����������õ�һ�������һ��������
#include<stdio.h>
void reverse(int* arr,int sz)
{
	int left = 0, right = sz - 1;
	while (left < right)
	{
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	reverse(&arr,sz);
	int i;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}