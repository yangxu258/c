#include<stdio.h>
//������--������-->����һ���ڴ�ռ�
//������Ĵ���
//union un
//{
//	char a;
//	int i;
//};
int check_cys()
{
	union un
	{
		char a;
		int i;
	}u;
	u.i = 1;
	return u.a;
}
int main()
{
	//����:int a=0x11223344
	//�͵�ַ-->�ߵ�ַ   ��λ-->��λ   С�˴洢   44 33 22 11
	//�͵�ַ-->�ߵ�ַ   ��λ-->��λ   ��˴洢   11 22 33 44
	int ret = check_cys();
	if (ret == 1)
	{
		printf("С��");
	}
	else
	{
		printf("���");
	}
}