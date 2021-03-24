#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define PRINT(X) printf("the value is "#X" of %d\n",X);
//#X×ª»»³É"a/b"
int main()
{
	int a = 10;
	int b = 20;
	PRINT(a);
	PRINT(b);

	return 0;
}