#define _CRT_SECURE_NO_WARNINGS 1
//从键盘上输入一个三位数，然后将它反向输出。例如，若输入123，则输出321.画出结构流程图并编写程序
//123%10->3
//123/10->12
//12%10->2
//12/10->1
//1%10->1
//1/10->0
//循环结束
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