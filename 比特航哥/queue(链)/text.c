#define _CRT_SECURE_NO_WARNINGS 1
#include"queue.h"
void text()
{
	struct Queue ps;
	QNodeType e;
	QueueInit(&ps);
	Queuepushback(&ps, 1);
	Queuepushback(&ps, 2);
	Queuepushback(&ps, 3);
	Queuepopfront(&ps,&e);
	printf("%d ", e);
	Queueprint(&ps);
}
int main()
{
	text();
	return 0;
}