#include<stdio.h>
//喝汽水，一瓶汽水一块钱，两个空瓶可以换一瓶汽水，给x元，可以喝多少瓶汽水
void main()

{
	int money=0;
	int total=0;
	int temp=0;
	scanf("%d",&money);
	//1.
	//喝的汽水数量
	total=money;
	//喝完剩下的空瓶
	temp=money;
	while(temp>=2)
	{
		total+=temp/2;
		temp=temp/2+temp%2;
	}
	printf("total=%d\n",total);
	//2.
	/*if(money==0)
	{
		total=0;
	}
	else
	{
		total=2*money-1;
	}*/
}