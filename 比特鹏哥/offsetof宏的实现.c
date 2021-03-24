#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<stddef.h>
//struct S
//{
//	char a;
//	int b;
//	char c;
//};
//int main()
//{
//	printf("%d\n", offsetof(struct S, a));
//	printf("%d\n", offsetof(struct S, b));
//	printf("%d\n", offsetof(struct S, c));
//	return 0;
//}


//offserofºêµÄÊµÏÖ
#define OFFSETOF(STRUCT_NAME,DATE) (int)&(((STRUCT_NAME*)0)->DATE)
struct S
{
	char a;
	int b;
	char c;
};

int main()
{
	printf("%d\n", OFFSETOF(struct S, a));
	printf("%d\n", OFFSETOF(struct S, b));
	printf("%d\n", OFFSETOF(struct S, c));
	return 0;
}