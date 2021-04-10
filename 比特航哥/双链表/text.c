#define _CRT_SECURE_NO_WARNINGS 1
#include"List.h"
void ListText()
{
	ListNode* phead = NULL;
	ListInit(&phead);
	ListPushback(phead, 1);
	ListPushback(phead, 2);
	ListPushback(phead, 3);
	ListPushback(phead, 4);
	Listprint(phead);
}
int main()
{
	ListText();
	return 0;
}