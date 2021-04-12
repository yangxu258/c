#define _CRT_SECURE_NO_WARNINGS 1
#include"List.h"
void ListText()
{
	ListNode* phead = NULL;
	ListInit(&phead);
	//phead = ListInit(phead);
	ListPushback(phead, 1);
	ListPushback(phead, 2);
	ListPushback(phead, 3);
	ListPushback(phead, 4);
	Listprint(phead);
	ListPopback(phead);
	ListPopback(phead);
	ListPopback(phead);
	Listprint(phead);
	ListPushfront(phead, 2);
	ListPushfront(phead, 3);
	ListPushfront(phead, 4);
	Listprint(phead);
	ListPopfront(phead);
	ListPopfront(phead);
	
	Listprint(phead);
	ListDestory(phead);
}
void ListText1()
{
	ListNode* phead = NULL;
	ListInit(&phead);
	ListPushback(phead, 1);
	ListPushback(phead, 2);
	ListPushback(phead, 3);
	ListPushback(phead, 4);
	Listprint(phead);
	ListNode* pos=Listfind(phead, 3);
	ListInsert(pos, 30);
	Listprint(phead);
	ListErase(pos->prev);
	Listprint(phead);
	ListDestory(phead);
}
int main()
{
	ListText1();
	return 0;
}