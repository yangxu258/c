#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ����ӡ������ͼ�������Σ�
//
//   *
//  ***
// *****
//*******
// *****
//  ***
//   *
//1.����������Ȱ�ͼ�ηֳ���������������ǰ����һ�����ɣ�������һ�����ɣ�����˫��forѭ������һ������У��ڶ�������С�

#include<stdio.h>
int main()
{
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3-i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < i + 1; j++)
		{
			printf(" ");
		}
		for (j = 0; j <=6-2 * (i + 1); j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}