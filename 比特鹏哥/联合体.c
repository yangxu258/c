#include<stdio.h>
//联合体--共用体-->共用一块内存空间
//联合体的创建
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
	//例如:int a=0x11223344
	//低地址-->高地址   低位-->高位   小端存储   44 33 22 11
	//低地址-->高地址   高位-->低位   大端存储   11 22 33 44
	int ret = check_cys();
	if (ret == 1)
	{
		printf("小端");
	}
	else
	{
		printf("大端");
	}
}