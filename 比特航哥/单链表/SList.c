#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"
struct SListNode* BuySListNode(SListDatetype x)
{
	struct SListNode* newNode = (struct SListNode*)malloc(sizeof(struct SListNode));
	if (newNode == NULL)
	{
		printf("申请空间失败\n");
		return;
	}
	newNode->date = x;
	newNode->next = NULL;
	return newNode;
}
//打印的实现
void SListPrint(struct SListNode* phead)
{
	struct SListNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d ", cur->date);
		cur = cur->next;
	}
	printf("NULL\n");
}
//尾插的实现
void SListPushBack(struct SListNode** phead, SListDatetype x)
{
	struct SListNode* newNode = BuySListNode(x);
	if (*phead == NULL)
	{
		*phead = newNode;
	}
	else
	{
		//找尾
		struct SListNode* tail = *phead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		
		tail->next = newNode;
	}
	
}
//尾删的实现
void SListPopBack(struct SListNode** phead)
{
	if (*phead == NULL)
	{
		return;
	}
	else if ((*phead)->next == NULL)
	{
		free(*phead);
		*phead = NULL;
	}
	else
	{
		struct SListNode* tail = *phead;
		struct SListNode* preva = NULL;
		while (tail->next != NULL)
		{
			preva = tail;
			tail = tail->next;
		}
		free(tail);
		preva->next = NULL;
	}
}

//头插的实现
void SListPushFront(struct SListNode** phead, SListDatetype x)
{
	struct SListNode* newNode = BuySListNode(x);
	newNode->next = *phead;
	*phead = newNode;
}
//头删的实现
void SListPopFront(struct SListNode** phead)
{
	if (*phead == NULL)
	{
		return;
	}
	else
	{
		struct SListNode* newNode = *phead;
		*phead = (*phead)->next;
		free(newNode);
		newNode = NULL;
	}
}