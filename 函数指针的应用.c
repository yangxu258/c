#include<stdio.h>
//����ָ�롪��>��һ��ָ������ָ�룬���ڴ�ź����ĵ�ַ
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