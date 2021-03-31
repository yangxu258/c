#define _CRT_SECURE_NO_WARNINGS 1
//给你两个有序整数数组 nums1 和 nums2，请你将 nums2 合并到 nums1 中，使 nums1 成为一个有序数组。
//初始化 nums1 和 nums2 的元素数量分别为 m 和 n 。
//你可以假设 nums1 的空间大小等于 m + n，这样它就有足够的空间保存来自 nums2 的元素。
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{
	int* tmp=(int*)malloc(sizeof(int) * (m + n));
	int i1 = 0, i2 = 0, i = 0;
	while (i1 < m && i2 < n)
	{
		if (nums1[i1] < nums2[i2])
		{
			tmp[i] = nums1[i1];
			i++;
			i1++;
		}
		else
		{
			tmp[i] = nums2[i2];
			i++;
			i2++;
		}
	}
	while (i1 < m)
	{
		tmp[i] = nums1[i1];
		i++;
		i1++;
	}
	while (i2 < n)
	{
		tmp[i] = nums2[i2];
		i++;
		i2++;
	}
	memcpy(nums1, tmp, sizeof(int) * (m + n));
	free(tmp);
}
int main()
{
	int nums1[] = { 1,1,2,2,3,3,4,4,5,5,6,6,0,0,0 };
	int nums2[] = { 1,3,4 };
	int nums1Size = sizeof(nums1) / sizeof(nums1[0]);
	int nums2Size = sizeof(nums2) / sizeof(nums2[0]);
	int  n = nums2Size;
	int  m = nums1Size - nums2Size;
	merge(nums1, nums1Size, m, nums2, nums2Size, n);
	int i;
	for (i = 0; i < nums1Size; i++)
	{
		printf("%d ", nums1[i]);
	}
	return 0;
}