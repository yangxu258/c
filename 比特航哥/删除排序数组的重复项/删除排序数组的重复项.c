#define _CRT_SECURE_NO_WARNINGS 1
//给你一个有序数组 nums ，请你 原地 删除重复出现的元素，使每个元素 只出现一次 ，返回删除后数组的新长度。
//不要使用额外的数组空间，你必须在 原地 修改输入数组 并在使用 O(1) 额外空间的条件下完成。
#include<stdio.h>
int removeDuplicates(int* nums, int numsSize)
{
	int prev = 0, cur = 1, dst = 0;
	if (numsSize == 0)
	{
		return 0;
	}
	while (cur < numsSize)
	{
		if (nums[cur] != nums[prev])
		{
			nums[dst] = nums[prev];
			prev++;
			cur++;
			dst++;
		}
		else
		{
			prev++;
			cur++;
		}
	}
	nums[dst] = nums[prev];
	dst++;
	return dst;
}
int main()
{
	int nums[] = { 1,1,1,2,3,3,3,3,3,3,3,4,5,5,6,6,7,7,7,7,7,8,8,9,9,9,9,9,9,9,9,9,9 };
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	int ret = removeDuplicates(nums, numsSize);
	printf("%d\n", ret);
	return 0;
}