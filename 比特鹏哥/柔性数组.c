#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
struct S
{
	int n;
	int arr[0];//未知大小的--柔性数组成员--数组大小是可以调整的
};
int main()
{
	struct S* ps=(struct S*) malloc(sizeof(struct S) + 5 * sizeof(int));
	ps->n = 100;
	int i;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	struct S* str= (struct S*)realloc(ps, 44);
	if (str != NULL)
	{
		ps = str;
	}
	for (i = 5; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	printf("%d ", ps->n);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	//动态内存的释放
	free(ps);
	ps = NULL;
	return 0;
}