#include<stdio.h>

//二级指针的应用

void main()

{
	int a=30;
	int* pa=&a;
	int* *ppa=&pa;
	printf("%d\n",**ppa);
}
