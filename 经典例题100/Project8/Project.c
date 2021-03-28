#define _CRT_SECURE_NO_WARNINGS 1
//题目：输出9 * 9口诀。
//1.程序分析：分行与列考虑，共9行9列，i控制行，j控制列。
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
