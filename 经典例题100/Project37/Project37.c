#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ����10������������
//1.�����������������ѡ�񷨣����Ӻ�9���ȽϹ����У�ѡ��һ����С�����һ��Ԫ�ؽ�����
//�´����ƣ����õڶ���Ԫ�����8�����бȽϣ������н�����
#include<stdio.h>
int main()
{
	int arr[] = { 2,1,3,5,4,6,8,7,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i, j,flag=0;
	for (i = 0; i < sz - 1; i++)
	{
		flag = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag++;
			}
		}
		if(flag==0)
		break;
	}
	for(i=0;i<sz;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
