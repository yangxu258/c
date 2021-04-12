#pragma once
#include<stdio.h>
#include<malloc.h>
#include<assert.h>
typedef int ListNodetype;
typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	int date;
}ListNode;
void Listprint(ListNode* phead);
void ListInit(ListNode** phead);
//ListNode* ListInit(ListNode* phead);
ListNode* BuyListnode(ListNodetype x);
void ListPushback(ListNode* phead, ListNodetype x);
void ListPopback(ListNode* phead);
void ListPushfront(ListNode* phead, ListNodetype x);
void ListPopfront(ListNode* phead);
ListNode* Listfind(ListNode* phead, ListNodetype x);
void ListInsert(ListNode* pos, ListNodetype x);
void ListErase(ListNode* pos);
void ListClear(ListNode* phead);
void ListDestory(ListNode* phead);