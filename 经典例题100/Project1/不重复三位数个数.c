#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ����1��2��3��4�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�
//1.��������������ڰ�λ��ʮλ����λ�����ֶ���1��2��3��4��
//			 ������е����к���ȥ�����������������С�
#include<stdio.h>
int main()
{
	int i = 0, j = 0, k = 0,count=0;
	for (i = 1; i < 5; i++)
	{
		for (j = 1; j < 5; j++)
		{
			for (k = 1; k < 5; k++)
			{
				if (i != j && j != k && i != k)//��֤��λ������ͬ
				{
					count++;
					printf("%d%d%d ", i, j, k);
				}
			}
		}
		printf("\n");
	}
	printf("count=%d\n", count);
	return 0;
}
