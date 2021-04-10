#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char ch;
	int English = 0, digit = 0, other = 0;
	while ((ch = getchar()) != '\n')
	{
		if ((ch >= 'A' && ch >= 'Z') || (ch >= 'a' && ch >= 'z'))
		{
			English++;
		}
		else if (ch >= '0' && ch <= '9')
		{
			digit++;
		}
		else
		{
			other++;
		}
	}
	printf("English=%d\tdigit=%d\tother=%d\n", English, digit, other);
	return 0;
}