#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
#include<string.h>
#include<errno.h>
int main()
{
	//calloc与malloc都是在动态内存中开辟一块空间，
	//malloc效率高但不能初始化，
	//而calloc效率稍低但会将每个元素初始化为0
	int* p=(int*)calloc(10, sizeof(int));//如果开辟的空间太大会返回空指针
	if (p == NULL)
	{
		//打印错误信息
		printf("%s\n", strerror(errno));
	}
	else
	{
		//赋值并打印
		int i;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
	}
	
	//释放p并赋值为空指针
	free(p);
	p = NULL;
	return 0;
}