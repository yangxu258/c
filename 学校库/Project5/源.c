#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i,j=0;
	int s[32] = { 0 };
	scanf("%d", &i);
	while (i)
	{
		s[j] = i % 2;
		j++;
		i /= 2;
	}
	for (j = 31; j >=0; j--)
	{
		printf("%d",s[j]);
	}
	
	return 0;
}