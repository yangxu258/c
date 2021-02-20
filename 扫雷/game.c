#include"game.h"

void InitBoard(char board[ROWS][COLS],int rows,int cols,char set)
{
	int i,j;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			board[i][j]=set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS],int row,int col)
{
	int i,j;
	for(i=0;i<=row;i++)
	{
		printf("%d ",i);
	}
	printf("\n");
	for(i=1;i<=row;i++)
	{
		printf("%d ",i);
		for(j=1;j<=col;j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char board[ROWS][COLS],int row,int col)
{
	int count=COUNT;
	while(count)
	{
		int x=rand()%row+1;
		int y=rand()%col+1;
		if(board[x][y]=='0')
		{
			board[x][y]='1';
			count--;
		}
	}
}

int get_mine(char mine[ROWS][COLS],int x,int y)
{
	return mine[x-1][y-1]+
		mine[x-1][y]+
		mine[x-1][y+1]+
		mine[x][y-1]+
		mine[x][y+1]+
		mine[x+1][y-1]+
		mine[x+1][y]+
		mine[x+1][y+1]-8*'0';
}

void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)

{
	int x=0,y=0;
	int win=0;
	while(win<row*col-COUNT)
	{
		printf("������ɨ������:>\n");
		scanf("%d%d",&x,&y);
		if(x>=1&&x<=9&&y>=1&&y<=9)
		{
			//�������
			//1.����
			if(mine[x][y]=='1')
			{
				printf("���ź����㱻ը����!!!\n");
				DisplayBoard(mine,row,col);
				break;
			}
			else//2.������
			{
				//�����������Χ�м�����
				int count=get_mine(mine,x,y);
				show[x][y]='0'+count;
				DisplayBoard(show,row,col);
				win++;
			}
		}
		else
		{
			printf("�Ƿ����꣬����������!!!\n");
		}
	}
	if(win==row*col-COUNT)
	{
		printf("��ϲ�㣬���׳ɹ�!!!\n");
		DisplayBoard(mine,row,col);
	}
	

}