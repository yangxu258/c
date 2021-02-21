#include<stdio.h>

void is_leap(int n)
{
	if((n%4==0&&n%100!=0)||n%400==0)
		printf("ÈòÄê\n");
	else
		printf("Æ½Äê\n");
}

void main()

{
	int year;
	scanf("%d",&year);
	is_leap(year);
}