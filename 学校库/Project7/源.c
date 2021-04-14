#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n,i;
	double  S = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		S = S+1.0 / (i * (i + 1));
	}
	printf("%lf\n", S);
	return 0;
}