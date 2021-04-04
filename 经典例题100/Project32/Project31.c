#define _CRT_SECURE_NO_WARNINGS 1
//题目：请输入星期几的第一个字母来判断一下是星期几，如果第一个字母一样，则继续　　　判断第二个字母。
//1.程序分析：用情况语句比较好，如果第一个字母一样，则判断用情况语句或if语句判断第二个字母。
#include<stdio.h>
int main()
{
	char ch;
	while ((ch = getch()) != '$')
	{
		switch (ch)
		{
		case 'M':
			printf("Monday\n");
			break;
		case 'T':
			if ((ch = getch()) == 'u')
			{
				printf("Tuesday\n");
			}
			else if ((ch = getch()) == 'h')
			{
				printf("Thursday\n");
			}
			else
			{
				printf("input error\n");
			}
			break;
		case 'W':
			printf("Wednesday\n");
			break;
		case 'F':
			printf("Friday\n");
			break;
		case 'S':
			if ((ch = getch()) == 'a')
			{
				printf("Saturday\n");
			}
			else if ((ch = getch()) == 'u')
			{
				printf("Sunday\n");
			}
			else
			{
				printf("input error\n");
			}
			break;
		default:
			printf("input error\n");
		}
	}
	return 0;
}