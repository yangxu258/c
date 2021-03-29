#define _CRT_SECURE_NO_WARNINGS 1
//给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。
//不要使用额外的数组空间，你必须仅使用 O(1) 额外空间并 原地 修改输入数组。
//元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。
int removeElement(int* nums, int numsSize, int val) 
{
	int src = 0,dst = 0;
	while (src < numsSize)
	{
		if (nums[src] != val)
		{
			nums[dst] = nums[src];
			dst++;
			src++;
		}
		else
		{
			src++;
		}
	}
	return dst;
}
#include<stdio.h>
int main()
{
	int nums[] = { 1,2,3,5,8,9,3,4,3,56,3,7,3,6,3,4,3 };
	int sz = sizeof(nums) / sizeof(nums[0]);
	int ret=removeElement(nums, sz, 3);
	int i;
	for (i = 0; i < ret; i++)
	{
		printf("%d ", nums[i]);
	}
	return 0;
}