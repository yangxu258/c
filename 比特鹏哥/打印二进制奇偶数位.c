#include<stdio.h>

void print(int n)

{
	int i;
	printf("奇数位:\n");
	for(i=30;i>=0;i-=2)
	{
		printf("%d ",(n>>i)&1);
	}
	printf("\n偶数位:\n");
	for(i=31;i>=1;i-=2)
	{
		printf("%d ",(n>>i)&1);
	}
	printf("\n");
}

//00000000000000000000000000001101

void main()

{
	int a=0;
	scanf("%d",&a);
	print(a);
}