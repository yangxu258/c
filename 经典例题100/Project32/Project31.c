#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ�����������ڼ��ĵ�һ����ĸ���ж�һ�������ڼ��������һ����ĸһ����������������жϵڶ�����ĸ��
//1.�����������������ȽϺã������һ����ĸһ�������ж����������if����жϵڶ�����ĸ��
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