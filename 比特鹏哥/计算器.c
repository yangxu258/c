#include<stdio.h>

void menu()
{
	printf("****************************************\n");
	printf("************1.�ӷ�  2.����**************\n");
	printf("************3.�˷�  4.����**************\n");
	printf("************5.���  0.�˳�**************\n");
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
	//pfarr��һ������ָ�����飬������ź���ָ��
	int (*pfarr[])(int,int)={0,Add,Sub,Mul,Div,Ror};
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d",&input);
		if(input>=1&&input<=5)
		{
			printf("����������������:>");
			scanf("%d%d",&x,&y);
			ret=pfarr[input](x,y);
			printf("%d\n",ret);
		}
		else if(input==0)
		{
			printf("�˳�����");
		}
		else
		{
			printf("ѡ�����,������ѡ��");
		}
		
	}while(input);
}

void main()

{
	test();
}