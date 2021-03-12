#include<stdio.h>
#include<math.h>
//打印100到200之间的素数
void is_prime(int n)

{
	int a,count=0;
	for(a=2;a<=sqrt(n);a++)
	{
		if(n%a==0)
		{
			break;
		}
	}
	if(a>sqrt(n))
	{
		printf("%d ",n);
	}
	
}
void main()

{
	int i,count=0;
	for(i=100;i<=200;i++)
	{
		is_prime(i);
	}

}