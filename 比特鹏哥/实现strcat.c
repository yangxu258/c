#include<stdio.h>
#include<assert.h>
char* my_strcat(char* dest, const char* src)
{
	assert(dest);
	assert(src);
	char* p = dest;
	//1.找到arr1中的'\0'
	while (*dest != '\0')
	{
		dest++;
	}
	//2.把arr2中的字符串拷贝到'\0'处
	while (*dest++ = *src++)
	{
		;
	}
	return p;

	
}
int main()
{
	char arr1[30] = "hello";
	char arr2[] = "word";
	my_strcat(arr1, arr2);
	printf("%s\n",arr1);
	return 0;
}