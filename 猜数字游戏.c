#include<stdio.h>
#include<time.h>
#include<stdlib.h>


void menu()
{
	printf("******************************\n");
	printf("****1.������Ϸ  2.�˳���Ϸ****\n");
	printf("******************************\n");
}
void game()

{
	//1.����һ�������
	int ret=0,guess=0;
	ret=rand()%100+1;
	//printf("%d",ret);
	//2.������
	
	while(1)
	{
		printf("�������:>");
		scanf("%d",&guess);
		if(guess>ret)
		{
			printf("�´���!\n");
		}
		else if(guess<ret)
		{
			printf("��С��!\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���!\n");
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
		printf("������:>");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			game();break;
		case 0:
			printf("�˳���Ϸ\n");break;
		default:
			printf("�����������������\n");break;
		}
	}while(input);
}