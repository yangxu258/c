#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ���������ͼ��������c���������У���һ����Very Beautiful!
//1.����������ַ�����256������ͬ�ַ���ͼ�β�һ����������������
#include<stdio.h>
int main()
{
	char a = '*', b = '^';
	printf("%c%c%c%c%c\n", b, a, a, a, b);
	printf("%c%c%c%c%c\n", a, b, a, b, a);
	printf("%c%c%c%c%c\n", a, a, b, a, a);
	printf("%c%c%c%c%c\n", a, b, a, b, a);
	printf("%c%c%c%c%c\n", b, a, a, a, b);
	return 0;
}
