#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ��Ҫ����������������̡�
//1.�����������i�����У�j�������У�����i + j�ĺ͵ı仯����������ڷ��񣬻��ǰ׷���
#include<stdio.h>
#include<windows.h>
int main()
{
	int i, j;
	SetConsoleOutputCP(437);
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			if ((i + j) % 2 == 0)
				printf("%c", 219);
			else
				printf("  ");
		printf("\n");
	}
	return 0;
}