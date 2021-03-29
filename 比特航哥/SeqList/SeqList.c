#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"
//��ʼ����ʵ��
void SeqListInit(struct SeqList* ps)
{
	//����һ��4��Ԫ�ش�С�Ŀռ�
	ps->a = (SeqListtype*)malloc(sizeof(SeqListtype) * 4);
	if (ps->a == NULL)
	{
		printf("�ڴ�����ʧ��\n");
		return;
	}
	ps->size = 0;
	ps->capacity = 4;
}
//���ݺ�����ʵ��
void SeqListcheckcapacity(struct SeqList* ps)
{
	//�ж��Ƿ�����
	if (ps->size >= ps->capacity)
	{
		ps->capacity *= 2;
		ps->a = realloc(ps->a, sizeof(SeqListtype) * ps->capacity);
		if (ps->a == NULL)
		{
			printf("�����ڴ�ʧ��");
			return;
		}
	}
}
//ĩβ������ݵ�ʵ��
void SeqListpushback(struct SeqList* ps, SeqListtype x)
{
	assert(ps);
	SeqListcheckcapacity(ps);
	ps->a[ps->size] = x;
	ps->size++;
}
//ĩβɾ�����ݵ�ʵ��
void SeqListpopback(struct SeqList* ps)
{
	assert(ps);
	//ps->a[ps->size - 1] = 0;
	ps->size--;
}
//��ͷ������ݵ�ʵ��
void SeqListpushfront(struct SeqList* ps, SeqListtype x)
{
	int end = ps->size - 1;
	SeqListcheckcapacity(ps);
	while (end>=0)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[end+1] = x;
	ps->size++;
}
//��ͷɾ�����ݵ�ʵ��
void SeqListpopfront(struct SeqList* ps)
{
	int start = 0;
	while (start<ps->size-1)
	{
		ps->a[start] = ps->a[start + 1];
		start++;
	}
	ps->size--;
}
//����λ��������ݵ�ʵ��
void SeqListinsert(struct SeqList* ps, int pos, SeqListtype x)
{
	assert(ps);
	assert(pos < ps->size);
	SeqListcheckcapacity(ps);
	int end = ps->size - 1;
	while (end >= pos)
	{
		ps->a[end+1] = ps->a[end];
		end--;
	}
	ps->a[pos] = x;
	ps->size++;
}
//����λ��ɾ�����ݵ�ʵ��
void SeqListerash(struct SeqList* ps, int pos)
{
	assert(ps);
	assert(pos < ps->size);
	int start = pos;
	while (start < ps->size - 1)
	{
		ps->a[start] = ps->a[start + 1];
	}
	ps->size--;
}
//�������ݵ�ʵ��
int SeqListfind(struct SeqList* ps, SeqListtype x)
{
	int i=0;
	while (i < ps->size)
	{
		if (ps->a[i] == x)
		{
			return i;
		}
	}
	return -1;
}
//��ӡ���ݵ�ʵ��
void SeqListprint(struct SeqList* ps)
{
	int i;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
}
//�ݻٶ�̬�ڴ������
void SeqListdestory(struct SeqList* ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->size = 0;
}
