#include<stdio.h>

int check_sys()
{
	int a=1;
	return (*(char* )&a);
}

void main()

{
	//дһ��������Դ�����ֽ���
	int ret=check_sys();
	if(ret==1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
}
