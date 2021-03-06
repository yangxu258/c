#include<stdio.h>
#include<assert.h>
int my_strcmp(const char* p1,const char* p2)
{
	assert(p1 && p2);
	while (*p1 == *p2)
	{
		if (*p1 == '\0')
			return 0;
		p1++;
		p2++;
	}
	if (*p1 > *p2)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "abcqwe";
	int ret = my_strcmp(arr1, arr2);
	printf("ret=%d", ret);
	return 0;
}