#include<stdio.h>

int check_sys()
{
	int a=1;
	return (*(char* )&a);
}

void main()

{
	//写一个程序测试储存的字节序
	int ret=check_sys();
	if(ret==1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
}
