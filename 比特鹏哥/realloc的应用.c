#include<stdio.h>
#include<malloc.h>

int main()
{
	int* p = (int*)malloc(20);
	int i;
	for (i = 0; i < 5; i++)
	{
		*(p + i) = i;
	}
	int* ptr = (int*)realloc(p, 40);
	if (ptr != NULL)
	{
		p = ptr;
	}
	for (i = 5; i < 10; i++)
		{
			*(p + i) = i;
		}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	free(p);
	p = NULL;
	return 0;
}