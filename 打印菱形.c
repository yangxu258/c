#include<stdio.h>
#include<windows.h>

void main()

{
	int line=0,i;
	int j=0;
	scanf("%d",&line);
	system("cls");
	//1.��ӡ�ϰ벿��
	for(i=0;i<line;i++)
	{
		//��ӡ�ո�
		for(j=0;j<line-1-i;j++)
		{
			printf(" ");
		}
		//��ӡ*
		for(j=0;j<2*i+1;j++)
		{
			printf("*");
			Sleep(50);
		}
		printf("\n");

	}
	//2.��ӡ�°벿��
	for(i=0;i<line-1;i++)
	{
		//��ӡ�ո�
		for(j=0;j<=i;j++)
		{
			printf(" ");
		}
		//��ӡ*
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