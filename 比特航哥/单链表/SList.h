#pragma once
#include<stdio.h>
#include<malloc.h>
typedef int SListDatetype;
typedef struct SListNode
{
	SListDatetype date;
	struct SListNode* next;
}SList;
//打印的定义
void SListPrint(struct SListNode* phead);
//尾插的定义
void SListPushBack(struct SListNode** phead, SListDatetype x);
//尾删的定义
void SListPopBack(struct SListNode** phead);

void SListPushFront(struct SListNode* phead, SListDatetype x);

void SListPopFront(struct SListNode* phead);
