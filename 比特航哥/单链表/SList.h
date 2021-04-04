#pragma once
#include<stdio.h>
#include<malloc.h>
typedef int SListDatetype;
typedef struct SListNode
{
	SListDatetype date;
	struct SListNode* next;
}SList;
//��ӡ�Ķ���
void SListPrint(struct SListNode* phead);
//β��Ķ���
void SListPushBack(struct SListNode** phead, SListDatetype x);
//βɾ�Ķ���
void SListPopBack(struct SListNode** phead);

void SListPushFront(struct SListNode* phead, SListDatetype x);

void SListPopFront(struct SListNode* phead);
