#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i, j, k;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				if (i * 100 + j * 10 + k + k * 100 + j * 10 + i == 1333)
				{
					printf("i=%d\tj=%d\tk=%d\n", i, j, k);
					return;
				}
			}
		}
	}
	return 0;
}