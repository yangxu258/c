#include<stdio.h>
void print_table(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d*%d=%-5d",j,i,i*j);
		}
		printf("\n");
	}
}
void main()

{
	int n=0;
	scanf("%d",&n);
	print_table(n);
}