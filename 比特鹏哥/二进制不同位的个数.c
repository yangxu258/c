#include<stdio.h>

int get_diff_bit(int m,int n)
{
	int count=0,temp=0;
	temp=m^n;//�������������ͬΪ0������Ϊ1
	while(temp)
	{
		temp=temp&(temp-1);
		count++;
	}
	return count;
}


void main()

{
	int m=0,n=0;
	int count=0;
	scanf("%d%d",&m,&n);
	count=get_diff_bit(m,n);
	printf("count=%d\n",count);
}