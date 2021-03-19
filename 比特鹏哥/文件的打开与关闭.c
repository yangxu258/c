#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>
int main()
{
	//打开文件用fopen函数，它返回一个FILE*类型的指针
	// 		为了不使\t变为转换字符我们再加上一个\
	//相对路径
	//. 表示当前路径-用/隔开
	//..表示上一级路径
	//FILE* pf = fopen("..\\text.txt", "r");
	//绝对路径:
	//FILE* pf = fopen("D:\\c语言库\\文件的打开与关闭\\text.txt", "r");
	FILE* pf = fopen("text.txt", "w");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//关闭文件
	fclose(pf);
	pf = NULL;

	return 0;
}