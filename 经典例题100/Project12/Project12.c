#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ���ж�101 - 200֮���ж��ٸ����������������������
//1.����������ж������ķ�������һ�����ֱ�ȥ��2��sqrt(�����)������ܱ�������
							//���������������������֮��������
#include<stdio.h>
#include<math.h>
//�ж��Ƿ�Ϊ����
int prime(int i)
{
	int j;
	for (j = 2; j <= sqrt(i); j++)
	{
		if (i % j == 0)
		{
			break;
		}
	}
	if (j > sqrt(i))
	{
		return 1;
	}
}
int main()
{
	int i,count=0;
	for (i = 101; i <= 200; i++)
	{
		int ret=prime(i);//����1Ϊ����0����
		if (ret == 1)
		{
			count++;
			printf("%d ", i);
		}
	}
	return 0;
}