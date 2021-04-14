#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i,x;
	int s[10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &x);
		if (x % 2 == 0 && i % 2 != 0)
		{
			x += 1;
		}
		s[i] = x;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", s[i]);
	}
	return 0;
}