#include<stdio.h>

void main()


{
	int a=3;
	int b=5;
	//临时变量法——最常用
	//int temp=0;
	//temp=a;
	//a=b;
	//b=temp;

	//加减法——数太大会溢出
	//a=a+b;
	//b=a-b;
	//a=a-b;

	//异或法
	a=a^b;
	b=a^b;
	a=a^b;
	printf("a=%d\nb=%d\n",a,b);
}