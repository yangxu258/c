#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
#include<math.h>
typedef char stackType;
typedef struct SQstack
{
	stackType* base;
	stackType* top;
	int stacksize;
}SQstack;
void stackprint(SQstack* s);
void Initstack(SQstack* s);
void stackpush(SQstack* s,stackType x);
void stackpop(SQstack* s, stackType* x);
void Clearstack(SQstack* s);
void Distorystack(SQstack* s);
int stacklen(SQstack* s);
