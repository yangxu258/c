#define _CRT_SECURE_NO_WARNINGS 1
#include"List.h"
void Listprint(ListNode* phead)
{
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d ", cur->date);
		cur = cur->next;
	}
	printf("\n");
}
void ListInit(ListNode** phead)
{
	*phead=BuyListnode(0);
	(*phead)->next = *phead;
	(*phead)->prev = *phead;
}
//ListNode* ListInit(ListNode* phead)
//{
//	phead = BuyListnode(0);
//	phead->next = NULL;
//	phead->prev = NULL;
//	return phead;
//}
ListNode* BuyListnode(ListNodetype x)
{
	ListNode* node = (ListNode*)malloc(sizeof(ListNode));
	node->date = x;
	node->next = NULL;
	node->prev = NULL;
	return node;
}
void ListPushback(ListNode* phead, ListNodetype x)
{
	ListNode* nownode = BuyListnode(x);
	ListNode* tail = phead->prev;
	tail->next = nownode;
	nownode->prev = tail;
	phead->prev = nownode;
	nownode->next = phead;
}
void ListPopback(ListNode* phead)
{
	assert(phead);
	assert(phead -> next != phead);
	ListNode* tail = phead->prev;
	ListNode* tailprev = tail->prev;
	tailprev->next = phead;
	phead->prev = tailprev;
	free(tail);
	tail = NULL;
}
void ListPushfront(ListNode* phead, ListNodetype x)
{
	ListNode* nownode = BuyListnode(x);
	ListNode* first = phead->next;
	nownode->prev = phead;
	phead->next = nownode;
	nownode->next = first;
	first->prev = nownode;
}
void ListPopfront(ListNode* phead)
{
	ListNode* first = phead->next;
	ListNode* second = first->next;
	second->prev = phead;
	phead->next = second;
	free(first);
}
ListNode* Listfind(ListNode* phead, ListNodetype x)
{
	assert(phead);
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->date == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}
void ListInsert(ListNode* pos, ListNodetype x)
{
	assert(pos);
	ListNode* nownode= BuyListnode(x);
	ListNode* posprev = pos->prev;
	posprev->next = nownode;
	nownode->prev = posprev;
	pos->prev = nownode;
	nownode->next = pos;
}
void ListErase(ListNode* pos)
{
	assert(pos);
	ListNode* posprev = pos->prev;
	ListNode* posnext = pos->next;
	posprev->next = posnext;
	posnext->prev = posprev;
	free(pos);
}
void ListClear(ListNode* phead)
{
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		ListNode* next = cur->next;
		free(cur);
		cur = next;
	}
	phead->next = phead;
	phead->prev = phead;
}
void ListDestory(ListNode* phead)
{
	ListClear(phead);
	free(phead);
}