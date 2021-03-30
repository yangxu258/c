#define _CRT_SECURE_NO_WARNINGS 1
//����һ���������� nums ������ ԭ�� ɾ���ظ����ֵ�Ԫ�أ�ʹÿ��Ԫ�� ֻ����һ�� ������ɾ����������³��ȡ�
//��Ҫʹ�ö��������ռ䣬������� ԭ�� �޸��������� ����ʹ�� O(1) ����ռ����������ɡ�
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