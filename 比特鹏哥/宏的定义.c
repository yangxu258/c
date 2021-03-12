#include<stdio.h>

#define MAX(x,y) (x>y?x:y)

void main()

{
	int a=10,b=20;
	int max=0;
	max=MAX(a,b);
	printf("max=%d\n",max);
}