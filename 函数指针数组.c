#include<stdio.h>

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

void main()

{
	int (*p[4])(int,int)={Add,Sub,Mul,Div};//����ָ�����顪��>��ź���ָ�������
	int i;
	for(i=0;i<4;i++)
	{
		printf("%d ",p[i](2,3));
	}

}