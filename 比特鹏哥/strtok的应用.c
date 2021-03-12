#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[] = "2532257655@qq.com";
	const char* p= "@.";
	char arr2[1000];
	strcpy(arr2, arr);
	char* ret=NULL;
	for (ret = strtok(arr2, p); ret != NULL;ret=strtok(NULL,p))
	{
		printf("%s ", ret);
	}
	return 0;
}