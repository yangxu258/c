#define _CRT_SECURE_NO_WARNINGS 1
//����һ������nums������ǡ��������Ԫ��ֻ����һ�Σ�
//��������Ԫ�ؾ��������Σ��ҳ�ֻ����һ�ε�������Ԫ��
#include<stdio.h>
int* singlenumber(int* nums, int sz)
{
	int x = 0,i,x1=0,x2=0;
	for (i = 0; i < sz; i++)
	{
		x ^= nums[i];//��ͬ��^֮����ʧ�����Ϊ����Ψһ��^
	}
	//�ֽ�xΪ����Ψһ�����ҵ�x��mλΪ1��λ��˵������Ψһ����mλһ��Ϊ1��һ��Ϊ0
	int m = 0;
	while (m < 32)
	{
		if (x & (1 << m))//x������λ��1������λ��λ�룬ֻ�ж�Ӧ�Ķ���λ��Ϊ1ʱ�������Ϊ1������Ϊ0
		{
			break;
		}
		else
		{
			m++;
		}
	}
	//��ԭ�������ҵ�mλ�ֱ�Ϊ1��0��Ϊ����
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
	//������������
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