#define _CRT_SECURE_NO_WARNINGS 1
//����nums������0��n����������������ȴ��һ����
//���д�����ҳ��Ǹ����������а취��O��n��ʱ�临�Ӷ��������?
#include<stdio.h>
int missingnumber(int* nums, int nummember)
{
	int x = 0,i;
	for (i = 0; i < nummember; i++)
	{
		x ^= nums[i];//�����ͬΪ0����Ϊ1
	}
	for (i = 0; i < (nummember + 1); i++)
	{
		x ^= i;
	}
	return x;
}
int main()
{
	int num[] = { 5,6,7,4,9,2,3,1,0 };
	int nummember = sizeof(num) / sizeof(num[0]);
	printf("%d\n", missingnumber(num, nummember));
	return 0;
}