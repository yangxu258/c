#include<stdio.h>
#include<windows.h>

void main()

{
	int line=0,i;
	int j=0;
	scanf("%d",&line);
	system("cls");
	//1.打印上半部分
	for(i=0;i<line;i++)
	{
		//打印空格
		for(j=0;j<line-1-i;j++)
		{
			printf(" ");
		}
		//打印*
		for(j=0;j<2*i+1;j++)
		{
			printf("*");
			Sleep(50);
		}
		printf("\n");

	}
	//2.打印下半部分
	for(i=0;i<line-1;i++)
	{
		//打印空格
		for(j=0;j<=i;j++)
		{
			printf(" ");
		}
		//打印*
		for(j=0;j<2*(line-1-i)-1;j++)
		{
			printf("*");
			Sleep(50);
		}
		printf("\n");
	}
	
}







 /*      *
	  ***
	 *****
	*******
   *********
  ***********
 *************
***************
 *************
  ***********
   *********
    *******
	 *****
	  ***
	   **/