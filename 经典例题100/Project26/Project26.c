#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ�����õݹ鷽����5!��
//1.����������ݹ鹫ʽ��fn = fn_1 * 4!
#include<stdio.h>
int FN(int i)
{
	if (i > 1)
		return i * FN(i - 1);
	else
		return 1;
}
int main()
{
	int i = 5;
	printf("%d\n",FN(i));
	return 0;
}