#define _CRT_SECURE_NO_WARNINGS 1
#include"queue.h"
void QueueInit(struct Queue* ps)
{
	QNode* nownode=(QNode*)malloc(sizeof(QNode));
	nownode->next = NULL;
	nownode->date = 0;
	ps->front = nownode;
	ps->tail = nownode;
}
void Queueprint(struct Queue* ps)
{
	QNode* m = ps->front->next;
	while (m != NULL)
	{
		printf("%d ",m->date );
		m = m->next;
	}
}
void Queuepushback(struct Queue* ps, QNodeType x)
{
	QNode* nownode = (QNode*)malloc(sizeof(QNode));
	nownode->next = NULL;
	nownode->date = x;
	ps->tail->next = nownode;
	ps->tail = nownode;
}
void Queuepopfront(struct Queue* ps, QNodeType* e)
{
	QNode* head = ps->front;
	QNode* first = head->next;
	if (ps->front == ps->tail)
		return;
	else if (head->next == ps->tail)
	{
		*e=first->date;
		free(ps->tail);
		head->next = NULL;
		ps->tail = ps->front;
	}
	else
	{
		*e = first->date;
		head->next = first->next;
		free(first);
	}
}