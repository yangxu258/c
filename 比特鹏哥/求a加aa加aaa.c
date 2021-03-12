#include<stdio.h>

void main()

{
	int a=0;
	int n=0;
	scanf("%d%d",&a,&n);
	int sum=0;
	int ret=0;
	int i;
	for(i=0;i<n;i++)
	{
		ret=ret*10+a;
		sum+=ret;
	}
	printf("sum=%d\n",sum);
}