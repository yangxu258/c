#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	FILE* pf = fopen("text.txt", "r");
	if (pf == NULL)
	{
		return 0;
	}
	//定位指针
	fseek(pf, 2, SEEK_CUR);
	//文件读取
	int ch = fgetc(pf);
	printf("%c", ch);
	fclose(pf);
	pf = NULL;
}