#include<stdio.h>

//����ָ���Ӧ��

void main()

{
	int a=30;
	int* pa=&a;
	int* *ppa=&pa;
	printf("%d\n",**ppa);
}
