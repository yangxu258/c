#define _CRT_SECURE_NO_WARNINGS 1
//给定一个数组nums，其中恰好有两个元素只出现一次，
//其余所有元素均出现两次，找出只出现一次的那两个元素
#include<stdio.h>
int* singlenumber(int* nums, int sz)
{
	int x = 0,i,x1=0,x2=0;
	for (i = 0; i < sz; i++)
	{
		x ^= nums[i];//相同数^之后消失，结果为两个唯一数^
	}
	//分解x为两个唯一数，找到x在m位为1的位，说明两个唯一数在m位一个为1另一个为0
	int m = 0;
	while (m < 32)
	{
		if (x & (1 << m))//x二进制位于1二进制位按位与，只有对应的二进位均为1时，结果才为1，否则为0
		{
			break;
		}
		else
		{
			m++;
		}
	}
	//在原数组中找到m位分别为1和0分为两组
	for (i = 0; i < sz; i++)
	{
		if (nums[i] & (1 << m))
		{
			x1 ^= nums[i];
		}
		else
		{
			x2 ^= nums[i];
		}
	}
	//返回这两个数
	int arr[] = { x1,x2 };
	return arr;
}
int main()
{
	int nums[] = { 10,10,6,6,8,1,1,4,4,7 };
	int sz = sizeof(nums) / sizeof(nums[0]);
	int* pf=singlenumber(nums, sz);
	printf("%d %d", pf[0], pf[1]);
	return 0;
}