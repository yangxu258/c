#include<stdio.h>

/*int Fac1(int n)

{
	int i,ret=1;
	for(i=1;i<=n;i++)
	{
		ret*=i;

	}
	return ret;
}*/
int Fac1(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
		return n*Fac1(n-1);
}
void main()


{
	int n;
	int ret=0;
	scanf("%d",&n);
	ret = Fac1(n);
	printf("n!=%d\n",ret);
}