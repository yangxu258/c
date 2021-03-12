#include<stdio.h>

void menu()
{
	printf("****************************************\n");
	printf("************1.加法  2.减法**************\n");
	printf("************3.乘法  4.除法**************\n");
	printf("************5.异或  0.退出**************\n");
	printf("****************************************\n");
}

int Add(int x,int y)
{
	return x+y;
}

int Sub(int x,int y)
{
	return x-y;
}

int Mul(int x,int y)
{
	return x*y;
}

int Div(int x,int y)
{
	return x/y;
}

int Ror(int x,int y)
{
	return x^y;
}

void test()
{
	int input=0;
	int x=0;
	int y=0;
	int ret=0;
	//pfarr是一个函数指针数组，用来存放函数指针
	int (*pfarr[])(int,int)={0,Add,Sub,Mul,Div,Ror};
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d",&input);
		if(input>=1&&input<=5)
		{
			printf("请输入两个操作数:>");
			scanf("%d%d",&x,&y);
			ret=pfarr[input](x,y);
			printf("%d\n",ret);
		}
		else if(input==0)
		{
			printf("退出程序");
		}
		else
		{
			printf("选择错误,请重新选择");
		}
		
	}while(input);
}

void main()

{
	test();
}