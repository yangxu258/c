#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ������һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ�����
//1.�������������while���, ����Ϊ������ַ���Ϊ'\n'.
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