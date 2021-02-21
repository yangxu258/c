#include<stdio.h>

int Digitsum(unsigned int n)

{
	if(n>9)
	{
		return Digitsum(n/10)+(n%10);
	}
	else
	{
		return n;
	}
}

void main()

{
	unsigned int n=0,ret=0;
	scanf("%d",&n);
	ret=Digitsum(n);
	printf("ret=%d\n",ret);
}