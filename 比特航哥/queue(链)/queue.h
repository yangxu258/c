#pragma once
#include<stdio.h>
#include<malloc.h>
typedef int QNodeType;
typedef struct QNode
{
	QNodeType date;
	struct QNode* next;
}QNode;
struct Queue
{
	QNode* front, * tail;
};
void QueueInit(struct Queue* ps);
void Queueprint(struct Queue* ps);
void Queuepushback(struct Queue* ps, QNodeType x);
void Queuepopfront(struct Queue* ps, QNodeType* e);