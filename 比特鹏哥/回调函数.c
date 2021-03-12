#include<stdio.h>

void print(char *str)
{
	printf("haha:%s\n",str);
}

void test(void (*p)(char*))
{
	printf("test\n");
	p("bit");
}

void main()

{
	test(print);
}