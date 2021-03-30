#define _CRT_SECURE_NO_WARNINGS 1
//题目：输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。
//1.程序分析：利用while语句, 条件为输入的字符不为'\n'.
#include<stdio.h>
int main()
{
	char ch;
	int letter = 0, space = 0, digit=0,other = 0;
	while ((ch = getchar()) != '\n')
	{
		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
		{
			letter++;
		}
		else if (ch == ' ')
		{
			space++;
		}
		else if (ch >= '0' && ch <= '9')
		{
			digit++;
		}
		else
		{
			other++;
		}
	}
	printf("letter=%d\nspace=%d\ndigit=%d\nother=%d\n",letter,space,digit,other);
	return 0;
}