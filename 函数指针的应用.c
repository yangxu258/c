#include<stdio.h>
//函数指针——>是一个指向函数的指针，用于存放函数的地址
void Add(int x,int y)
{
	printf("%d\n",x+y);
}
void main()

{
	int a=10,b=20;
	void (*p)(int,int)=Add;
	(*p)(a,b);
}