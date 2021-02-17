#include<stdio.h>

int MAX(int x,int y)
{
	if(x>y)
		return x;
	else
		return y;
}

void main()

{
	int a=10,b=20;
	int max=0;
	max=MAX(a,b);
	printf("max=%d\n",max);
}