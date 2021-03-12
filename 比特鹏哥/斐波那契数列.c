#include<stdio.h>

/*int Fib(int n)
{
	int count=0;
	if(n==3)
	{
		count++;
	}
	if(n<=2)
	{
		return 1;
	}
	else
		return Fib(n-1)+Fib(n-2);
}*/

int Fib(int n)
{
	int a=1,b=1,c=1;
	while(n>2)
	{
		c=a+b;
		a=b;
		b=c;
		n--;
	}
	return c;
}
void main()

{
	int n=0;
	int ret=0;
	scanf("%d",&n);
	ret=Fib(n);
	printf("%d\n",ret);

}