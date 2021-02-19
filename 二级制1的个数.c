#include<stdio.h>

void main()

{
	int n,i,count=0;
	scanf("%d",&n);
	for(i=0;i<32;i++)
	{
		if(1==((n>>i)&1))//按位与
			count++;

	}
	printf("二进制中1的个数:%d\n",count);
}