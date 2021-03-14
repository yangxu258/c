#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<errno.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	//开辟10个整型空间
	int* p=(int*)malloc(10 * sizeof(int));
	if (p == NULL)
	{
		//打印p为空指针时所对应的错误信息
		printf("%s\n", strerror(errno));
	}
	else
	{
		//使用开辟的整型空间
		int i;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i;
		}
		//打印
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
	}
	//释放指针p
	free(p);
	//将指针p记忆删除
	p = NULL;
	return 0;
}