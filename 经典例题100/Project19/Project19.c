#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ��һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ����������
//		����6 = 1��2��3.��̡������ҳ�1000���ڵ�����������
//1. �������������ճ��� < --��ҳ����14.
#include<stdio.h>
#include<math.h>
int if_numbers(int i)
{
	int sum = 0, j;
	for (j = 1; j < i; j++)
	{
		if (i % j == 0)
		{
			sum += j;
		}
	}
	if (sum == i)
	{
		return 1;
	}
	return 0;
}
int main()
{
	int i=6;
	for (i = 2; i <= 1000; i++)
	{
		int ret=if_numbers(i);
		if (ret == 1)
		{
			printf("%d ", i);
		}
	}
	//printf("%d",if_numbers(i));
	return 0;
}