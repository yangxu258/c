#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ����һ���Ѿ��ź�������顣������һ������Ҫ��ԭ���Ĺ��ɽ������������С�
//1. ��������������жϴ����Ƿ�������һ������Ȼ���ٿ��ǲ����м�����������������Ԫ��֮����������κ���һ��λ�á�
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