#define _CRT_SECURE_NO_WARNINGS 1
//数组nums包含从0到n所有整数，但其中却了一个，
//请编写代码找出那个整数，你有办法在O（n）时间复杂度内完成吗?
#include<stdio.h>
int missingnumber(int* nums, int nummember)
{
	int x = 0,i;
	for (i = 0; i < nummember; i++)
	{
		x ^= nums[i];//异或相同为0相异为1
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