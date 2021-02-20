#include<stdio.h>
#include<time.h>
#include<stdlib.h>


void menu()
{
	printf("******************************\n");
	printf("****1.进入游戏  2.退出游戏****\n");
	printf("******************************\n");
}
void game()

{
	//1.生成一个随机数
	int ret=0,guess=0;
	ret=rand()%100+1;
	//printf("%d",ret);
	//2.猜数字
	
	while(1)
	{
		printf("请猜数字:>");
		scanf("%d",&guess);
		if(guess>ret)
		{
			printf("猜大了!\n");
		}
		else if(guess<ret)
		{
			printf("猜小了!\n");
		}
		else
		{
			printf("恭喜你，猜对了!\n");
			break;
		}
	}
}
void main()

{
	
	int input=0;
	srand((signed int)time(NULL));
	do
	{
		menu();
		printf("请输入:>");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			game();break;
		case 0:
			printf("退出游戏\n");break;
		default:
			printf("输入错误，请重新输入\n");break;
		}
	}while(input);
}