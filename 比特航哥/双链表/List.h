#pragma once
#include<stdio.h>
typedef int ListNodetype;
typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	int date;
}ListNode;
void Listprint(ListNode* phead);
void ListInit(ListNode** phead);
ListNode* BuyListnode(ListNodetype x);
void ListPushback(ListNode* phead, ListNodetype x);