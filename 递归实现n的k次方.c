#include<stdio.h>

double Pow(int n,int k)
{
	if(k<0)
	{
		return 1.0/Pow(n,-k);
	}
	else if(k==0)
	{
		return 1; 
	}
	else
	{
		return n*Pow(n,k-1);
	}
}

void main()

{
	int n=0,k=0;
	double ret=0;
	scanf("%d%d",&n,&k);
	ret=Pow(n,k);
	printf("ret=%lf\n",ret);
}