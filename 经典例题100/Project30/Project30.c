#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ��һ��5λ�����ж����ǲ��ǻ���������12321�ǻ���������λ����λ��ͬ��ʮλ��ǧλ��ͬ��������
//1.���������ͬ29��
#include<stdio.h>
int main()
{
	int ge, shi, qian, wan,n;
	scanf("%d", &n);
	ge = n % 10;
	shi = n / 10 % 10;
	qian = n / 1000 % 10;
	wan = n / 10000;
	if (ge == wan && shi == qian)
	{
		printf("%d�ǻ�����\n",n);
	}
	else
	{
		printf("%d���ǻ�����\n", n);
	}
	return 0;
}