#include<stdio.h>

void main()

{
	int a=10;
	int b=20;
	int c=30;
	int* p[3]={&a,&b,&c};
	int i;
	for(i=0;i<3;i++)
	{
		printf("%d ",*(p[i]));
	}
	printf("\n");
}