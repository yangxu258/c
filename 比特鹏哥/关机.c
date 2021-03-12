#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>
void main()

{
	char input[20]={0};
	system("shutdown -s -t 60");
	
	while(1)
	{
		printf("您的电脑将在60s之内关机，请输入：我是猪   取消关机哟~\n(温馨提示:关掉也没有用哟!!!)\n");
		scanf("%s",input);
		if(strcmp(input,"我是猪")==0)
		{
			system("shutdown -a");
			break;
		}
		system("cls");
	}
}