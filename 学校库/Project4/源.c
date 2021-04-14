#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int x,s=1;
	scanf("%d", &x);
	while (x > 0)
	{
		s *= x;
		scanf("%d", &x);
	}
	printf("s=%d\n", s);
	return 0;
}