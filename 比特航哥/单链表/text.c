#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"
int main()
{
	struct SListNode* phead = NULL;
	SListPushBack(&phead, 1);
	SListPushBack(&phead, 2);
	SListPushBack(&phead, 3);
	SListPushBack(&phead, 4);
	SListPushBack(&phead, 5);
	SListPrint(phead);
	SListPopBack(&phead);
	SListPopBack(&phead);
	SListPopBack(&phead);
	SListPopBack(&phead);
	SListPopBack(&phead);
	SListPrint(phead);
	SListPushFront(&phead, 1);
	SListPushFront(&phead, 2);
	SListPushFront(&phead, 3);
	SListPushFront(&phead, 4);
	SListPushFront(&phead, 5);
	SListPrint(phead);
	SListPopFront(&phead);
	SListPopFront(&phead);
	SListPopFront(&phead);
	SListPrint(phead);
	return 0;
}