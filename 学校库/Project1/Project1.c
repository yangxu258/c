#define _CRT_SECURE_NO_WARNINGS 1
//�Ӽ���������һ����λ����Ȼ����������������磬������123�������321.�����ṹ����ͼ����д����
//123%10->3
//123/10->12
//12%10->2
//12/10->1
//1%10->1
//1/10->0
//ѭ������
#include<stdio.h>
int main()
{
	int input = 0;
	scanf("%d", &input);
	while (input)          
	{
		printf("%d", input % 10);
		input =input / 10;
	}
	return 0;
}