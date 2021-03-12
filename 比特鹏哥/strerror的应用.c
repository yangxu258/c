#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>
//strerror返回错误码所对应的错误信息
int main()
{
	FILE* pf = fopen("test.txt", 'r');
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		printf("Open file success");
	}
}