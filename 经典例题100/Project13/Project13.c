#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ����ӡ�����еġ�ˮ�ɻ���������ν��ˮ�ɻ�������ָһ����λ�������λ���������͵��ڸ�������
//		���磺153��һ����ˮ�ɻ���������Ϊ153 = 1�����η���5�����η���3�����η���
//1.�������������forѭ������100 - 999������ÿ�����ֽ����λ��ʮλ����λ��
#include<stdio.h>
int Daffodil_number(int n)
{
	int i, j, k;
	i = n % 10;
	j = n / 10 % 10;
	k = n / 100;
	if (n == i * i * i + k * k * k + j * j * j)
	{
		return 1;
	}
	return 0;
}
int main()
{
	int i;
	for (i = 100; i <= 999; i++)
	{
		int ret=Daffodil_number(i);
		if (ret == 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}