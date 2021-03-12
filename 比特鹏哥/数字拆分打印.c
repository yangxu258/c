#include<stdio.h>
//µÝ¹é·Ö¸î
void print(int n)

{
	if(n>9)
	{
		print(n/10);
	}
	printf("%d ",n%10);
}

void main()

{
	unsigned int num=0;
	scanf("%d",&num);
	print(num);
	printf("\n");
}
