#include<stdio.h>
#include<math.h>

//水仙花数:例如153=1^3+5^3+3*3

void main()

{
	int i,temp=0;
	for(i=0;i<=100000;i++)
	{
		int sum=0;
		//1.判断i有n位
		int n=1;
		temp=i;
		while(temp/=10)
		{
			n++;
		}
		//2.求每位n次方的和sum
		temp=i;
		
		while(temp)
		{
			sum+=pow(temp%10,n);
			temp/=10;
		}
		//3.判断i是否等于sum
		if(i==sum)
			printf("%d ",i);
	}
}