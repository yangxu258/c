#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//输入字符
//	fputc('b', pf);
//	fputc('i', pf);
//	fputc('t', pf);
//	//输出字符
//	/*printf("%c", fgetc(pf));
//	printf("%c", fgetc(pf));
//	printf("%c", fgetc(pf));*/
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//


int main()
{
	int ch = fgetc(stdin);
	fputc(ch, "text.txt");
	return 0;
}