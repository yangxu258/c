#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ��ѧϰʹ�ð�λ��& ��������
//1.���������0 & 0 = 0; 0 & 1 = 0; 1 & 0 = 0; 1 & 1 = 1 ������λ�洢��λ����
#include<stdio.h>
int main()
{
	int a, b;
	a = 7;
	b = a & 3;
	printf("%d ", b);
	return 0;
}