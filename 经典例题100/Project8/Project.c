#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ�����9 * 9�ھ���
//1.����������������п��ǣ���9��9�У�i�����У�j�����С�
#include<stdio.h>
int main()
{
	int i, j,n;
	scanf("%d",&n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-5d", j, i, i * j);
		}
		printf("\n");
	}
	return 0;
}
