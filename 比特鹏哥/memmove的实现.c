#include<stdio.h>
#include<assert.h>
//可以拷贝内存中重叠的内容
void* my_memmove(void* dest, const void* src, size_t count)
{
	void* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	if (dest < src)
	{
		//从前向后拷贝
		while (count--)
		{
			*(char*)dest = *(char*)src;
			((char*)dest)++;
			((char*)src)++;
		}
	}
	else
	{
		//从后向前拷贝
		while (count--)
		{
			*((char*)dest + count) = *((char*)src + count);
		}
	}
	return ret;
}
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	/*memmove(arr1 + 2, arr1, 20);*/
	my_memmove(arr1 + 2, arr1, 20);
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	
	return 0;
}