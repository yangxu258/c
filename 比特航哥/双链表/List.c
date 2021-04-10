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
}
void ListInit(ListNode** phead)
{
	*phead=BuyListnode(0);
	(*phead)->next = *phead;
	(*phead)->prev = *phead;
}
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