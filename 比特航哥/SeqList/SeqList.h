#pragma once
#include<stdio.h>
#include<malloc.h>
#include<assert.h>
typedef int SeqListtype;
//�����ṹ��
struct SeqList
{
	SeqListtype* a;
	int size;//��Ч���ݸ���
	int capacity;//����
};

//�ṹ���ʼ��������
void SeqListInit(struct SeqList* ps);
//���ݺ���������
void SeqListcheckcapacity(struct SeqList* ps);
//ĩβ������ݵ�����
void SeqListpushback(struct SeqList* ps, SeqListtype x);
//ĩβɾ�����ݵ�����
void SeqListpopback(struct SeqList* ps);
//��ͷ������ݵ�����
 void SeqListpushfront(struct SeqList* ps, SeqListtype x);
//��ͷɾ�����ݵ�����
 void SeqListpopfront(struct SeqList* ps);
//��ӡ���ݵ�����
void SeqListprint(struct SeqList* ps);

