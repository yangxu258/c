#define _CRT_SECURE_NO_WARNINGS 1

//题目：写一个函数，求一个字符串的长度，在main函数中输入字符串，并输出其长度。
#include<stdio.h>
size_t my_strlen(char* arr)
{
	int count=0,i=0;
	while (arr[i])
	{
		count++;
		i++;
	}
	return count;
}
int main()
{
	char arr[50] = { 0 };
	scanf("%s", arr);
	int ret=my_strlen(arr);
	printf("%d", ret);
	return 0;
}