#include<stdio.h>
#include<assert.h>
char* my_strcat(char* dest, const char* src)
{
	assert(dest);
	assert(src);
	char* p = dest;
	//1.�ҵ�arr1�е�'\0'
	while (*dest != '\0')
	{
		dest++;
	}
	//2.��arr2�е��ַ���������'\0'��
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